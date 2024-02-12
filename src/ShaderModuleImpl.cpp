#include "ShaderModuleImpl.hpp"

namespace Srsl{

    ShaderModuleImpl::ShaderModuleImpl(const ImportDesc &desc):
    ShaderModule(),
    m_SymbolTable(createRCP<SymbolTable>("GLOBAL")){
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
//        m_Program->fillSymbolTable(m_SymbolTable);
//        m_Program->validate();
        m_Program->optimize();


    }

    ShaderModuleImpl::~ShaderModuleImpl() {

    }

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
        file << "</table>" << std::endl;
        file << "</body>" << std::endl;
        file << "</html>" << std::endl;
    }

    void ShaderModuleImpl::exportShader(const ExportDesc &desc) {

    }

    SRSL_SHADER_TYPE ShaderModuleImpl::getShaderType() const {
        return m_ShaderType;
    }
}
