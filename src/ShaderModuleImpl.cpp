#include "ShaderModuleImpl.hpp"
#include "AbstractSyntaxTree/Internal/TestEvaluationNode.hpp"

namespace Srsl{

    ShaderModuleImpl::ShaderModuleImpl(const ImportDesc &desc):
    ShaderModule(),
    m_SymbolTable(createRCP<SymbolTable>("GLOBAL")){
        m_ProgramInfo.shaderType = SRSL_SHADER_NONE;
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

        TreeWalker walker(m_Program, m_ProgramInfo);
        antlr4::tree::ParseTreeWalker::DEFAULT.walk(&walker, tree);

        SRSL_ASSERT(m_Program != nullptr, "Program (%p) is null", this);

        m_Program->construct(); // fill in missing information

        // ONLY TOP LEVEL SYMBOL TABLE NEEDS TO BE FILLED
        loadIntrinsicFunctions(m_SymbolTable);
        m_Program->fillSymbolTable(m_SymbolTable);

        m_Program->optimize();

        SRSL_POSTCONDITION(m_ProgramInfo.shaderType != SRSL_SHADER_NONE, "Shader type is (%d)", m_ProgramInfo.shaderType);
        SRSL_POSTCONDITION(m_Program != nullptr, "Program is (%d)", m_Program.get());
        SRSL_POSTCONDITION(m_ProgramInfo.mainFunction != nullptr, "Main function is (%d)", m_ProgramInfo.mainFunction);

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

        // determine the target language
        UP<Exporter> exporter = nullptr;
        switch (desc.target) {
            case SRSL_TARGET_GLSL:
                exporter = createUP<GlslExporter>(desc, m_ProgramInfo.shaderType, limits);
                break;
            case SRSL_TARGET_HLSL:
                exporter = createUP<HlslExporter>(desc, m_ProgramInfo.shaderType, limits);
                break;
            case SRSL_TARGET_CPP:
//                exporter = createUP<CppExporter>(desc, m_ShaderType);
                break;
            default:
                SRSL_THROW_EXCEPTION("Invalid target (%d)", desc.target);
        }

        // determine output buffer
        std::string* out = nullptr;
        switch (m_ProgramInfo.shaderType){
            case SRSL_VERTEX_SHADER: out = &desc.vertexShaderOut; break;
            case SRSL_FRAGMENT_SHADER: out = &desc.fragmentShaderOut; break;
            default: SRSL_THROW_EXCEPTION("Invalid shader type (%d)", m_ProgramInfo.shaderType);
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
        return m_ProgramInfo.shaderType;
    }

    void ShaderModuleImpl::validate(Validator& validator) {
        SRSL_PRECONDITION(m_Program != nullptr, "Program is null")

        m_Program->validate(validator);
    }

    void ShaderModuleImpl::generateTestCode(TestConfig &desc) {
        // obtain the scope for the main function, this scope will contain the test driver code
        auto mainScope = m_ProgramInfo.mainFunction->getScope();

        auto testEvaluationNode = mainScope->addChild<TestEvaluationNode>(desc.ssboName, desc.ssboSlot, m_ProgramInfo);
        auto ten = dynamic_cast<TestEvaluationNode*>(testEvaluationNode);
        ten->construct();
        ten->fillSymbolTable(m_SymbolTable);

        // convert all test case nodes to evaluable code
        TestCodeGenerator codeGenerator;
        codeGenerator.testSSBOName = desc.ssboName;
        m_Program->createTestCode(codeGenerator);

        // fill in the output params of the testConfig
        ten->configureTestConfig(desc);
        desc.totalLineCount = codeGenerator.totalLines - mainScope->getLineCount();
    }
}
