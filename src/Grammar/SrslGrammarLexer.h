
// Generated from SrslGrammar.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"




class  SrslGrammarLexer : public antlr4::Lexer {
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

