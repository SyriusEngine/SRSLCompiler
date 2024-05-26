
// Generated from SrslGrammar.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"




class  SrslGrammarParser : public antlr4::Parser {
public:
  enum {
    WS = 1, COMMENT = 2, SBRACKO = 3, SBRACKC = 4, CBRACKO = 5, CBRACKC = 6, 
    PARENO = 7, PARENC = 8, CONST = 9, FOR = 10, WHILE = 11, IF = 12, ELSE = 13, 
    RETURN = 14, CONTROL_FLOW = 15, STRUCT = 16, SHADER_INPUT = 17, SHADER_OUTPUT = 18, 
    TYPE = 19, TEXTURE_TYPES = 20, SAMPLER_TYPE = 21, CONSTANT_BUFFER = 22, 
    SLOT = 23, SHADER_TYPE_LIT = 24, SHADER_TYPE = 25, EOL = 26, COMMA = 27, 
    COLON = 28, FLOATING_POINT = 29, NUMBER = 30, ASSIGN = 31, DOT = 32, 
    AT = 33, PLUS = 34, MINUS = 35, MULTIPLY = 36, DIVIDE = 37, OPERATION = 38, 
    CREMENT = 39, NOT = 40, BOOL = 41, VAR_NAME = 42
  };

  enum {
    RuleFile = 0, RuleShaderTypeSpec = 1, RuleStatement = 2, RuleForStatement = 3, 
    RuleWhileStatement = 4, RuleIfStatement = 5, RuleOptionalStatement = 6, 
    RuleElseIfStatement = 7, RuleElseStatement = 8, RuleTextureDeclaration = 9, 
    RuleSamplerDeclaration = 10, RuleConstantBufferDeclaration = 11, RuleShaderInterface = 12, 
    RuleFunctionDeclaration = 13, RuleFunctionCall = 14, RuleReturnStatement = 15, 
    RuleScope = 16, RuleStructDeclaration = 17, RuleAssignment = 18, RuleExpression = 19, 
    RuleLvalue = 20, RuleRvalue = 21, RuleMemberAccess = 22, RuleNewVariable = 23, 
    RuleVariable = 24, RuleConstant = 25, RuleControlFlow = 26, RuleTypeConstructor = 27, 
    RuleInitializerList = 28
  };

  explicit SrslGrammarParser(antlr4::TokenStream *input);

  SrslGrammarParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~SrslGrammarParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class FileContext;
  class ShaderTypeSpecContext;
  class StatementContext;
  class ForStatementContext;
  class WhileStatementContext;
  class IfStatementContext;
  class OptionalStatementContext;
  class ElseIfStatementContext;
  class ElseStatementContext;
  class TextureDeclarationContext;
  class SamplerDeclarationContext;
  class ConstantBufferDeclarationContext;
  class ShaderInterfaceContext;
  class FunctionDeclarationContext;
  class FunctionCallContext;
  class ReturnStatementContext;
  class ScopeContext;
  class StructDeclarationContext;
  class AssignmentContext;
  class ExpressionContext;
  class LvalueContext;
  class RvalueContext;
  class MemberAccessContext;
  class NewVariableContext;
  class VariableContext;
  class ConstantContext;
  class ControlFlowContext;
  class TypeConstructorContext;
  class InitializerListContext; 

  class  FileContext : public antlr4::ParserRuleContext {
  public:
    FileContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ShaderTypeSpecContext *shaderTypeSpec();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FileContext* file();

  class  ShaderTypeSpecContext : public antlr4::ParserRuleContext {
  public:
    ShaderTypeSpecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHADER_TYPE_LIT();
    antlr4::tree::TerminalNode *SHADER_TYPE();
    antlr4::tree::TerminalNode *EOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ShaderTypeSpecContext* shaderTypeSpec();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LvalueContext *lvalue();
    antlr4::tree::TerminalNode *EOL();
    AssignmentContext *assignment();
    ExpressionContext *expression();
    ControlFlowContext *controlFlow();
    ForStatementContext *forStatement();
    WhileStatementContext *whileStatement();
    IfStatementContext *ifStatement();
    ReturnStatementContext *returnStatement();
    FunctionDeclarationContext *functionDeclaration();
    FunctionCallContext *functionCall();
    StructDeclarationContext *structDeclaration();
    SamplerDeclarationContext *samplerDeclaration();
    TextureDeclarationContext *textureDeclaration();
    ShaderInterfaceContext *shaderInterface();
    ConstantBufferDeclarationContext *constantBufferDeclaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StatementContext* statement();

  class  ForStatementContext : public antlr4::ParserRuleContext {
  public:
    ForStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *PARENO();
    StatementContext *statement();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *EOL();
    antlr4::tree::TerminalNode *PARENC();
    ScopeContext *scope();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ForStatementContext* forStatement();

  class  WhileStatementContext : public antlr4::ParserRuleContext {
  public:
    WhileStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHILE();
    antlr4::tree::TerminalNode *PARENO();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *PARENC();
    ScopeContext *scope();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  WhileStatementContext* whileStatement();

  class  IfStatementContext : public antlr4::ParserRuleContext {
  public:
    IfStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *PARENO();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *PARENC();
    ScopeContext *scope();
    OptionalStatementContext *optionalStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IfStatementContext* ifStatement();

  class  OptionalStatementContext : public antlr4::ParserRuleContext {
  public:
    OptionalStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ElseStatementContext *elseStatement();
    ElseIfStatementContext *elseIfStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OptionalStatementContext* optionalStatement();

  class  ElseIfStatementContext : public antlr4::ParserRuleContext {
  public:
    ElseIfStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ELSE();
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *PARENO();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *PARENC();
    ScopeContext *scope();
    OptionalStatementContext *optionalStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ElseIfStatementContext* elseIfStatement();

  class  ElseStatementContext : public antlr4::ParserRuleContext {
  public:
    ElseStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ELSE();
    ScopeContext *scope();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ElseStatementContext* elseStatement();

  class  TextureDeclarationContext : public antlr4::ParserRuleContext {
  public:
    TextureDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TEXTURE_TYPES();
    antlr4::tree::TerminalNode *PARENO();
    antlr4::tree::TerminalNode *SLOT();
    antlr4::tree::TerminalNode *ASSIGN();
    antlr4::tree::TerminalNode *NUMBER();
    antlr4::tree::TerminalNode *PARENC();
    antlr4::tree::TerminalNode *VAR_NAME();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TextureDeclarationContext* textureDeclaration();

  class  SamplerDeclarationContext : public antlr4::ParserRuleContext {
  public:
    SamplerDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SAMPLER_TYPE();
    antlr4::tree::TerminalNode *PARENO();
    antlr4::tree::TerminalNode *SLOT();
    antlr4::tree::TerminalNode *ASSIGN();
    antlr4::tree::TerminalNode *NUMBER();
    antlr4::tree::TerminalNode *PARENC();
    antlr4::tree::TerminalNode *VAR_NAME();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SamplerDeclarationContext* samplerDeclaration();

  class  ConstantBufferDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ConstantBufferDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONSTANT_BUFFER();
    antlr4::tree::TerminalNode *PARENO();
    antlr4::tree::TerminalNode *SLOT();
    antlr4::tree::TerminalNode *ASSIGN();
    antlr4::tree::TerminalNode *NUMBER();
    antlr4::tree::TerminalNode *PARENC();
    antlr4::tree::TerminalNode *VAR_NAME();
    antlr4::tree::TerminalNode *CBRACKO();
    antlr4::tree::TerminalNode *CBRACKC();
    std::vector<NewVariableContext *> newVariable();
    NewVariableContext* newVariable(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EOL();
    antlr4::tree::TerminalNode* EOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConstantBufferDeclarationContext* constantBufferDeclaration();

  class  ShaderInterfaceContext : public antlr4::ParserRuleContext {
  public:
    ShaderInterfaceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> VAR_NAME();
    antlr4::tree::TerminalNode* VAR_NAME(size_t i);
    antlr4::tree::TerminalNode *CBRACKO();
    antlr4::tree::TerminalNode *CBRACKC();
    antlr4::tree::TerminalNode *SHADER_INPUT();
    antlr4::tree::TerminalNode *SHADER_OUTPUT();
    std::vector<NewVariableContext *> newVariable();
    NewVariableContext* newVariable(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COLON();
    antlr4::tree::TerminalNode* COLON(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EOL();
    antlr4::tree::TerminalNode* EOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ShaderInterfaceContext* shaderInterface();

  class  FunctionDeclarationContext : public antlr4::ParserRuleContext {
  public:
    FunctionDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> VAR_NAME();
    antlr4::tree::TerminalNode* VAR_NAME(size_t i);
    antlr4::tree::TerminalNode *PARENO();
    antlr4::tree::TerminalNode *PARENC();
    antlr4::tree::TerminalNode *TYPE();
    ScopeContext *scope();
    antlr4::tree::TerminalNode *EOL();
    std::vector<antlr4::tree::TerminalNode *> CONST();
    antlr4::tree::TerminalNode* CONST(size_t i);
    std::vector<NewVariableContext *> newVariable();
    NewVariableContext* newVariable(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctionDeclarationContext* functionDeclaration();

  class  FunctionCallContext : public antlr4::ParserRuleContext {
  public:
    FunctionCallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VAR_NAME();
    antlr4::tree::TerminalNode *PARENO();
    antlr4::tree::TerminalNode *PARENC();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctionCallContext* functionCall();

  class  ReturnStatementContext : public antlr4::ParserRuleContext {
  public:
    ReturnStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETURN();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ReturnStatementContext* returnStatement();

  class  ScopeContext : public antlr4::ParserRuleContext {
  public:
    ScopeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CBRACKO();
    antlr4::tree::TerminalNode *CBRACKC();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ScopeContext* scope();

  class  StructDeclarationContext : public antlr4::ParserRuleContext {
  public:
    StructDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRUCT();
    antlr4::tree::TerminalNode *VAR_NAME();
    antlr4::tree::TerminalNode *CBRACKO();
    antlr4::tree::TerminalNode *CBRACKC();
    std::vector<NewVariableContext *> newVariable();
    NewVariableContext* newVariable(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EOL();
    antlr4::tree::TerminalNode* EOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StructDeclarationContext* structDeclaration();

  class  AssignmentContext : public antlr4::ParserRuleContext {
  public:
    AssignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LvalueContext *lvalue();
    antlr4::tree::TerminalNode *ASSIGN();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AssignmentContext* assignment();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PARENO();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *PARENC();
    antlr4::tree::TerminalNode *CREMENT();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *MINUS();
    RvalueContext *rvalue();
    antlr4::tree::TerminalNode *MULTIPLY();
    antlr4::tree::TerminalNode *DIVIDE();
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *OPERATION();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExpressionContext* expression();
  ExpressionContext* expression(int precedence);
  class  LvalueContext : public antlr4::ParserRuleContext {
  public:
    LvalueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NewVariableContext *newVariable();
    VariableContext *variable();
    MemberAccessContext *memberAccess();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LvalueContext* lvalue();

  class  RvalueContext : public antlr4::ParserRuleContext {
  public:
    RvalueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableContext *variable();
    ConstantContext *constant();
    FunctionCallContext *functionCall();
    TypeConstructorContext *typeConstructor();
    MemberAccessContext *memberAccess();
    InitializerListContext *initializerList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RvalueContext* rvalue();

  class  MemberAccessContext : public antlr4::ParserRuleContext {
  public:
    MemberAccessContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DOT();
    std::vector<VariableContext *> variable();
    VariableContext* variable(size_t i);
    FunctionCallContext *functionCall();
    MemberAccessContext *memberAccess();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MemberAccessContext* memberAccess();

  class  NewVariableContext : public antlr4::ParserRuleContext {
  public:
    NewVariableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> VAR_NAME();
    antlr4::tree::TerminalNode* VAR_NAME(size_t i);
    antlr4::tree::TerminalNode *TYPE();
    std::vector<antlr4::tree::TerminalNode *> CONST();
    antlr4::tree::TerminalNode* CONST(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SBRACKO();
    antlr4::tree::TerminalNode* SBRACKO(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NUMBER();
    antlr4::tree::TerminalNode* NUMBER(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SBRACKC();
    antlr4::tree::TerminalNode* SBRACKC(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NewVariableContext* newVariable();

  class  VariableContext : public antlr4::ParserRuleContext {
  public:
    VariableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VAR_NAME();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VariableContext* variable();

  class  ConstantContext : public antlr4::ParserRuleContext {
  public:
    ConstantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUMBER();
    antlr4::tree::TerminalNode *FLOATING_POINT();
    antlr4::tree::TerminalNode *BOOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConstantContext* constant();

  class  ControlFlowContext : public antlr4::ParserRuleContext {
  public:
    ControlFlowContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONTROL_FLOW();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ControlFlowContext* controlFlow();

  class  TypeConstructorContext : public antlr4::ParserRuleContext {
  public:
    TypeConstructorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TYPE();
    antlr4::tree::TerminalNode *PARENO();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *PARENC();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeConstructorContext* typeConstructor();

  class  InitializerListContext : public antlr4::ParserRuleContext {
  public:
    InitializerListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CBRACKO();
    antlr4::tree::TerminalNode *CBRACKC();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InitializerListContext* initializerList();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool expressionSempred(ExpressionContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

