#include "TreeWalker.hpp"

namespace Srsl{

    TreeWalker::TreeWalker(UP<AbstractNode> &rootNode):
    m_RootNode(rootNode),
    m_CurrentNode(rootNode.get()){

    }

    void TreeWalker::enterShaderTypeSpec(SrslGrammarParser::ShaderTypeSpecContext *ctx) {

    }

    void TreeWalker::exitShaderTypeSpec(SrslGrammarParser::ShaderTypeSpecContext *ctx) {

    }

    void TreeWalker::enterStatement(SrslGrammarParser::StatementContext *ctx) {

    }

    void TreeWalker::exitStatement(SrslGrammarParser::StatementContext *ctx) {

    }

    void TreeWalker::enterNewVariable(SrslGrammarParser::NewVariableContext *ctx) {

    }

    void TreeWalker::exitNewVariable(SrslGrammarParser::NewVariableContext *ctx) {

    }

    void TreeWalker::enterExpression(SrslGrammarParser::ExpressionContext *ctx) {

    }

    void TreeWalker::exitExpression(SrslGrammarParser::ExpressionContext *ctx) {

    }

    void TreeWalker::enterVariable(SrslGrammarParser::VariableContext *ctx) {

    }

    void TreeWalker::exitVariable(SrslGrammarParser::VariableContext *ctx) {

    }

    void TreeWalker::enterConstant(SrslGrammarParser::ConstantContext *ctx) {
    }

    void TreeWalker::exitConstant(SrslGrammarParser::ConstantContext *ctx) {

    }

    void TreeWalker::enterScope(SrslGrammarParser::ScopeContext *ctx) {

    }

    void TreeWalker::exitScope(SrslGrammarParser::ScopeContext *ctx) {

    }

    void TreeWalker::enterWhileLoop(SrslGrammarParser::WhileLoopContext *ctx) {

    }

    void TreeWalker::exitWhileLoop(SrslGrammarParser::WhileLoopContext *ctx) {

    }

    void TreeWalker::enterForLoop(SrslGrammarParser::ForLoopContext *ctx) {

    }

    void TreeWalker::exitForLoop(SrslGrammarParser::ForLoopContext *ctx) {

    }

    void TreeWalker::enterIfStatement(SrslGrammarParser::IfStatementContext *ctx) {

    }

    void TreeWalker::exitIfStatement(SrslGrammarParser::IfStatementContext *ctx) {

    }

    void TreeWalker::enterElseStatement(SrslGrammarParser::ElseStatementContext *ctx) {

    }

    void TreeWalker::exitElseStatement(SrslGrammarParser::ElseStatementContext *ctx) {

    }

    void TreeWalker::enterElseIfStatement(SrslGrammarParser::ElseIfStatementContext *ctx) {

    }

    void TreeWalker::exitElseIfStatement(SrslGrammarParser::ElseIfStatementContext *ctx) {

    }

    void TreeWalker::enterControlFlow(SrslGrammarParser::ControlFlowContext *ctx) {

    }

    void TreeWalker::exitControlFlow(SrslGrammarParser::ControlFlowContext *ctx) {

    }

    void TreeWalker::enterFunctionDeclaration(SrslGrammarParser::FunctionDeclarationContext *ctx) {

    }

    void TreeWalker::exitFunctionDeclaration(SrslGrammarParser::FunctionDeclarationContext *ctx) {

    }

    void TreeWalker::enterFunctionCall(SrslGrammarParser::FunctionCallContext *ctx) {

    }

    void TreeWalker::exitFunctionCall(SrslGrammarParser::FunctionCallContext *ctx) {

    }

    void TreeWalker::enterInitializerList(SrslGrammarParser::InitializerListContext *ctx) {

    }

    void TreeWalker::exitInitializerList(SrslGrammarParser::InitializerListContext *ctx) {

    }

    void TreeWalker::enterStructDeclaration(SrslGrammarParser::StructDeclarationContext *ctx) {

    }

    void TreeWalker::exitStructDeclaration(SrslGrammarParser::StructDeclarationContext *ctx) {

    }

    void TreeWalker::enterTextureDeclaration(SrslGrammarParser::TextureDeclarationContext *ctx) {

    }

    void TreeWalker::exitTextureDeclaration(SrslGrammarParser::TextureDeclarationContext *ctx) {

    }

    void TreeWalker::enterSamplerDeclaration(SrslGrammarParser::SamplerDeclarationContext *ctx ) {

    }

    void TreeWalker::exitSamplerDeclaration(SrslGrammarParser::SamplerDeclarationContext * ctx) {

    }

    void TreeWalker::enterConstantBufferDeclaration(SrslGrammarParser::ConstantBufferDeclarationContext * ctx) {

    }

    void TreeWalker::exitConstantBufferDeclaration(SrslGrammarParser::ConstantBufferDeclarationContext *ctx) {

    }

    void TreeWalker::enterReturnStatement(SrslGrammarParser::ReturnStatementContext *ctx) {

    }

    void TreeWalker::exitReturnStatement(SrslGrammarParser::ReturnStatementContext *ctx) {

    }

    void TreeWalker::enterShaderInterface(SrslGrammarParser::ShaderInterfaceContext *ctx) {

    }

    void TreeWalker::exitShaderInterface(SrslGrammarParser::ShaderInterfaceContext *ctx) {

    }

    void TreeWalker::enterTypeConstructor(SrslGrammarParser::TypeConstructorContext *ctx) {

    }

    void TreeWalker::exitTypeConstructor(SrslGrammarParser::TypeConstructorContext *ctx) {

    }

    void TreeWalker::enterMemberAccess(SrslGrammarParser::MemberAccessContext *ctx) {

    }

    void TreeWalker::exitMemberAccess(SrslGrammarParser::MemberAccessContext *ctx) {

    }

    void TreeWalker::enterTestCase(SrslGrammarParser::TestCaseContext *ctx) {

    }

    void TreeWalker::exitTestCase(SrslGrammarParser::TestCaseContext *ctx) {

    }
}
