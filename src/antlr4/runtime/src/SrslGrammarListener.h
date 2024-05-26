
// Generated from SrslGrammar.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "SrslGrammarParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by SrslGrammarParser.
 */
class  SrslGrammarListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterFile(SrslGrammarParser::FileContext *ctx) = 0;
  virtual void exitFile(SrslGrammarParser::FileContext *ctx) = 0;

  virtual void enterShaderTypeSpec(SrslGrammarParser::ShaderTypeSpecContext *ctx) = 0;
  virtual void exitShaderTypeSpec(SrslGrammarParser::ShaderTypeSpecContext *ctx) = 0;

  virtual void enterStatement(SrslGrammarParser::StatementContext *ctx) = 0;
  virtual void exitStatement(SrslGrammarParser::StatementContext *ctx) = 0;

  virtual void enterForStatement(SrslGrammarParser::ForStatementContext *ctx) = 0;
  virtual void exitForStatement(SrslGrammarParser::ForStatementContext *ctx) = 0;

  virtual void enterWhileStatement(SrslGrammarParser::WhileStatementContext *ctx) = 0;
  virtual void exitWhileStatement(SrslGrammarParser::WhileStatementContext *ctx) = 0;

  virtual void enterIfStatement(SrslGrammarParser::IfStatementContext *ctx) = 0;
  virtual void exitIfStatement(SrslGrammarParser::IfStatementContext *ctx) = 0;

  virtual void enterOptionalStatement(SrslGrammarParser::OptionalStatementContext *ctx) = 0;
  virtual void exitOptionalStatement(SrslGrammarParser::OptionalStatementContext *ctx) = 0;

  virtual void enterElseIfStatement(SrslGrammarParser::ElseIfStatementContext *ctx) = 0;
  virtual void exitElseIfStatement(SrslGrammarParser::ElseIfStatementContext *ctx) = 0;

  virtual void enterElseStatement(SrslGrammarParser::ElseStatementContext *ctx) = 0;
  virtual void exitElseStatement(SrslGrammarParser::ElseStatementContext *ctx) = 0;

  virtual void enterTextureDeclaration(SrslGrammarParser::TextureDeclarationContext *ctx) = 0;
  virtual void exitTextureDeclaration(SrslGrammarParser::TextureDeclarationContext *ctx) = 0;

  virtual void enterSamplerDeclaration(SrslGrammarParser::SamplerDeclarationContext *ctx) = 0;
  virtual void exitSamplerDeclaration(SrslGrammarParser::SamplerDeclarationContext *ctx) = 0;

  virtual void enterConstantBufferDeclaration(SrslGrammarParser::ConstantBufferDeclarationContext *ctx) = 0;
  virtual void exitConstantBufferDeclaration(SrslGrammarParser::ConstantBufferDeclarationContext *ctx) = 0;

  virtual void enterShaderInput(SrslGrammarParser::ShaderInputContext *ctx) = 0;
  virtual void exitShaderInput(SrslGrammarParser::ShaderInputContext *ctx) = 0;

  virtual void enterShaderOutput(SrslGrammarParser::ShaderOutputContext *ctx) = 0;
  virtual void exitShaderOutput(SrslGrammarParser::ShaderOutputContext *ctx) = 0;

  virtual void enterFunctionDeclaration(SrslGrammarParser::FunctionDeclarationContext *ctx) = 0;
  virtual void exitFunctionDeclaration(SrslGrammarParser::FunctionDeclarationContext *ctx) = 0;

  virtual void enterFunctionCall(SrslGrammarParser::FunctionCallContext *ctx) = 0;
  virtual void exitFunctionCall(SrslGrammarParser::FunctionCallContext *ctx) = 0;

  virtual void enterReturnStatement(SrslGrammarParser::ReturnStatementContext *ctx) = 0;
  virtual void exitReturnStatement(SrslGrammarParser::ReturnStatementContext *ctx) = 0;

  virtual void enterScope(SrslGrammarParser::ScopeContext *ctx) = 0;
  virtual void exitScope(SrslGrammarParser::ScopeContext *ctx) = 0;

  virtual void enterStructDeclaration(SrslGrammarParser::StructDeclarationContext *ctx) = 0;
  virtual void exitStructDeclaration(SrslGrammarParser::StructDeclarationContext *ctx) = 0;

  virtual void enterAssignment(SrslGrammarParser::AssignmentContext *ctx) = 0;
  virtual void exitAssignment(SrslGrammarParser::AssignmentContext *ctx) = 0;

  virtual void enterExpression(SrslGrammarParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(SrslGrammarParser::ExpressionContext *ctx) = 0;

  virtual void enterLvalue(SrslGrammarParser::LvalueContext *ctx) = 0;
  virtual void exitLvalue(SrslGrammarParser::LvalueContext *ctx) = 0;

  virtual void enterRvalue(SrslGrammarParser::RvalueContext *ctx) = 0;
  virtual void exitRvalue(SrslGrammarParser::RvalueContext *ctx) = 0;

  virtual void enterMemberAccess(SrslGrammarParser::MemberAccessContext *ctx) = 0;
  virtual void exitMemberAccess(SrslGrammarParser::MemberAccessContext *ctx) = 0;

  virtual void enterNewVariable(SrslGrammarParser::NewVariableContext *ctx) = 0;
  virtual void exitNewVariable(SrslGrammarParser::NewVariableContext *ctx) = 0;

  virtual void enterVariable(SrslGrammarParser::VariableContext *ctx) = 0;
  virtual void exitVariable(SrslGrammarParser::VariableContext *ctx) = 0;

  virtual void enterConstant(SrslGrammarParser::ConstantContext *ctx) = 0;
  virtual void exitConstant(SrslGrammarParser::ConstantContext *ctx) = 0;

  virtual void enterControlFlow(SrslGrammarParser::ControlFlowContext *ctx) = 0;
  virtual void exitControlFlow(SrslGrammarParser::ControlFlowContext *ctx) = 0;

  virtual void enterTypeConstructor(SrslGrammarParser::TypeConstructorContext *ctx) = 0;
  virtual void exitTypeConstructor(SrslGrammarParser::TypeConstructorContext *ctx) = 0;

  virtual void enterInitializerList(SrslGrammarParser::InitializerListContext *ctx) = 0;
  virtual void exitInitializerList(SrslGrammarParser::InitializerListContext *ctx) = 0;


};

