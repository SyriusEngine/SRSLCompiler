#include <regex>
#include "TreeWalker.hpp"

namespace Srsl{

    TreeWalker::TreeWalker(SharedPtr<BaseNode>& root, SharedPtr<SymbolTable> symbolTable, ProgramInfo& programInfo):
    m_Root(root), m_SymbolTable(symbolTable), m_ProgramInfo(programInfo){}

    void TreeWalker::enterShaderTypeSpec(SrslGrammarParser::ShaderTypeSpecContext *ctx) {
        auto shaderType = ctx->SHADER_TYPE()->getText();
        SRSL_SHADER_TYPE type = SRSL_SHADER_NONE;
        if (shaderType == "Vertex"){
            type = SRSL_VERTEX_SHADER;
        }
        else if (shaderType == "Fragment"){
            type = SRSL_FRAGMENT_SHADER;
        }
        else {
            throw SrslException("Unknown shader type: " + shaderType);
        }
        m_ProgramInfo.shaderType = type;
        m_Root = createSharedPtr<ShaderTypeNode>(type, m_SymbolTable, ctx->start->getLine(), ctx->start->getCharPositionInLine());
    }
}
