#include <regex>
#include "TreeWalker.hpp"

namespace Srsl{

    TreeWalker::TreeWalker(UP<AbstractNode> &rootNode, ProgramInfo& programInfo):
    m_RootNode(rootNode),
    m_ProgramInfo(programInfo),
    m_CurrentNode(rootNode.get()),
    m_CurrentScope(nullptr),
    m_BracketStack(){
        SRSL_PRECONDITION(m_RootNode == nullptr, "There already exists a root node");

    }

    void TreeWalker::enterShaderTypeSpec(SrslGrammarParser::ShaderTypeSpecContext *ctx) {
        auto type = ctx->SHADER_TYPE()->getText();
        if (type == "Vertex"){
            m_RootNode = createUP<ShaderTypeNode>(SRSL_VERTEX_SHADER, ctx->start->getLine());
            m_ProgramInfo.shaderType = SRSL_VERTEX_SHADER;
        }
        else if (type == "Fragment"){
            m_RootNode = createUP<ShaderTypeNode>(SRSL_FRAGMENT_SHADER, ctx->start->getLine());
            m_ProgramInfo.shaderType = SRSL_FRAGMENT_SHADER;
        }
        else if (type == "Geometry"){
            m_RootNode = createUP<ShaderTypeNode>(SRSL_GEOMETRY_SHADER, ctx->start->getLine());
            m_ProgramInfo.shaderType = SRSL_GEOMETRY_SHADER;
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
        m_ProgramInfo.variableCount++;
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

        static const std::regex pattern("^([xyzwrgbastuvw][xyzwrgbastuvw]{0,3})$");
        auto varName = ctx->VAR_NAME()->getText();
        bool isSwizzle = std::regex_match(varName, pattern);
        AbstractNode* newCurrent = nullptr;
        if (isSwizzle){
            newCurrent = m_CurrentNode->addChild<SwizzleNode>(varName, ctx->start->getLine());
        }
        else{
            newCurrent = m_CurrentNode->addChild<VariableNode>(varName, ctx->start->getLine());
        }
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

        auto scopeNode = m_CurrentNode->addChild<ScopeNode>(ctx->start->getLine(), m_ProgramInfo.scopeCount, m_CurrentScope);
        m_CurrentNode = scopeNode;

        SRSL_ASSERT(scopeNode != nullptr, "[TreeWalker]: Scope node is null")
        m_ProgramInfo.scopes.push_back(scopeNode);
        m_ProgramInfo.scopeCount++;

        if (m_CurrentScope != nullptr){
            m_CurrentScope->addChildScope(scopeNode);
        }
        m_CurrentScope = scopeNode;
    }

    void TreeWalker::exitScope(SrslGrammarParser::ScopeContext *ctx) {
        auto scopeNode = dynamic_cast<ScopeNode*>(m_CurrentNode);
        SRSL_ASSERT(scopeNode != nullptr, "[TreeWalker]: Scope node is null")
        m_CurrentScope = scopeNode->getParentScope();
        m_CurrentNode = m_CurrentNode->getParent();
    }

    void TreeWalker::enterWhileLoop(SrslGrammarParser::WhileLoopContext *ctx) {
        SRSL_PRECONDITION(m_CurrentNode != nullptr, "Current node is null")

        auto newCurrent = m_CurrentNode->addChild<WhileNode>(ctx->start->getLine());
        m_CurrentNode = newCurrent;
    }

    void TreeWalker::exitWhileLoop(SrslGrammarParser::WhileLoopContext *ctx) {
        m_CurrentNode = m_CurrentNode->getParent();
    }

    void TreeWalker::enterForLoop(SrslGrammarParser::ForLoopContext *ctx) {
        SRSL_PRECONDITION(m_CurrentNode != nullptr, "Current node is null")

        auto newCurrent = m_CurrentNode->addChild<ForNode>(ctx->start->getLine());
        m_CurrentNode = newCurrent;
    }

    void TreeWalker::exitForLoop(SrslGrammarParser::ForLoopContext *ctx) {
        m_CurrentNode = m_CurrentNode->getParent();
    }

    void TreeWalker::enterIfStatement(SrslGrammarParser::IfStatementContext *ctx) {
        SRSL_PRECONDITION(m_CurrentNode != nullptr, "Current node is null")

        auto newCurrent = m_CurrentNode->addChild<IfNode>(ctx->start->getLine());
        m_CurrentNode = newCurrent;
    }

    void TreeWalker::exitIfStatement(SrslGrammarParser::IfStatementContext *ctx) {
        m_CurrentNode = m_CurrentNode->getParent();
    }

    void TreeWalker::enterElseStatement(SrslGrammarParser::ElseStatementContext *ctx) {
        SRSL_PRECONDITION(m_CurrentNode != nullptr, "Current node is null")

        auto newCurrent = m_CurrentNode->addChild<ElseNode>(ctx->start->getLine());
        m_CurrentNode = newCurrent;
    }

    void TreeWalker::exitElseStatement(SrslGrammarParser::ElseStatementContext *ctx) {
        m_CurrentNode = m_CurrentNode->getParent();
    }

    void TreeWalker::enterElseIfStatement(SrslGrammarParser::ElseIfStatementContext *ctx) {
        SRSL_PRECONDITION(m_CurrentNode != nullptr, "Current node is null")

        auto newCurrent = m_CurrentNode->addChild<ElseIfNode>(ctx->start->getLine());
        m_CurrentNode = newCurrent;
    }

    void TreeWalker::exitElseIfStatement(SrslGrammarParser::ElseIfStatementContext *ctx) {
        m_CurrentNode = m_CurrentNode->getParent();
    }

    void TreeWalker::enterControlFlow(SrslGrammarParser::ControlFlowContext *ctx) {
        SRSL_PRECONDITION(m_CurrentNode != nullptr, "Current node is null")

        auto newCurrent = m_CurrentNode->addChild<FlowControlNode>(ctx->CONTROL_FLOW()->getText(), ctx->start->getLine());
        m_CurrentNode = newCurrent;
    }

    void TreeWalker::exitControlFlow(SrslGrammarParser::ControlFlowContext *ctx) {
        m_CurrentNode = m_CurrentNode->getParent();
    }

    void TreeWalker::enterFunctionDeclaration(SrslGrammarParser::FunctionDeclarationContext *ctx) {
        SRSL_PRECONDITION(m_CurrentNode != nullptr, "Current node is null")

        FunctionDeclarationDesc desc;
        // the type can be a VARN_NAME => the function returns a struct
        if (ctx->TYPE() != nullptr){
            TypeDesc typeDesc(ctx->TYPE()->getText());
            desc.type = typeDesc;
            desc.name = ctx->VAR_NAME()[0]->getText();
            if (ctx->COLON() != nullptr){
                desc.semantic = ctx->VAR_NAME()[1]->getText();
            }
        }
        else {
            TypeDesc typeDesc(ctx->VAR_NAME()[0]->getText());
            desc.type = typeDesc;
            desc.name = ctx->VAR_NAME()[1]->getText();
            if (ctx->COLON() != nullptr){
                desc.semantic = ctx->VAR_NAME()[2]->getText();
            }
        }
        desc.hasScope = (ctx->scope() != nullptr);

        auto newCurrent = m_CurrentNode->addChild<FunctionDeclarationNode>(desc, m_ProgramInfo.functionCount, ctx->start->getLine());
        if (desc.name == "main"){
            m_ProgramInfo.mainFunction = newCurrent;
        }
        if (desc.hasScope){
            m_ProgramInfo.functions.push_back(newCurrent);
        }
        m_CurrentNode = newCurrent;
        m_ProgramInfo.functionCount++;
    }

    void TreeWalker::exitFunctionDeclaration(SrslGrammarParser::FunctionDeclarationContext *ctx) {
        m_CurrentNode = m_CurrentNode->getParent();
    }

    void TreeWalker::enterFunctionCall(SrslGrammarParser::FunctionCallContext *ctx) {
        SRSL_PRECONDITION(m_CurrentNode != nullptr, "Current node is null")

        auto newCurrent = m_CurrentNode->addChild<FunctionCallNode>(ctx->VAR_NAME()->getText(), ctx->start->getLine());
        m_CurrentNode = newCurrent;
    }

    void TreeWalker::exitFunctionCall(SrslGrammarParser::FunctionCallContext *ctx) {
        m_CurrentNode = m_CurrentNode->getParent();
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

        TypeDesc type(ctx->TEXTURE_TYPES()->getText(), true);
        const std::string& name = ctx->VAR_NAME()->getText();
        const auto slot = std::stoi(ctx->NUMBER()->getText());
        auto newCurrent = m_CurrentNode->addChild<TextureNode>(name, slot, type, ctx->start->getLine());
        m_CurrentNode = newCurrent;
    }

    void TreeWalker::exitTextureDeclaration(SrslGrammarParser::TextureDeclarationContext *ctx) {
        m_CurrentNode = m_CurrentNode->getParent();
    }

    void TreeWalker::enterSamplerDeclaration(SrslGrammarParser::SamplerDeclarationContext *ctx ) {
        SRSL_PRECONDITION(m_CurrentNode != nullptr, "Current node is null")

        m_CurrentNode->addChild<SamplerNode>(ctx->VAR_NAME()->getText(), std::stoi(ctx->NUMBER()->getText()), ctx->start->getLine());
    }

    void TreeWalker::exitSamplerDeclaration(SrslGrammarParser::SamplerDeclarationContext * ctx) {

    }

    void TreeWalker::enterConstantBufferDeclaration(SrslGrammarParser::ConstantBufferDeclarationContext * ctx) {
        SRSL_PRECONDITION(m_CurrentNode != nullptr, "Current node is null")

        auto newCurrent = m_CurrentNode->addChild<ConstantBufferNode>(ctx->VAR_NAME()->getText(), std::stoi(ctx->NUMBER()->getText()), ctx->start->getLine());
        m_CurrentNode = newCurrent;
    }

    void TreeWalker::exitConstantBufferDeclaration(SrslGrammarParser::ConstantBufferDeclarationContext *ctx) {
        m_CurrentNode = m_CurrentNode->getParent();
    }

    void TreeWalker::enterReturnStatement(SrslGrammarParser::ReturnStatementContext *ctx) {
        SRSL_PRECONDITION(m_CurrentNode != nullptr, "Current node is null")

        auto newCurrent = m_CurrentNode->addChild<ReturnNode>(ctx->start->getLine());
        m_CurrentNode = newCurrent;
    }

    void TreeWalker::exitReturnStatement(SrslGrammarParser::ReturnStatementContext *ctx) {
        m_CurrentNode = m_CurrentNode->getParent();
    }

    void TreeWalker::enterShaderInterface(SrslGrammarParser::ShaderInterfaceContext *ctx) {
        SRSL_PRECONDITION(m_CurrentNode != nullptr, "Current node is null")

        InterfaceType type;
        if (ctx->SHADER_OUTPUT() != nullptr){
            type = InterfaceType::Output;
        }
        else{
            type = InterfaceType::Input;
        }
        auto newCurrent = m_CurrentNode->addChild<InterfaceNode>(type, ctx->VAR_NAME()->getText(), ctx->start->getLine());
        m_CurrentNode = newCurrent;
    }

    void TreeWalker::exitShaderInterface(SrslGrammarParser::ShaderInterfaceContext *ctx) {
        m_CurrentNode = m_CurrentNode->getParent();
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

    void TreeWalker::enterTestCase(SrslGrammarParser::TestCaseContext *ctx) {
        SRSL_PRECONDITION(m_CurrentNode != nullptr, "Current node is null")
        SRSL_PRECONDITION(ctx->VAR_NAME().size() == 2, "Test case does not have two names (size = %i)", ctx->VAR_NAME().size())

        std::string suiteName = ctx->VAR_NAME()[0]->getText();
        std::string testName = ctx->VAR_NAME()[1]->getText();

        auto newCurrent = m_CurrentNode->addChild<TestCaseNode>(suiteName, testName, ctx->start->getLine());
        m_CurrentNode = newCurrent;

        m_ProgramInfo.testCaseCount++;
        m_ProgramInfo.testCases.push_back(newCurrent);
    }

    void TreeWalker::exitTestCase(SrslGrammarParser::TestCaseContext *ctx) {
        m_CurrentNode = m_CurrentNode->getParent();
    }
}
