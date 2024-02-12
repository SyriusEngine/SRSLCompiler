
// Generated from SrslGrammar.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"




class  SrslGrammarParser : public antlr4::Parser {
public:
  enum {
    WS = 1, SBRACKO = 2, SBRACKC = 3, CBRACKO = 4, CBRACKC = 5, PARENO = 6, 
    PARENC = 7, CONST = 8, FOR = 9, WHILE = 10, IF = 11, ELSE = 12, ELSEIF = 13, 
    RETURN = 14, CONTROL_FLOW = 15, STRUCT = 16, SHADER_INPUT = 17, SHADER_OUTPUT = 18, 
    TEST = 19, VECTOR_COMPONENT = 20, TYPE = 21, TEXTURE_TYPES = 22, SAMPLER_TYPE = 23, 
    CONSTANT_BUFFER = 24, SLOT = 25, COMMENT = 26, MCOMMENT = 27, SHADER_TYPE_LIT = 28, 
    SHADER_TYPE = 29, EOL = 30, COMMA = 31, COLON = 32, FLOATING_POINT = 33, 
    NUMBER = 34, ASSIGN = 35, DOT = 36, AT = 37, PLUS = 38, MINUS = 39, 
    MULTIPLY = 40, DIVIDE = 41, OPERATION = 42, CREMENT = 43, NOT = 44, 
    VAR_NAME = 45
  };

  enum {
    RuleFile = 0, RuleShaderTypeSpec = 1, RuleMultilineComment = 2, RuleSinglelinecomment = 3, 
    RuleStatement = 4, RuleForLoop = 5, RuleWhileLoop = 6, RuleIfStatement = 7, 
    RuleOptionalStatement = 8, RuleElseIfStatement = 9, RuleElseStatement = 10, 
    RuleTextureDeclaration = 11, RuleSamplerDeclaration = 12, RuleConstantBufferDeclaration = 13, 
    RuleShaderInterface = 14, RuleFunctionDeclaration = 15, RuleFunctionCall = 16, 
    RuleReturnStatement = 17, RuleScope = 18, RuleStructDeclaration = 19, 
    RuleTestCase = 20, RuleAssignment = 21, RuleExpression = 22, RuleInitializerList = 23, 
    RuleLvalue = 24, RuleRvalue = 25, RuleMemberAccess = 26, RuleNewVariable = 27, 
    RuleVariable = 28, RuleConstant = 29, RuleControlFlow = 30, RuleTypeConstructor = 31, 
    RuleVectorSwizzle = 32
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
  class MultilineCommentContext;
  class SinglelinecommentContext;
  class StatementContext;
  class ForLoopContext;
  class WhileLoopContext;
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
  class TestCaseContext;
  class AssignmentContext;
  class ExpressionContext;
  class InitializerListContext;
  class LvalueContext;
  class RvalueContext;
  class MemberAccessContext;
  class NewVariableContext;
  class VariableContext;
  class ConstantContext;
  class ControlFlowContext;
  class TypeConstructorContext;
  class VectorSwizzleContext; 

  class  FileContext : public antlr4::ParserRuleContext {
  public:
    FileContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ShaderTypeSpecContext *shaderTypeSpec();
    std::vector<MultilineCommentContext *> multilineComment();
    MultilineCommentContext* multilineComment(size_t i);
    std::vector<SinglelinecommentContext *> singlelinecomment();
    SinglelinecommentContext* singlelinecomment(size_t i);
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

  class  MultilineCommentContext : public antlr4::ParserRuleContext {
  public:
    MultilineCommentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MCOMMENT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MultilineCommentContext* multilineComment();

  class  SinglelinecommentContext : public antlr4::ParserRuleContext {
  public:
    SinglelinecommentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COMMENT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SinglelinecommentContext* singlelinecomment();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LvalueContext *lvalue();
    antlr4::tree::TerminalNode *EOL();
    AssignmentContext *assignment();
    ExpressionContext *expression();
    ControlFlowContext *controlFlow();
    ForLoopContext *forLoop();
    WhileLoopContext *whileLoop();
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

  class  ForLoopContext : public antlr4::ParserRuleContext {
  public:
    ForLoopContext(antlr4::ParserRuleContext *parent, size_t invokingState);
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

  ForLoopContext* forLoop();

  class  WhileLoopContext : public antlr4::ParserRuleContext {
  public:
    WhileLoopContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHILE();
    antlr4::tree::TerminalNode *PARENO();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *PARENC();
    ScopeContext *scope();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  WhileLoopContext* whileLoop();

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
    antlr4::tree::TerminalNode *VAR_NAME();
    antlr4::tree::TerminalNode *CBRACKO();
    antlr4::tree::TerminalNode *CBRACKC();
    antlr4::tree::TerminalNode *SHADER_INPUT();
    antlr4::tree::TerminalNode *SHADER_OUTPUT();
    std::vector<NewVariableContext *> newVariable();
    NewVariableContext* newVariable(size_t i);
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
    std::vector<TestCaseContext *> testCase();
    TestCaseContext* testCase(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CONST();
    antlr4::tree::TerminalNode* CONST(size_t i);
    std::vector<NewVariableContext *> newVariable();
    NewVariableContext* newVariable(size_t i);
    antlr4::tree::TerminalNode *COLON();
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

  class  TestCaseContext : public antlr4::ParserRuleContext {
  public:
    TestCaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AT();
    antlr4::tree::TerminalNode *TEST();
    antlr4::tree::TerminalNode *VAR_NAME();
    antlr4::tree::TerminalNode *CBRACKO();
    antlr4::tree::TerminalNode *OPERATION();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *CBRACKC();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TestCaseContext* testCase();

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
    VectorSwizzleContext *vectorSwizzle();

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
    antlr4::tree::TerminalNode *COLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NewVariableContext* newVariable();

  class  VariableContext : public antlr4::ParserRuleContext {
  public:
    VariableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VAR_NAME();
    std::vector<antlr4::tree::TerminalNode *> SBRACKO();
    antlr4::tree::TerminalNode* SBRACKO(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SBRACKC();
    antlr4::tree::TerminalNode* SBRACKC(size_t i);

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

  class  VectorSwizzleContext : public antlr4::ParserRuleContext {
  public:
    VectorSwizzleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> VECTOR_COMPONENT();
    antlr4::tree::TerminalNode* VECTOR_COMPONENT(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VectorSwizzleContext* vectorSwizzle();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool expressionSempred(ExpressionContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

