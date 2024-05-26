
// Generated from SrslGrammar.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"




class  SrslGrammarLexer : public antlr4::Lexer {
public:
  enum {
    WS = 1, COMMENT = 2, SBRACKO = 3, SBRACKC = 4, CBRACKO = 5, CBRACKC = 6, 
    PARENO = 7, PARENC = 8, CONST = 9, FOR = 10, WHILE = 11, IF = 12, ELSE = 13, 
    RETURN = 14, CONTROL_FLOW = 15, STRUCT = 16, SHADER_INPUT = 17, SHADER_OUTPUT = 18, 
    TYPE = 19, TEXTURE_TYPES = 20, SAMPLER_TYPE = 21, CONSTANT_BUFFER = 22, 
    SLOT = 23, SHADER_TYPE_LIT = 24, SHADER_TYPE = 25, EOL = 26, COMMA = 27, 
    COLON = 28, FLOATING_POINT = 29, NUMBER = 30, ASSIGN = 31, DOT = 32, 
    AT = 33, PLUS = 34, MINUS = 35, MULTIPLY = 36, DIVIDE = 37, ASSIGN_OP = 38, 
    OPERATION = 39, CREMENT = 40, NOT = 41, BOOL = 42, VAR_NAME = 43
  };

  explicit SrslGrammarLexer(antlr4::CharStream *input);

  ~SrslGrammarLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

