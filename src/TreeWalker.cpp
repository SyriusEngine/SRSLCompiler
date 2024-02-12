#include "TreeWalker.hpp"

namespace Srsl{

    TreeWalker::TreeWalker(UP<AbstractNode> &rootNode, SRSL_SHADER_TYPE& shaderType):
    m_RootNode(rootNode),
    m_ShaderType(shaderType),
    m_CurrentNode(rootNode.get()){
        SRSL_PRECONDITION(m_RootNode == nullptr, "There already exists a root node");

    }

    void TreeWalker::enterShaderTypeSpec(SrslGrammarParser::ShaderTypeSpecContext *ctx) {
        auto type = ctx->SHADER_TYPE()->getText();
        if (type == "Vertex"){
            m_RootNode = createUP<ShaderTypeNode>(SRSL_VERTEX_SHADER, ctx->start->getLine());
        }
        else if (type == "Fragment"){
            m_RootNode = createUP<ShaderTypeNode>(SRSL_FRAGMENT_SHADER, ctx->start->getLine());
        }
        else if (type == "Geometry"){
            m_RootNode = createUP<ShaderTypeNode>(SRSL_GEOMETRY_SHADER, ctx->start->getLine());
        }
        else {
            throw std::runtime_error("Unknown shader type");
        }
        m_CurrentNode = m_RootNode.get();
    }

    void TreeWalker::exitShaderTypeSpec(SrslGrammarParser::ShaderTypeSpecContext *ctx) {
        // when entering the shader type spec, we create the root of the tree
        // and set the current node to the root. When we exit the shader type spec
        // there is no other node to return to
    }

    void TreeWalker::enterStatement(SrslGrammarParser::StatementContext *ctx) {
        SRSL_PRECONDITION(m_CurrentNode != nullptr, "Current node is null")

    }

    void TreeWalker::exitStatement(SrslGrammarParser::StatementContext *ctx) {

    }

    void TreeWalker::enterNewVariable(SrslGrammarParser::NewVariableContext *ctx) {
        SRSL_PRECONDITION(m_CurrentNode != nullptr, "Current node is null")

    }

    void TreeWalker::exitNewVariable(SrslGrammarParser::NewVariableContext *ctx) {

    }

    void TreeWalker::enterExpression(SrslGrammarParser::ExpressionContext *ctx) {
        SRSL_PRECONDITION(m_CurrentNode != nullptr, "Current node is null")

    }

    void TreeWalker::exitExpression(SrslGrammarParser::ExpressionContext *ctx) {

    }

    void TreeWalker::enterVariable(SrslGrammarParser::VariableContext *ctx) {
        SRSL_PRECONDITION(m_CurrentNode != nullptr, "Current node is null")

    }

    void TreeWalker::exitVariable(SrslGrammarParser::VariableContext *ctx) {

    }

    void TreeWalker::enterConstant(SrslGrammarParser::ConstantContext *ctx) {
        SRSL_PRECONDITION(m_CurrentNode != nullptr, "Current node is null")
    }

    void TreeWalker::exitConstant(SrslGrammarParser::ConstantContext *ctx) {

    }

    void TreeWalker::enterScope(SrslGrammarParser::ScopeContext *ctx) {
        SRSL_PRECONDITION(m_CurrentNode != nullptr, "Current node is null")

    }

    void TreeWalker::exitScope(SrslGrammarParser::ScopeContext *ctx) {

    }

    void TreeWalker::enterWhileLoop(SrslGrammarParser::WhileLoopContext *ctx) {
        SRSL_PRECONDITION(m_CurrentNode != nullptr, "Current node is null")

    }

    void TreeWalker::exitWhileLoop(SrslGrammarParser::WhileLoopContext *ctx) {

    }

    void TreeWalker::enterForLoop(SrslGrammarParser::ForLoopContext *ctx) {
        SRSL_PRECONDITION(m_CurrentNode != nullptr, "Current node is null")

    }

    void TreeWalker::exitForLoop(SrslGrammarParser::ForLoopContext *ctx) {

    }

    void TreeWalker::enterIfStatement(SrslGrammarParser::IfStatementContext *ctx) {
        SRSL_PRECONDITION(m_CurrentNode != nullptr, "Current node is null")

    }

    void TreeWalker::exitIfStatement(SrslGrammarParser::IfStatementContext *ctx) {

    }

    void TreeWalker::enterElseStatement(SrslGrammarParser::ElseStatementContext *ctx) {
        SRSL_PRECONDITION(m_CurrentNode != nullptr, "Current node is null")

    }

    void TreeWalker::exitElseStatement(SrslGrammarParser::ElseStatementContext *ctx) {

    }

    void TreeWalker::enterElseIfStatement(SrslGrammarParser::ElseIfStatementContext *ctx) {
        SRSL_PRECONDITION(m_CurrentNode != nullptr, "Current node is null")

    }

    void TreeWalker::exitElseIfStatement(SrslGrammarParser::ElseIfStatementContext *ctx) {

    }

    void TreeWalker::enterControlFlow(SrslGrammarParser::ControlFlowContext *ctx) {
        SRSL_PRECONDITION(m_CurrentNode != nullptr, "Current node is null")

    }

    void TreeWalker::exitControlFlow(SrslGrammarParser::ControlFlowContext *ctx) {

    }

    void TreeWalker::enterFunctionDeclaration(SrslGrammarParser::FunctionDeclarationContext *ctx) {
        SRSL_PRECONDITION(m_CurrentNode != nullptr, "Current node is null")

    }

    void TreeWalker::exitFunctionDeclaration(SrslGrammarParser::FunctionDeclarationContext *ctx) {

    }

    void TreeWalker::enterFunctionCall(SrslGrammarParser::FunctionCallContext *ctx) {
        SRSL_PRECONDITION(m_CurrentNode != nullptr, "Current node is null")

    }

    void TreeWalker::exitFunctionCall(SrslGrammarParser::FunctionCallContext *ctx) {

    }

    void TreeWalker::enterInitializerList(SrslGrammarParser::InitializerListContext *ctx) {
        SRSL_PRECONDITION(m_CurrentNode != nullptr, "Current node is null")

    }

    void TreeWalker::exitInitializerList(SrslGrammarParser::InitializerListContext *ctx) {

    }

    void TreeWalker::enterStructDeclaration(SrslGrammarParser::StructDeclarationContext *ctx) {
        SRSL_PRECONDITION(m_CurrentNode != nullptr, "Current node is null")

    }

    void TreeWalker::exitStructDeclaration(SrslGrammarParser::StructDeclarationContext *ctx) {

    }

    void TreeWalker::enterTextureDeclaration(SrslGrammarParser::TextureDeclarationContext *ctx) {
        SRSL_PRECONDITION(m_CurrentNode != nullptr, "Current node is null")

    }

    void TreeWalker::exitTextureDeclaration(SrslGrammarParser::TextureDeclarationContext *ctx) {

    }

    void TreeWalker::enterSamplerDeclaration(SrslGrammarParser::SamplerDeclarationContext *ctx ) {
        SRSL_PRECONDITION(m_CurrentNode != nullptr, "Current node is null")

    }

    void TreeWalker::exitSamplerDeclaration(SrslGrammarParser::SamplerDeclarationContext * ctx) {

    }

    void TreeWalker::enterConstantBufferDeclaration(SrslGrammarParser::ConstantBufferDeclarationContext * ctx) {
        SRSL_PRECONDITION(m_CurrentNode != nullptr, "Current node is null")

    }

    void TreeWalker::exitConstantBufferDeclaration(SrslGrammarParser::ConstantBufferDeclarationContext *ctx) {

    }

    void TreeWalker::enterReturnStatement(SrslGrammarParser::ReturnStatementContext *ctx) {
        SRSL_PRECONDITION(m_CurrentNode != nullptr, "Current node is null")

    }

    void TreeWalker::exitReturnStatement(SrslGrammarParser::ReturnStatementContext *ctx) {

    }

    void TreeWalker::enterShaderInterface(SrslGrammarParser::ShaderInterfaceContext *ctx) {
        SRSL_PRECONDITION(m_CurrentNode != nullptr, "Current node is null")

    }

    void TreeWalker::exitShaderInterface(SrslGrammarParser::ShaderInterfaceContext *ctx) {

    }

    void TreeWalker::enterTypeConstructor(SrslGrammarParser::TypeConstructorContext *ctx) {
        SRSL_PRECONDITION(m_CurrentNode != nullptr, "Current node is null")

    }

    void TreeWalker::exitTypeConstructor(SrslGrammarParser::TypeConstructorContext *ctx) {

    }

    void TreeWalker::enterMemberAccess(SrslGrammarParser::MemberAccessContext *ctx) {
        SRSL_PRECONDITION(m_CurrentNode != nullptr, "Current node is null")

    }

    void TreeWalker::exitMemberAccess(SrslGrammarParser::MemberAccessContext *ctx) {

    }

    void TreeWalker::enterTestCase(SrslGrammarParser::TestCaseContext *ctx) {
        SRSL_PRECONDITION(m_CurrentNode != nullptr, "Current node is null")

    }

    void TreeWalker::exitTestCase(SrslGrammarParser::TestCaseContext *ctx) {

    }
}
