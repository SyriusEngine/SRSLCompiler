
// Generated from SrslGrammar.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"




class  SrslGrammarLexer : public antlr4::Lexer {
public:
  enum {
    WS = 1, SBRACKO = 2, SBRACKC = 3, CBRACKO = 4, CBRACKC = 5, PARENO = 6, 
    PARENC = 7, CONST = 8, FOR = 9, WHILE = 10, IF = 11, ELSE = 12, ELSEIF = 13, 
    RETURN = 14, CONTROL_FLOW = 15, STRUCT = 16, SHADER_INPUT = 17, SHADER_OUTPUT = 18, 
    TEST = 19, TYPE = 20, TEXTURE_TYPES = 21, SAMPLER_TYPE = 22, CONSTANT_BUFFER = 23, 
    SLOT = 24, COMMENT = 25, MCOMMENT = 26, SHADER_TYPE_LIT = 27, SHADER_TYPE = 28, 
    EOL = 29, COMMA = 30, COLON = 31, FLOATING_POINT = 32, NUMBER = 33, 
    ASSIGN = 34, DOT = 35, AT = 36, PLUS = 37, MINUS = 38, MULTIPLY = 39, 
    DIVIDE = 40, OPERATION = 41, CREMENT = 42, NOT = 43, VAR_NAME = 44
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

