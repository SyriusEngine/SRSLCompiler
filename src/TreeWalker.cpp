#include <regex>
#include "TreeWalker.hpp"

namespace Srsl{

    TreeWalker::TreeWalker(Ptr<BaseNode>& root, SharedPtr<SymbolTable> symbolTable, ProgramInfo& programInfo):
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
        m_Root = createPtr<ShaderTypeNode>(type, m_SymbolTable, ctx->start->getLine(), ctx->start->getCharPositionInLine());
        m_CurrentNode = m_Root.get();
    }

    void TreeWalker::exitShaderTypeSpec(SrslGrammarParser::ShaderTypeSpecContext *ctx) {
        // DO NOTHING
    }

    void TreeWalker::enterNewVariable(SrslGrammarParser::NewVariableContext *ctx) {
        const bool isConst = !ctx->CONST().empty();
        std::vector<u32> arraySizes;
        for (auto& size : ctx->NUMBER()){
            arraySizes.push_back(std::stoi(size->getText()));
        }
        std::string name;
        std::string type;
        // if the TYPE() is null, then the type is a user defined type which is the first VAR_NAME
        if (ctx->TYPE()){
            type = ctx->TYPE()->getText();
            name = ctx->VAR_NAME(0)->getText();
        }
        else{
            type = ctx->VAR_NAME(0)->getText();
            name = ctx->VAR_NAME(1)->getText();
        }
        SymbolType symbolType(type, isConst, arraySizes);
        m_CurrentNode = m_CurrentNode->addChild<NewVariableNode>(name, symbolType,
                                                                   m_SymbolTable, ctx->start->getLine(),
                                                                   ctx->start->getCharPositionInLine());
    }

    void TreeWalker::exitNewVariable(SrslGrammarParser::NewVariableContext *ctx) {
        m_CurrentNode = m_CurrentNode->getParent();
    }
}
