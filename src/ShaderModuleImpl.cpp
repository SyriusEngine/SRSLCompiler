#include "ShaderModuleImpl.hpp"
#include "AbstractSyntaxTree/Internal/TestEvaluationNode.hpp"

namespace Srsl{

    ShaderModuleImpl::ShaderModuleImpl(const ImportDesc &desc):
    ShaderModule(),
    m_SymbolTable(createRCP<SymbolTable>("GLOBAL")),
    m_ShaderType(SRSL_SHADER_NONE){
        UP<antlr4::ANTLRInputStream> input = nullptr;
        if (desc.loadType == SRSL_LOAD_FROM_FILE){
            std::ifstream file(desc.source);
            input = createUP<antlr4::ANTLRInputStream>(file);
        }
        else if (desc.loadType == SRSL_LOAD_FROM_MEMORY){
            input = createUP<antlr4::ANTLRInputStream>(desc.source);
        }
        else{
            throw std::runtime_error("Invalid load type");
        }
        SrslGrammarLexer lexer(input.get());
        antlr4::CommonTokenStream tokens(&lexer);
        SrslGrammarParser parser(&tokens);
        parser.removeErrorListeners();
        UP<SrslErrorListener> errorListener = createUP<SrslErrorListener>();
        parser.addErrorListener(errorListener.get());
        antlr4::tree::ParseTree* tree = parser.file();

        TreeWalker walker(m_Program, m_ShaderType);
        antlr4::tree::ParseTreeWalker::DEFAULT.walk(&walker, tree);

        SRSL_ASSERT(m_Program != nullptr, "Program (%p) is null", this);

        m_Program->construct(); // fill in missing information

        // ONLY TOP LEVEL SYMBOL TABLE NEEDS TO BE FILLED
        loadIntrinsicFunctions(m_SymbolTable);
        m_Program->fillSymbolTable(m_SymbolTable);

        m_Program->optimize();

        SRSL_POSTCONDITION(m_ShaderType != SRSL_SHADER_NONE, "Shader type is (%d)", m_ShaderType);
    }

    ShaderModuleImpl::~ShaderModuleImpl() = default;

    void ShaderModuleImpl::exportAstDot(const std::string &outputFile) {
        SRSL_PRECONDITION(m_Program != nullptr, "Program is null")

        std::ofstream file(outputFile);
        file << "digraph G {" << std::endl;
        m_Program->toDot(file);
        file << "}" << std::endl;
    }

    void ShaderModuleImpl::exportSymbolTableHtml(const std::string &outputFile) {
        SRSL_PRECONDITION(m_SymbolTable != nullptr, "Symbol table is null")

        std::ofstream file(outputFile);
        file << "<!DOCTYPE html>" << std::endl;
        file << "<html>" << std::endl;
        file << "<head>" << std::endl;
        file << "<title>Symbol Tables</title>" << std::endl;
        file << "</head>" << std::endl;
        file << "<body>" << std::endl;
        file << "<h1>Symbol Tables</h1>" << std::endl;
        m_SymbolTable->toHtml(file);
        file << "</body>" << std::endl;
        file << "</html>" << std::endl;
    }

    void ShaderModuleImpl::exportShader(ExportDesc &desc, const ShaderLimits& limits) {
        SRSL_PRECONDITION(m_Program != nullptr, "Program is null")

        if (desc.exportTestCases){
            if (m_ShaderType == SRSL_VERTEX_SHADER) {
                generateTestCode(desc.vertexShaderTestConfig);
            }
            else if (m_ShaderType == SRSL_FRAGMENT_SHADER) {
                generateTestCode(desc.fragmentShaderTestConfig);
            }
            else{
                SRSL_THROW_EXCEPTION("Invalid shader type (%d)", m_ShaderType);
            }
        }

        // determine the target language
        UP<Exporter> exporter = nullptr;
        switch (desc.target) {
            case SRSL_TARGET_GLSL:
                exporter = createUP<GlslExporter>(desc, m_ShaderType, limits);
                break;
            case SRSL_TARGET_HLSL:
                exporter = createUP<HlslExporter>(desc, m_ShaderType, limits);
                break;
            case SRSL_TARGET_CPP:
//                exporter = createUP<CppExporter>(desc, m_ShaderType);
                break;
            default:
                SRSL_THROW_EXCEPTION("Invalid target (%d)", desc.target);
        }

        // determine output buffer
        std::string* out = nullptr;
        switch (m_ShaderType) {
            case SRSL_VERTEX_SHADER: out = &desc.vertexShaderOut; break;
            case SRSL_FRAGMENT_SHADER: out = &desc.fragmentShaderOut; break;
            default: SRSL_THROW_EXCEPTION("Invalid shader type (%d)", m_ShaderType);
        }

        SRSL_ASSERT(out != nullptr, "Output buffer is null")

        // how to export?
        if (desc.writeType == SRSL_WRITE_TO_FILE){
            std::string buffer;
            m_Program->generateCode(exporter, "");
            exporter->getShaderCode(buffer);
            std::ofstream file(*out);
            file << buffer;
            file.close();
        }
        else{
            m_Program->generateCode(exporter, "");
            exporter->getShaderCode(*out);
        }
    }

    SRSL_SHADER_TYPE ShaderModuleImpl::getShaderType() const {
        return m_ShaderType;
    }

    void ShaderModuleImpl::validate(Executor& validator) {
        SRSL_PRECONDITION(m_Program != nullptr, "Program is null")

        m_Program->validate(validator);
    }

    void ShaderModuleImpl::generateTestCode(TestConfig &desc) {
        // convert all test case nodes to evaluable code
        TestCodeGenerator codeGenerator;
        m_Program->createTestCode(codeGenerator);
        if (codeGenerator.testCases.empty()){
            return;
        }

        // obtain the scope for the main function, this scope will contain the test driver code
        auto mainFunction = m_Program->getMainFunction();
        if (mainFunction == nullptr){
            SRSL_THROW_EXCEPTION("Main function (%p) is null", mainFunction);
        }
        auto mainScope = mainFunction->getScope();

        // the last child added to the scopeNode will be a TestEvaluationNode
        // that generate driver code for the test cases
        auto testEvaluationNode = mainScope->addChild<TestEvaluationNode>(codeGenerator.testCases, desc.ssboSlot, 0);
        // add test case names to the output parameter
        for (auto testCase : codeGenerator.testCases){
            desc.testCaseNames.push_back(testCase->getValue());
        }
    }
}
