#include "ShaderModuleImpl.hpp"

namespace Srsl{

    ShaderModuleImpl::ShaderModuleImpl(const std::string& source, const ShaderLimits& shaderLimits):
    ShaderModule(shaderLimits){
        UP<antlr4::ANTLRInputStream> input = createUP<antlr4::ANTLRInputStream>(source);
        SrslGrammarLexer lexer(input.get());
        antlr4::CommonTokenStream tokens(&lexer);
        SrslGrammarParser parser(&tokens);
        parser.removeErrorListeners();
        UP<SrslErrorListener> errorListener = createUP<SrslErrorListener>();
        parser.addErrorListener(errorListener.get());
        antlr4::tree::ParseTree* tree = parser.file();

    }

    ShaderModuleImpl::~ShaderModuleImpl() = default;

    void ShaderModuleImpl::exportAstDot(const std::string &outputFile) {
    }

    void ShaderModuleImpl::exportSymbolTableHtml(const std::string &outputFile) {
        std::ofstream file(outputFile);
        file << "<!DOCTYPE html>" << std::endl;
        file << "<html>" << std::endl;
        file << "<head>" << std::endl;
        file << "<title>Symbol Tables</title>" << std::endl;
        file << "</head>" << std::endl;
        file << "<body>" << std::endl;
        file << "<h1>Symbol Tables</h1>" << std::endl;
//        m_SymbolTable->toHtml(file);
        file << "</body>" << std::endl;
        file << "</html>" << std::endl;
    }

    void ShaderModuleImpl::exportShader(const ExportDesc& exportDesc) {
    }

}
