#include "ShaderModuleImpl.hpp"

namespace Srsl{

    ShaderModuleImpl::ShaderModuleImpl(const ImportDesc &desc):
    ShaderModule() {
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

        TreeWalker walker(m_Program);
        antlr4::tree::ParseTreeWalker::DEFAULT.walk(&walker, tree);

    }

    ShaderModuleImpl::~ShaderModuleImpl() {

    }

    void ShaderModuleImpl::exportAstDot(const std::string &outputFile) {

    }

    void ShaderModuleImpl::exportSymbolTableHtml(const std::string &outputFile) {

    }

    void ShaderModuleImpl::exportShader(const ExportDesc &desc) {

    }

    SRSL_SHADER_TYPE ShaderModuleImpl::getShaderType() const {
        return SRSL_SHADER_NONE;
    }
}
