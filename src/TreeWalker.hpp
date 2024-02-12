#pragma once

#include <stack>

#include "SrslGrammarBaseListener.h"
#include "SrslGrammarLexer.h"
#include "SrslGrammarParser.h"

#include "../Utils.hpp"
#include "AbstractSyntaxTree/AbstractNode.hpp"
#include "AbstractSyntaxTree/ShaderTypeNode.hpp"

namespace Srsl{

    class TreeWalker: public SrslGrammarBaseListener{
    public:
        TreeWalker(UP<AbstractNode>& rootNode, SRSL_SHADER_TYPE& shaderType);

        ~TreeWalker() override = default;

        void enterShaderTypeSpec(SrslGrammarParser::ShaderTypeSpecContext* ctx) override;

        void exitShaderTypeSpec(SrslGrammarParser::ShaderTypeSpecContext* ctx) override;

        void enterStatement(SrslGrammarParser::StatementContext* ctx) override;

        void exitStatement(SrslGrammarParser::StatementContext* ctx) override;

        void enterNewVariable(SrslGrammarParser::NewVariableContext* ctx) override;

        void exitNewVariable(SrslGrammarParser::NewVariableContext* ctx) override;

        void enterExpression(SrslGrammarParser::ExpressionContext* ctx) override;

        void exitExpression(SrslGrammarParser::ExpressionContext* ctx) override;

        void enterVariable(SrslGrammarParser::VariableContext* ctx) override;

        void exitVariable(SrslGrammarParser::VariableContext* ctx) override;

        void enterConstant(SrslGrammarParser::ConstantContext* ctx) override;

        void exitConstant(SrslGrammarParser::ConstantContext* ctx) override;

        void enterScope(SrslGrammarParser::ScopeContext* ctx) override;

        void exitScope(SrslGrammarParser::ScopeContext* ctx) override;

        void enterWhileLoop(SrslGrammarParser::WhileLoopContext* ctx) override;

        void exitWhileLoop(SrslGrammarParser::WhileLoopContext* ctx) override;

        void enterForLoop(SrslGrammarParser::ForLoopContext* ctx) override;

        void exitForLoop(SrslGrammarParser::ForLoopContext* ctx) override;

        void enterIfStatement(SrslGrammarParser::IfStatementContext* ctx) override;

        void exitIfStatement(SrslGrammarParser::IfStatementContext* ctx) override;

        void enterElseStatement(SrslGrammarParser::ElseStatementContext* ctx) override;

        void exitElseStatement(SrslGrammarParser::ElseStatementContext* ctx) override;

        void enterElseIfStatement(SrslGrammarParser::ElseIfStatementContext* ctx) override;

        void exitElseIfStatement(SrslGrammarParser::ElseIfStatementContext* ctx) override;

        void enterControlFlow(SrslGrammarParser::ControlFlowContext* ctx) override;

        void exitControlFlow(SrslGrammarParser::ControlFlowContext* ctx) override;

        void enterFunctionDeclaration(SrslGrammarParser::FunctionDeclarationContext* ctx) override;

        void exitFunctionDeclaration(SrslGrammarParser::FunctionDeclarationContext* ctx) override;

        void enterFunctionCall(SrslGrammarParser::FunctionCallContext* ctx) override;

        void exitFunctionCall(SrslGrammarParser::FunctionCallContext* ctx) override;

        void enterInitializerList(SrslGrammarParser::InitializerListContext* ctx) override;

        void exitInitializerList(SrslGrammarParser::InitializerListContext* ctx) override;

        void enterStructDeclaration(SrslGrammarParser::StructDeclarationContext* ctx) override;

        void exitStructDeclaration(SrslGrammarParser::StructDeclarationContext* ctx) override;

        void enterTextureDeclaration(SrslGrammarParser::TextureDeclarationContext * ctx) override;

        void exitTextureDeclaration(SrslGrammarParser::TextureDeclarationContext * ctx) override;

        void enterSamplerDeclaration(SrslGrammarParser::SamplerDeclarationContext * ctx) override;

        void exitSamplerDeclaration(SrslGrammarParser::SamplerDeclarationContext * ctx) override;

        void enterConstantBufferDeclaration(SrslGrammarParser::ConstantBufferDeclarationContext * ctx) override;

        void exitConstantBufferDeclaration(SrslGrammarParser::ConstantBufferDeclarationContext * ctx) override;

        void enterReturnStatement(SrslGrammarParser::ReturnStatementContext * ctx) override;

        void exitReturnStatement(SrslGrammarParser::ReturnStatementContext * ctx) override;

        void enterShaderInterface(SrslGrammarParser::ShaderInterfaceContext * ctx) override;

        void exitShaderInterface(SrslGrammarParser::ShaderInterfaceContext * ctx) override;

        void enterTypeConstructor(SrslGrammarParser::TypeConstructorContext * ctx) override;

        void exitTypeConstructor(SrslGrammarParser::TypeConstructorContext * ctx) override;

        void enterMemberAccess(SrslGrammarParser::MemberAccessContext * ctx) override;

        void exitMemberAccess(SrslGrammarParser::MemberAccessContext * ctx) override;

        void enterTestCase(SrslGrammarParser::TestCaseContext * ctx) override;

        void exitTestCase(SrslGrammarParser::TestCaseContext * ctx) override;

    private:
        SRSL_SHADER_TYPE& m_ShaderType;
        UP<AbstractNode>& m_RootNode;
        AbstractNode* m_CurrentNode;

        std::stack<AbstractNode*> m_BracketStack;

    };

}