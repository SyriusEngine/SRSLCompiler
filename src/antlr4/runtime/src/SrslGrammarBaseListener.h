
// Generated from SrslGrammar.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "SrslGrammarListener.h"


/**
 * This class provides an empty implementation of SrslGrammarListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  SrslGrammarBaseListener : public SrslGrammarListener {
public:

  virtual void enterFile(SrslGrammarParser::FileContext * /*ctx*/) override { }
  virtual void exitFile(SrslGrammarParser::FileContext * /*ctx*/) override { }

  virtual void enterShaderTypeSpec(SrslGrammarParser::ShaderTypeSpecContext * /*ctx*/) override { }
  virtual void exitShaderTypeSpec(SrslGrammarParser::ShaderTypeSpecContext * /*ctx*/) override { }

  virtual void enterStatement(SrslGrammarParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(SrslGrammarParser::StatementContext * /*ctx*/) override { }

  virtual void enterForStatement(SrslGrammarParser::ForStatementContext * /*ctx*/) override { }
  virtual void exitForStatement(SrslGrammarParser::ForStatementContext * /*ctx*/) override { }

  virtual void enterWhileStatement(SrslGrammarParser::WhileStatementContext * /*ctx*/) override { }
  virtual void exitWhileStatement(SrslGrammarParser::WhileStatementContext * /*ctx*/) override { }

  virtual void enterIfStatement(SrslGrammarParser::IfStatementContext * /*ctx*/) override { }
  virtual void exitIfStatement(SrslGrammarParser::IfStatementContext * /*ctx*/) override { }

  virtual void enterOptionalStatement(SrslGrammarParser::OptionalStatementContext * /*ctx*/) override { }
  virtual void exitOptionalStatement(SrslGrammarParser::OptionalStatementContext * /*ctx*/) override { }

  virtual void enterElseIfStatement(SrslGrammarParser::ElseIfStatementContext * /*ctx*/) override { }
  virtual void exitElseIfStatement(SrslGrammarParser::ElseIfStatementContext * /*ctx*/) override { }

  virtual void enterElseStatement(SrslGrammarParser::ElseStatementContext * /*ctx*/) override { }
  virtual void exitElseStatement(SrslGrammarParser::ElseStatementContext * /*ctx*/) override { }

  virtual void enterTextureDeclaration(SrslGrammarParser::TextureDeclarationContext * /*ctx*/) override { }
  virtual void exitTextureDeclaration(SrslGrammarParser::TextureDeclarationContext * /*ctx*/) override { }

  virtual void enterSamplerDeclaration(SrslGrammarParser::SamplerDeclarationContext * /*ctx*/) override { }
  virtual void exitSamplerDeclaration(SrslGrammarParser::SamplerDeclarationContext * /*ctx*/) override { }

  virtual void enterConstantBufferDeclaration(SrslGrammarParser::ConstantBufferDeclarationContext * /*ctx*/) override { }
  virtual void exitConstantBufferDeclaration(SrslGrammarParser::ConstantBufferDeclarationContext * /*ctx*/) override { }

  virtual void enterShaderInterface(SrslGrammarParser::ShaderInterfaceContext * /*ctx*/) override { }
  virtual void exitShaderInterface(SrslGrammarParser::ShaderInterfaceContext * /*ctx*/) override { }

  virtual void enterFunctionDeclaration(SrslGrammarParser::FunctionDeclarationContext * /*ctx*/) override { }
  virtual void exitFunctionDeclaration(SrslGrammarParser::FunctionDeclarationContext * /*ctx*/) override { }

  virtual void enterFunctionCall(SrslGrammarParser::FunctionCallContext * /*ctx*/) override { }
  virtual void exitFunctionCall(SrslGrammarParser::FunctionCallContext * /*ctx*/) override { }

  virtual void enterReturnStatement(SrslGrammarParser::ReturnStatementContext * /*ctx*/) override { }
  virtual void exitReturnStatement(SrslGrammarParser::ReturnStatementContext * /*ctx*/) override { }

  virtual void enterScope(SrslGrammarParser::ScopeContext * /*ctx*/) override { }
  virtual void exitScope(SrslGrammarParser::ScopeContext * /*ctx*/) override { }

  virtual void enterStructDeclaration(SrslGrammarParser::StructDeclarationContext * /*ctx*/) override { }
  virtual void exitStructDeclaration(SrslGrammarParser::StructDeclarationContext * /*ctx*/) override { }

  virtual void enterAssignment(SrslGrammarParser::AssignmentContext * /*ctx*/) override { }
  virtual void exitAssignment(SrslGrammarParser::AssignmentContext * /*ctx*/) override { }

  virtual void enterExpression(SrslGrammarParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(SrslGrammarParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterLvalue(SrslGrammarParser::LvalueContext * /*ctx*/) override { }
  virtual void exitLvalue(SrslGrammarParser::LvalueContext * /*ctx*/) override { }

  virtual void enterRvalue(SrslGrammarParser::RvalueContext * /*ctx*/) override { }
  virtual void exitRvalue(SrslGrammarParser::RvalueContext * /*ctx*/) override { }

  virtual void enterMemberAccess(SrslGrammarParser::MemberAccessContext * /*ctx*/) override { }
  virtual void exitMemberAccess(SrslGrammarParser::MemberAccessContext * /*ctx*/) override { }

  virtual void enterNewVariable(SrslGrammarParser::NewVariableContext * /*ctx*/) override { }
  virtual void exitNewVariable(SrslGrammarParser::NewVariableContext * /*ctx*/) override { }

  virtual void enterVariable(SrslGrammarParser::VariableContext * /*ctx*/) override { }
  virtual void exitVariable(SrslGrammarParser::VariableContext * /*ctx*/) override { }

  virtual void enterConstant(SrslGrammarParser::ConstantContext * /*ctx*/) override { }
  virtual void exitConstant(SrslGrammarParser::ConstantContext * /*ctx*/) override { }

  virtual void enterControlFlow(SrslGrammarParser::ControlFlowContext * /*ctx*/) override { }
  virtual void exitControlFlow(SrslGrammarParser::ControlFlowContext * /*ctx*/) override { }

  virtual void enterTypeConstructor(SrslGrammarParser::TypeConstructorContext * /*ctx*/) override { }
  virtual void exitTypeConstructor(SrslGrammarParser::TypeConstructorContext * /*ctx*/) override { }

  virtual void enterInitializerList(SrslGrammarParser::InitializerListContext * /*ctx*/) override { }
  virtual void exitInitializerList(SrslGrammarParser::InitializerListContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

