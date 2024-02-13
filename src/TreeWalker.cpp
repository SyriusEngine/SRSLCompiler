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
            m_ShaderType = SRSL_VERTEX_SHADER;
        }
        else if (type == "Fragment"){
            m_RootNode = createUP<ShaderTypeNode>(SRSL_FRAGMENT_SHADER, ctx->start->getLine());
            m_ShaderType = SRSL_FRAGMENT_SHADER;
        }
        else if (type == "Geometry"){
            m_RootNode = createUP<ShaderTypeNode>(SRSL_GEOMETRY_SHADER, ctx->start->getLine());
            m_ShaderType = SRSL_GEOMETRY_SHADER;
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

    void TreeWalker::enterNewVariable(SrslGrammarParser::NewVariableContext *ctx) {
        SRSL_PRECONDITION(m_CurrentNode != nullptr, "Current node is null")

        std::string name;
        std::string semantic;
        std::vector<uint32> arraySizes;
        std::string type;
        bool isConst = false;
        if (ctx->TYPE() != nullptr){
            type = ctx->TYPE()->getText();
            name = ctx->VAR_NAME()[0]->getText();
        }
        else {
            type = ctx->VAR_NAME()[0]->getText();
            name = ctx->VAR_NAME()[1]->getText();
        }
        for (const auto& number: ctx->NUMBER()){
            arraySizes.push_back(std::stoi(number->getText()));
        }
        isConst = !ctx->CONST().empty();
        if (ctx->COLON() != nullptr){
            semantic = ctx->VAR_NAME()[1]->getText();
        }
        TypeDesc vtDesc(type, isConst, arraySizes);

        auto newCurrent = m_CurrentNode->addChild<NewVariableNode>(name, semantic, vtDesc, ctx->start->getLine());
        m_CurrentNode = newCurrent;
    }

    void TreeWalker::exitNewVariable(SrslGrammarParser::NewVariableContext *ctx) {
        m_CurrentNode = m_CurrentNode->getParent();
    }

    void TreeWalker::enterExpression(SrslGrammarParser::ExpressionContext *ctx) {
        SRSL_PRECONDITION(m_CurrentNode != nullptr, "Current node is null")

        auto isBracket = (ctx->PARENO() != nullptr) || (ctx->PARENC() != nullptr);
        if (isBracket){
            m_BracketStack.push(m_CurrentNode);
        }
        else if (ctx->expression().size() == 1){
            if (ctx->CREMENT() != nullptr){
                auto newCurrent = m_CurrentNode->addChild<ExpressionNode>(ctx->CREMENT()->getText(), OPERATION_UNARY, ctx->start->getLine());
                m_CurrentNode = newCurrent;
            }
            else if (ctx->NOT() != nullptr){
                auto newCurrent = m_CurrentNode->addChild<ExpressionNode>("!", OPERATION_UNARY, ctx->start->getLine());
                m_CurrentNode = newCurrent;
            }
            else if (ctx->MINUS() != nullptr){
                auto newCurrent = m_CurrentNode->addChild<ExpressionNode>("-", OPERATION_UNARY, ctx->start->getLine());
                m_CurrentNode = newCurrent;
            }
            else{
                SRSL_THROW_EXCEPTION("Unknown unary expression")
            }

        }
        else if (ctx->expression().size() == 2){
            if (ctx->MULTIPLY() != nullptr){
                auto newCurrent = m_CurrentNode->addChild<ExpressionNode>("*", OPERATION_BINARY, ctx->start->getLine());
                m_CurrentNode = newCurrent;
            }
            else if (ctx->DIVIDE() != nullptr){
                auto newCurrent = m_CurrentNode->addChild<ExpressionNode>("/", OPERATION_BINARY, ctx->start->getLine());
                m_CurrentNode = newCurrent;
            }
            else if (ctx->PLUS() != nullptr){
                auto newCurrent = m_CurrentNode->addChild<ExpressionNode>("+", OPERATION_BINARY, ctx->start->getLine());
                m_CurrentNode = newCurrent;
            }
            else if (ctx->MINUS() != nullptr){
                auto newCurrent = m_CurrentNode->addChild<ExpressionNode>("-", OPERATION_BINARY, ctx->start->getLine());
                m_CurrentNode = newCurrent;
            }
            else if (ctx->OPERATION() != nullptr){
                auto newCurrent = m_CurrentNode->addChild<ExpressionNode>(ctx->OPERATION()->getText(), OPERATION_BINARY, ctx->start->getLine());
                m_CurrentNode = newCurrent;
            }
            else{
                SRSL_THROW_EXCEPTION("Unknown unary expression")
            }
        }
    }

    void TreeWalker::exitExpression(SrslGrammarParser::ExpressionContext *ctx) {
        auto isBracket = (ctx->PARENO() != nullptr) || (ctx->PARENC() != nullptr);
        if (isBracket){

        }
        else if (ctx->expression().size() == 2 or ctx->expression().size() == 1){
            m_CurrentNode = m_CurrentNode->getParent();
        }
    }

    void TreeWalker::enterAssignment(SrslGrammarParser::AssignmentContext *ctx) {
        SRSL_PRECONDITION(m_CurrentNode != nullptr, "Current node is null")

        auto newCurrent = m_CurrentNode->addChild<AssignmentNode>(ctx->start->getLine());
        m_CurrentNode = newCurrent;
    }

    void TreeWalker::exitAssignment(SrslGrammarParser::AssignmentContext *ctx) {
        m_CurrentNode = m_CurrentNode->getParent();
    }

    void TreeWalker::enterVariable(SrslGrammarParser::VariableContext *ctx) {
        SRSL_PRECONDITION(m_CurrentNode != nullptr, "Current node is null")

        auto newCurrent = m_CurrentNode->addChild<VariableNode>(ctx->VAR_NAME()->getText(), ctx->start->getLine());
        m_CurrentNode = newCurrent;
    }

    void TreeWalker::exitVariable(SrslGrammarParser::VariableContext *ctx) {
        m_CurrentNode = m_CurrentNode->getParent();
    }

    void TreeWalker::enterConstant(SrslGrammarParser::ConstantContext *ctx) {
        SRSL_PRECONDITION(m_CurrentNode != nullptr, "Current node is null")

        if (ctx->NUMBER()){
            m_CurrentNode->addChild<ConstantNode>(ctx->NUMBER()->getText(), ctx->start->getLine());
        }
        else if (ctx->FLOATING_POINT()){
            m_CurrentNode->addChild<ConstantNode>(ctx->FLOATING_POINT()->getText(), ctx->start->getLine());
        }
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

        auto newCurrent = m_CurrentNode->addChild<InitializerListNode>(ctx->expression().size(), ctx->start->getLine());
        m_CurrentNode = newCurrent;
    }

    void TreeWalker::exitInitializerList(SrslGrammarParser::InitializerListContext *ctx) {
        m_CurrentNode = m_CurrentNode->getParent();
    }

    void TreeWalker::enterStructDeclaration(SrslGrammarParser::StructDeclarationContext *ctx) {
        SRSL_PRECONDITION(m_CurrentNode != nullptr, "Current node is null")

        auto newCurrent = m_CurrentNode->addChild<StructDeclarationNode>(ctx->VAR_NAME()->getText(), ctx->start->getLine());
        m_CurrentNode = newCurrent;
    }

    void TreeWalker::exitStructDeclaration(SrslGrammarParser::StructDeclarationContext *ctx) {
        m_CurrentNode = m_CurrentNode->getParent();
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

        TypeDesc type(ctx->TYPE()->getText());
        auto newCurrent = m_CurrentNode->addChild<TypeConstructorNode>(type, ctx->start->getLine());
        m_CurrentNode = newCurrent;
    }

    void TreeWalker::exitTypeConstructor(SrslGrammarParser::TypeConstructorContext *ctx) {
        m_CurrentNode = m_CurrentNode->getParent();
    }

    void TreeWalker::enterMemberAccess(SrslGrammarParser::MemberAccessContext *ctx) {
        SRSL_PRECONDITION(m_CurrentNode != nullptr, "Current node is null")

        auto newCurrent = m_CurrentNode->addChild<MemberAccessNode>(ctx->start->getLine());
        m_CurrentNode = newCurrent;
    }

    void TreeWalker::exitMemberAccess(SrslGrammarParser::MemberAccessContext *ctx) {
        m_CurrentNode = m_CurrentNode->getParent();
    }

    void TreeWalker::enterVectorSwizzle(SrslGrammarParser::VectorSwizzleContext *ctx) {
        SrslGrammarBaseListener::enterVectorSwizzle(ctx);
    }

    void TreeWalker::exitVectorSwizzle(SrslGrammarParser::VectorSwizzleContext *ctx) {
        SrslGrammarBaseListener::exitVectorSwizzle(ctx);
    }

    void TreeWalker::enterTestCase(SrslGrammarParser::TestCaseContext *ctx) {
        SRSL_PRECONDITION(m_CurrentNode != nullptr, "Current node is null")

    }

    void TreeWalker::exitTestCase(SrslGrammarParser::TestCaseContext *ctx) {

    }
}
