
// Generated from SrslGrammar.g4 by ANTLR 4.11.1


#include "SrslGrammarListener.h"

#include "SrslGrammarParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct SrslGrammarParserStaticData final {
  SrslGrammarParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  SrslGrammarParserStaticData(const SrslGrammarParserStaticData&) = delete;
  SrslGrammarParserStaticData(SrslGrammarParserStaticData&&) = delete;
  SrslGrammarParserStaticData& operator=(const SrslGrammarParserStaticData&) = delete;
  SrslGrammarParserStaticData& operator=(SrslGrammarParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag srslgrammarParserOnceFlag;
SrslGrammarParserStaticData *srslgrammarParserStaticData = nullptr;

void srslgrammarParserInitialize() {
  assert(srslgrammarParserStaticData == nullptr);
  auto staticData = std::make_unique<SrslGrammarParserStaticData>(
    std::vector<std::string>{
      "file", "shaderTypeSpec", "multilineComment", "singlelinecomment", 
      "statement", "forLoop", "whileLoop", "ifStatement", "optionalStatement", 
      "elseIfStatement", "elseStatement", "textureDeclaration", "samplerDeclaration", 
      "constantBufferDeclaration", "shaderInterface", "functionDeclaration", 
      "functionCall", "returnStatement", "scope", "testCase", "testAssertion", 
      "structDeclaration", "assignment", "expression", "initializerList", 
      "lvalue", "rvalue", "memberAccess", "newVariable", "variable", "constant", 
      "controlFlow", "typeConstructor"
    },
    std::vector<std::string>{
      "", "", "'['", "']'", "'{'", "'}'", "'('", "')'", "'const'", "'for'", 
      "'while'", "'if'", "'else'", "'else if'", "'return'", "", "'struct'", 
      "'Input'", "'Output'", "'TEST'", "", "", "", "'Sampler'", "'ConstantBuffer'", 
      "'slot'", "", "", "'ShaderType = '", "", "';'", "','", "':'", "", 
      "", "'='", "'.'", "'@'", "'+'", "'-'", "'*'", "'/'", "", "", "'!'"
    },
    std::vector<std::string>{
      "", "WS", "SBRACKO", "SBRACKC", "CBRACKO", "CBRACKC", "PARENO", "PARENC", 
      "CONST", "FOR", "WHILE", "IF", "ELSE", "ELSEIF", "RETURN", "CONTROL_FLOW", 
      "STRUCT", "SHADER_INPUT", "SHADER_OUTPUT", "TEST", "TEST_ASSERT_TYPE", 
      "TYPE", "TEXTURE_TYPES", "SAMPLER_TYPE", "CONSTANT_BUFFER", "SLOT", 
      "COMMENT", "MCOMMENT", "SHADER_TYPE_LIT", "SHADER_TYPE", "EOL", "COMMA", 
      "COLON", "FLOATING_POINT", "NUMBER", "ASSIGN", "DOT", "AT", "PLUS", 
      "MINUS", "MULTIPLY", "DIVIDE", "OPERATION", "CREMENT", "NOT", "VAR_NAME"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,45,418,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,1,0,1,0,1,0,1,0,5,0,71,8,0,
  	10,0,12,0,74,9,0,1,1,1,1,1,1,1,1,1,2,1,2,1,3,1,3,1,4,1,4,1,4,1,4,1,4,
  	1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,
  	4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,3,4,122,
  	8,4,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,6,1,6,1,6,1,6,1,6,1,6,1,7,1,
  	7,1,7,1,7,1,7,1,7,3,7,145,8,7,1,8,1,8,3,8,149,8,8,1,9,1,9,1,9,1,9,1,9,
  	1,9,1,9,3,9,158,8,9,1,10,1,10,1,10,1,11,1,11,1,11,1,11,1,11,1,11,1,11,
  	1,11,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,13,1,13,1,13,1,13,1,13,
  	1,13,1,13,1,13,1,13,1,13,1,13,5,13,190,8,13,10,13,12,13,193,9,13,1,13,
  	1,13,1,14,1,14,1,14,1,14,1,14,1,14,5,14,203,8,14,10,14,12,14,206,9,14,
  	1,14,1,14,1,15,5,15,211,8,15,10,15,12,15,214,9,15,1,15,1,15,1,15,1,15,
  	1,15,1,15,5,15,222,8,15,10,15,12,15,225,9,15,3,15,227,8,15,1,15,1,15,
  	1,15,3,15,232,8,15,1,15,1,15,3,15,236,8,15,1,16,1,16,1,16,1,16,1,16,5,
  	16,243,8,16,10,16,12,16,246,9,16,3,16,248,8,16,1,16,1,16,1,17,1,17,3,
  	17,254,8,17,1,18,1,18,5,18,258,8,18,10,18,12,18,261,9,18,1,18,1,18,1,
  	19,1,19,1,19,1,19,1,19,1,19,1,19,1,19,1,19,1,19,5,19,275,8,19,10,19,12,
  	19,278,9,19,1,19,1,19,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,21,1,
  	21,1,21,1,21,1,21,1,21,5,21,296,8,21,10,21,12,21,299,9,21,1,21,1,21,1,
  	22,1,22,1,22,1,22,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,
  	23,1,23,3,23,319,8,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,
  	23,1,23,5,23,332,8,23,10,23,12,23,335,9,23,1,24,1,24,1,24,1,24,5,24,341,
  	8,24,10,24,12,24,344,9,24,3,24,346,8,24,1,24,1,24,1,25,1,25,1,25,3,25,
  	353,8,25,1,26,1,26,1,26,1,26,1,26,1,26,3,26,361,8,26,1,27,1,27,3,27,365,
  	8,27,1,27,1,27,1,27,3,27,370,8,27,1,28,5,28,373,8,28,10,28,12,28,376,
  	9,28,1,28,1,28,1,28,1,28,1,28,5,28,383,8,28,10,28,12,28,386,9,28,1,28,
  	1,28,3,28,390,8,28,1,29,1,29,1,29,1,29,1,29,5,29,397,8,29,10,29,12,29,
  	400,9,29,1,30,1,30,1,31,1,31,1,32,1,32,1,32,1,32,1,32,5,32,411,8,32,10,
  	32,12,32,414,9,32,1,32,1,32,1,32,0,1,46,33,0,2,4,6,8,10,12,14,16,18,20,
  	22,24,26,28,30,32,34,36,38,40,42,44,46,48,50,52,54,56,58,60,62,64,0,5,
  	1,0,17,18,2,0,21,21,45,45,1,0,40,41,1,0,38,39,1,0,33,34,443,0,66,1,0,
  	0,0,2,75,1,0,0,0,4,79,1,0,0,0,6,81,1,0,0,0,8,121,1,0,0,0,10,123,1,0,0,
  	0,12,132,1,0,0,0,14,138,1,0,0,0,16,148,1,0,0,0,18,150,1,0,0,0,20,159,
  	1,0,0,0,22,162,1,0,0,0,24,170,1,0,0,0,26,178,1,0,0,0,28,196,1,0,0,0,30,
  	212,1,0,0,0,32,237,1,0,0,0,34,251,1,0,0,0,36,255,1,0,0,0,38,264,1,0,0,
  	0,40,281,1,0,0,0,42,289,1,0,0,0,44,302,1,0,0,0,46,318,1,0,0,0,48,336,
  	1,0,0,0,50,352,1,0,0,0,52,360,1,0,0,0,54,364,1,0,0,0,56,374,1,0,0,0,58,
  	391,1,0,0,0,60,401,1,0,0,0,62,403,1,0,0,0,64,405,1,0,0,0,66,72,3,2,1,
  	0,67,71,3,4,2,0,68,71,3,6,3,0,69,71,3,8,4,0,70,67,1,0,0,0,70,68,1,0,0,
  	0,70,69,1,0,0,0,71,74,1,0,0,0,72,70,1,0,0,0,72,73,1,0,0,0,73,1,1,0,0,
  	0,74,72,1,0,0,0,75,76,5,28,0,0,76,77,5,29,0,0,77,78,5,30,0,0,78,3,1,0,
  	0,0,79,80,5,27,0,0,80,5,1,0,0,0,81,82,5,26,0,0,82,7,1,0,0,0,83,84,3,50,
  	25,0,84,85,5,30,0,0,85,122,1,0,0,0,86,87,3,44,22,0,87,88,5,30,0,0,88,
  	122,1,0,0,0,89,90,3,46,23,0,90,91,5,30,0,0,91,122,1,0,0,0,92,93,3,62,
  	31,0,93,94,5,30,0,0,94,122,1,0,0,0,95,122,3,10,5,0,96,122,3,12,6,0,97,
  	122,3,14,7,0,98,99,3,34,17,0,99,100,5,30,0,0,100,122,1,0,0,0,101,122,
  	3,30,15,0,102,103,3,32,16,0,103,104,5,30,0,0,104,122,1,0,0,0,105,106,
  	3,42,21,0,106,107,5,30,0,0,107,122,1,0,0,0,108,109,3,24,12,0,109,110,
  	5,30,0,0,110,122,1,0,0,0,111,112,3,22,11,0,112,113,5,30,0,0,113,122,1,
  	0,0,0,114,115,3,28,14,0,115,116,5,30,0,0,116,122,1,0,0,0,117,118,3,26,
  	13,0,118,119,5,30,0,0,119,122,1,0,0,0,120,122,3,38,19,0,121,83,1,0,0,
  	0,121,86,1,0,0,0,121,89,1,0,0,0,121,92,1,0,0,0,121,95,1,0,0,0,121,96,
  	1,0,0,0,121,97,1,0,0,0,121,98,1,0,0,0,121,101,1,0,0,0,121,102,1,0,0,0,
  	121,105,1,0,0,0,121,108,1,0,0,0,121,111,1,0,0,0,121,114,1,0,0,0,121,117,
  	1,0,0,0,121,120,1,0,0,0,122,9,1,0,0,0,123,124,5,9,0,0,124,125,5,6,0,0,
  	125,126,3,8,4,0,126,127,3,46,23,0,127,128,5,30,0,0,128,129,3,46,23,0,
  	129,130,5,7,0,0,130,131,3,36,18,0,131,11,1,0,0,0,132,133,5,10,0,0,133,
  	134,5,6,0,0,134,135,3,46,23,0,135,136,5,7,0,0,136,137,3,36,18,0,137,13,
  	1,0,0,0,138,139,5,11,0,0,139,140,5,6,0,0,140,141,3,46,23,0,141,142,5,
  	7,0,0,142,144,3,36,18,0,143,145,3,16,8,0,144,143,1,0,0,0,144,145,1,0,
  	0,0,145,15,1,0,0,0,146,149,3,20,10,0,147,149,3,18,9,0,148,146,1,0,0,0,
  	148,147,1,0,0,0,149,17,1,0,0,0,150,151,5,12,0,0,151,152,5,11,0,0,152,
  	153,5,6,0,0,153,154,3,46,23,0,154,155,5,7,0,0,155,157,3,36,18,0,156,158,
  	3,16,8,0,157,156,1,0,0,0,157,158,1,0,0,0,158,19,1,0,0,0,159,160,5,12,
  	0,0,160,161,3,36,18,0,161,21,1,0,0,0,162,163,5,22,0,0,163,164,5,6,0,0,
  	164,165,5,25,0,0,165,166,5,35,0,0,166,167,5,34,0,0,167,168,5,7,0,0,168,
  	169,5,45,0,0,169,23,1,0,0,0,170,171,5,23,0,0,171,172,5,6,0,0,172,173,
  	5,25,0,0,173,174,5,35,0,0,174,175,5,34,0,0,175,176,5,7,0,0,176,177,5,
  	45,0,0,177,25,1,0,0,0,178,179,5,24,0,0,179,180,5,6,0,0,180,181,5,25,0,
  	0,181,182,5,35,0,0,182,183,5,34,0,0,183,184,5,7,0,0,184,185,5,45,0,0,
  	185,191,5,4,0,0,186,187,3,56,28,0,187,188,5,30,0,0,188,190,1,0,0,0,189,
  	186,1,0,0,0,190,193,1,0,0,0,191,189,1,0,0,0,191,192,1,0,0,0,192,194,1,
  	0,0,0,193,191,1,0,0,0,194,195,5,5,0,0,195,27,1,0,0,0,196,197,7,0,0,0,
  	197,198,5,45,0,0,198,204,5,4,0,0,199,200,3,56,28,0,200,201,5,30,0,0,201,
  	203,1,0,0,0,202,199,1,0,0,0,203,206,1,0,0,0,204,202,1,0,0,0,204,205,1,
  	0,0,0,205,207,1,0,0,0,206,204,1,0,0,0,207,208,5,5,0,0,208,29,1,0,0,0,
  	209,211,5,8,0,0,210,209,1,0,0,0,211,214,1,0,0,0,212,210,1,0,0,0,212,213,
  	1,0,0,0,213,215,1,0,0,0,214,212,1,0,0,0,215,216,7,1,0,0,216,217,5,45,
  	0,0,217,226,5,6,0,0,218,223,3,56,28,0,219,220,5,31,0,0,220,222,3,56,28,
  	0,221,219,1,0,0,0,222,225,1,0,0,0,223,221,1,0,0,0,223,224,1,0,0,0,224,
  	227,1,0,0,0,225,223,1,0,0,0,226,218,1,0,0,0,226,227,1,0,0,0,227,228,1,
  	0,0,0,228,231,5,7,0,0,229,230,5,32,0,0,230,232,5,45,0,0,231,229,1,0,0,
  	0,231,232,1,0,0,0,232,235,1,0,0,0,233,236,3,36,18,0,234,236,5,30,0,0,
  	235,233,1,0,0,0,235,234,1,0,0,0,236,31,1,0,0,0,237,238,5,45,0,0,238,247,
  	5,6,0,0,239,244,3,46,23,0,240,241,5,31,0,0,241,243,3,46,23,0,242,240,
  	1,0,0,0,243,246,1,0,0,0,244,242,1,0,0,0,244,245,1,0,0,0,245,248,1,0,0,
  	0,246,244,1,0,0,0,247,239,1,0,0,0,247,248,1,0,0,0,248,249,1,0,0,0,249,
  	250,5,7,0,0,250,33,1,0,0,0,251,253,5,14,0,0,252,254,3,46,23,0,253,252,
  	1,0,0,0,253,254,1,0,0,0,254,35,1,0,0,0,255,259,5,4,0,0,256,258,3,8,4,
  	0,257,256,1,0,0,0,258,261,1,0,0,0,259,257,1,0,0,0,259,260,1,0,0,0,260,
  	262,1,0,0,0,261,259,1,0,0,0,262,263,5,5,0,0,263,37,1,0,0,0,264,265,5,
  	37,0,0,265,266,5,19,0,0,266,267,5,6,0,0,267,268,5,45,0,0,268,269,5,31,
  	0,0,269,270,5,45,0,0,270,271,5,7,0,0,271,276,5,4,0,0,272,275,3,8,4,0,
  	273,275,3,40,20,0,274,272,1,0,0,0,274,273,1,0,0,0,275,278,1,0,0,0,276,
  	274,1,0,0,0,276,277,1,0,0,0,277,279,1,0,0,0,278,276,1,0,0,0,279,280,5,
  	5,0,0,280,39,1,0,0,0,281,282,5,20,0,0,282,283,5,6,0,0,283,284,3,46,23,
  	0,284,285,5,31,0,0,285,286,3,46,23,0,286,287,5,7,0,0,287,288,5,30,0,0,
  	288,41,1,0,0,0,289,290,5,16,0,0,290,291,5,45,0,0,291,297,5,4,0,0,292,
  	293,3,56,28,0,293,294,5,30,0,0,294,296,1,0,0,0,295,292,1,0,0,0,296,299,
  	1,0,0,0,297,295,1,0,0,0,297,298,1,0,0,0,298,300,1,0,0,0,299,297,1,0,0,
  	0,300,301,5,5,0,0,301,43,1,0,0,0,302,303,3,50,25,0,303,304,5,35,0,0,304,
  	305,3,46,23,0,305,45,1,0,0,0,306,307,6,23,-1,0,307,308,5,6,0,0,308,309,
  	3,46,23,0,309,310,5,7,0,0,310,319,1,0,0,0,311,312,5,43,0,0,312,319,3,
  	46,23,5,313,314,5,44,0,0,314,319,3,46,23,3,315,316,5,39,0,0,316,319,3,
  	46,23,2,317,319,3,52,26,0,318,306,1,0,0,0,318,311,1,0,0,0,318,313,1,0,
  	0,0,318,315,1,0,0,0,318,317,1,0,0,0,319,333,1,0,0,0,320,321,10,9,0,0,
  	321,322,7,2,0,0,322,332,3,46,23,10,323,324,10,8,0,0,324,325,7,3,0,0,325,
  	332,3,46,23,9,326,327,10,7,0,0,327,328,5,42,0,0,328,332,3,46,23,8,329,
  	330,10,4,0,0,330,332,5,43,0,0,331,320,1,0,0,0,331,323,1,0,0,0,331,326,
  	1,0,0,0,331,329,1,0,0,0,332,335,1,0,0,0,333,331,1,0,0,0,333,334,1,0,0,
  	0,334,47,1,0,0,0,335,333,1,0,0,0,336,345,5,4,0,0,337,342,3,46,23,0,338,
  	339,5,31,0,0,339,341,3,46,23,0,340,338,1,0,0,0,341,344,1,0,0,0,342,340,
  	1,0,0,0,342,343,1,0,0,0,343,346,1,0,0,0,344,342,1,0,0,0,345,337,1,0,0,
  	0,345,346,1,0,0,0,346,347,1,0,0,0,347,348,5,5,0,0,348,49,1,0,0,0,349,
  	353,3,56,28,0,350,353,3,58,29,0,351,353,3,54,27,0,352,349,1,0,0,0,352,
  	350,1,0,0,0,352,351,1,0,0,0,353,51,1,0,0,0,354,361,3,58,29,0,355,361,
  	3,60,30,0,356,361,3,32,16,0,357,361,3,64,32,0,358,361,3,54,27,0,359,361,
  	3,48,24,0,360,354,1,0,0,0,360,355,1,0,0,0,360,356,1,0,0,0,360,357,1,0,
  	0,0,360,358,1,0,0,0,360,359,1,0,0,0,361,53,1,0,0,0,362,365,3,58,29,0,
  	363,365,3,32,16,0,364,362,1,0,0,0,364,363,1,0,0,0,365,366,1,0,0,0,366,
  	369,5,36,0,0,367,370,3,58,29,0,368,370,3,54,27,0,369,367,1,0,0,0,369,
  	368,1,0,0,0,370,55,1,0,0,0,371,373,5,8,0,0,372,371,1,0,0,0,373,376,1,
  	0,0,0,374,372,1,0,0,0,374,375,1,0,0,0,375,377,1,0,0,0,376,374,1,0,0,0,
  	377,378,7,1,0,0,378,384,5,45,0,0,379,380,5,2,0,0,380,381,5,34,0,0,381,
  	383,5,3,0,0,382,379,1,0,0,0,383,386,1,0,0,0,384,382,1,0,0,0,384,385,1,
  	0,0,0,385,389,1,0,0,0,386,384,1,0,0,0,387,388,5,32,0,0,388,390,5,45,0,
  	0,389,387,1,0,0,0,389,390,1,0,0,0,390,57,1,0,0,0,391,398,5,45,0,0,392,
  	393,5,2,0,0,393,394,3,46,23,0,394,395,5,3,0,0,395,397,1,0,0,0,396,392,
  	1,0,0,0,397,400,1,0,0,0,398,396,1,0,0,0,398,399,1,0,0,0,399,59,1,0,0,
  	0,400,398,1,0,0,0,401,402,7,4,0,0,402,61,1,0,0,0,403,404,5,15,0,0,404,
  	63,1,0,0,0,405,406,5,21,0,0,406,407,5,6,0,0,407,412,3,46,23,0,408,409,
  	5,31,0,0,409,411,3,46,23,0,410,408,1,0,0,0,411,414,1,0,0,0,412,410,1,
  	0,0,0,412,413,1,0,0,0,413,415,1,0,0,0,414,412,1,0,0,0,415,416,5,7,0,0,
  	416,65,1,0,0,0,34,70,72,121,144,148,157,191,204,212,223,226,231,235,244,
  	247,253,259,274,276,297,318,331,333,342,345,352,360,364,369,374,384,389,
  	398,412
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  srslgrammarParserStaticData = staticData.release();
}

}

SrslGrammarParser::SrslGrammarParser(TokenStream *input) : SrslGrammarParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

SrslGrammarParser::SrslGrammarParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  SrslGrammarParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *srslgrammarParserStaticData->atn, srslgrammarParserStaticData->decisionToDFA, srslgrammarParserStaticData->sharedContextCache, options);
}

SrslGrammarParser::~SrslGrammarParser() {
  delete _interpreter;
}

const atn::ATN& SrslGrammarParser::getATN() const {
  return *srslgrammarParserStaticData->atn;
}

std::string SrslGrammarParser::getGrammarFileName() const {
  return "SrslGrammar.g4";
}

const std::vector<std::string>& SrslGrammarParser::getRuleNames() const {
  return srslgrammarParserStaticData->ruleNames;
}

const dfa::Vocabulary& SrslGrammarParser::getVocabulary() const {
  return srslgrammarParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView SrslGrammarParser::getSerializedATN() const {
  return srslgrammarParserStaticData->serializedATN;
}


//----------------- FileContext ------------------------------------------------------------------

SrslGrammarParser::FileContext::FileContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SrslGrammarParser::ShaderTypeSpecContext* SrslGrammarParser::FileContext::shaderTypeSpec() {
  return getRuleContext<SrslGrammarParser::ShaderTypeSpecContext>(0);
}

std::vector<SrslGrammarParser::MultilineCommentContext *> SrslGrammarParser::FileContext::multilineComment() {
  return getRuleContexts<SrslGrammarParser::MultilineCommentContext>();
}

SrslGrammarParser::MultilineCommentContext* SrslGrammarParser::FileContext::multilineComment(size_t i) {
  return getRuleContext<SrslGrammarParser::MultilineCommentContext>(i);
}

std::vector<SrslGrammarParser::SinglelinecommentContext *> SrslGrammarParser::FileContext::singlelinecomment() {
  return getRuleContexts<SrslGrammarParser::SinglelinecommentContext>();
}

SrslGrammarParser::SinglelinecommentContext* SrslGrammarParser::FileContext::singlelinecomment(size_t i) {
  return getRuleContext<SrslGrammarParser::SinglelinecommentContext>(i);
}

std::vector<SrslGrammarParser::StatementContext *> SrslGrammarParser::FileContext::statement() {
  return getRuleContexts<SrslGrammarParser::StatementContext>();
}

SrslGrammarParser::StatementContext* SrslGrammarParser::FileContext::statement(size_t i) {
  return getRuleContext<SrslGrammarParser::StatementContext>(i);
}


size_t SrslGrammarParser::FileContext::getRuleIndex() const {
  return SrslGrammarParser::RuleFile;
}

void SrslGrammarParser::FileContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SrslGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFile(this);
}

void SrslGrammarParser::FileContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SrslGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFile(this);
}

SrslGrammarParser::FileContext* SrslGrammarParser::file() {
  FileContext *_localctx = _tracker.createInstance<FileContext>(_ctx, getState());
  enterRule(_localctx, 0, SrslGrammarParser::RuleFile);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(66);
    shaderTypeSpec();
    setState(72);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 62285849022288) != 0) {
      setState(70);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case SrslGrammarParser::MCOMMENT: {
          setState(67);
          multilineComment();
          break;
        }

        case SrslGrammarParser::COMMENT: {
          setState(68);
          singlelinecomment();
          break;
        }

        case SrslGrammarParser::CBRACKO:
        case SrslGrammarParser::PARENO:
        case SrslGrammarParser::CONST:
        case SrslGrammarParser::FOR:
        case SrslGrammarParser::WHILE:
        case SrslGrammarParser::IF:
        case SrslGrammarParser::RETURN:
        case SrslGrammarParser::CONTROL_FLOW:
        case SrslGrammarParser::STRUCT:
        case SrslGrammarParser::SHADER_INPUT:
        case SrslGrammarParser::SHADER_OUTPUT:
        case SrslGrammarParser::TYPE:
        case SrslGrammarParser::TEXTURE_TYPES:
        case SrslGrammarParser::SAMPLER_TYPE:
        case SrslGrammarParser::CONSTANT_BUFFER:
        case SrslGrammarParser::FLOATING_POINT:
        case SrslGrammarParser::NUMBER:
        case SrslGrammarParser::AT:
        case SrslGrammarParser::MINUS:
        case SrslGrammarParser::CREMENT:
        case SrslGrammarParser::NOT:
        case SrslGrammarParser::VAR_NAME: {
          setState(69);
          statement();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(74);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ShaderTypeSpecContext ------------------------------------------------------------------

SrslGrammarParser::ShaderTypeSpecContext::ShaderTypeSpecContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SrslGrammarParser::ShaderTypeSpecContext::SHADER_TYPE_LIT() {
  return getToken(SrslGrammarParser::SHADER_TYPE_LIT, 0);
}

tree::TerminalNode* SrslGrammarParser::ShaderTypeSpecContext::SHADER_TYPE() {
  return getToken(SrslGrammarParser::SHADER_TYPE, 0);
}

tree::TerminalNode* SrslGrammarParser::ShaderTypeSpecContext::EOL() {
  return getToken(SrslGrammarParser::EOL, 0);
}


size_t SrslGrammarParser::ShaderTypeSpecContext::getRuleIndex() const {
  return SrslGrammarParser::RuleShaderTypeSpec;
}

void SrslGrammarParser::ShaderTypeSpecContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SrslGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterShaderTypeSpec(this);
}

void SrslGrammarParser::ShaderTypeSpecContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SrslGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitShaderTypeSpec(this);
}

SrslGrammarParser::ShaderTypeSpecContext* SrslGrammarParser::shaderTypeSpec() {
  ShaderTypeSpecContext *_localctx = _tracker.createInstance<ShaderTypeSpecContext>(_ctx, getState());
  enterRule(_localctx, 2, SrslGrammarParser::RuleShaderTypeSpec);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(75);
    match(SrslGrammarParser::SHADER_TYPE_LIT);
    setState(76);
    match(SrslGrammarParser::SHADER_TYPE);
    setState(77);
    match(SrslGrammarParser::EOL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MultilineCommentContext ------------------------------------------------------------------

SrslGrammarParser::MultilineCommentContext::MultilineCommentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SrslGrammarParser::MultilineCommentContext::MCOMMENT() {
  return getToken(SrslGrammarParser::MCOMMENT, 0);
}


size_t SrslGrammarParser::MultilineCommentContext::getRuleIndex() const {
  return SrslGrammarParser::RuleMultilineComment;
}

void SrslGrammarParser::MultilineCommentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SrslGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMultilineComment(this);
}

void SrslGrammarParser::MultilineCommentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SrslGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMultilineComment(this);
}

SrslGrammarParser::MultilineCommentContext* SrslGrammarParser::multilineComment() {
  MultilineCommentContext *_localctx = _tracker.createInstance<MultilineCommentContext>(_ctx, getState());
  enterRule(_localctx, 4, SrslGrammarParser::RuleMultilineComment);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(79);
    match(SrslGrammarParser::MCOMMENT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SinglelinecommentContext ------------------------------------------------------------------

SrslGrammarParser::SinglelinecommentContext::SinglelinecommentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SrslGrammarParser::SinglelinecommentContext::COMMENT() {
  return getToken(SrslGrammarParser::COMMENT, 0);
}


size_t SrslGrammarParser::SinglelinecommentContext::getRuleIndex() const {
  return SrslGrammarParser::RuleSinglelinecomment;
}

void SrslGrammarParser::SinglelinecommentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SrslGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSinglelinecomment(this);
}

void SrslGrammarParser::SinglelinecommentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SrslGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSinglelinecomment(this);
}

SrslGrammarParser::SinglelinecommentContext* SrslGrammarParser::singlelinecomment() {
  SinglelinecommentContext *_localctx = _tracker.createInstance<SinglelinecommentContext>(_ctx, getState());
  enterRule(_localctx, 6, SrslGrammarParser::RuleSinglelinecomment);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(81);
    match(SrslGrammarParser::COMMENT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

SrslGrammarParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SrslGrammarParser::LvalueContext* SrslGrammarParser::StatementContext::lvalue() {
  return getRuleContext<SrslGrammarParser::LvalueContext>(0);
}

tree::TerminalNode* SrslGrammarParser::StatementContext::EOL() {
  return getToken(SrslGrammarParser::EOL, 0);
}

SrslGrammarParser::AssignmentContext* SrslGrammarParser::StatementContext::assignment() {
  return getRuleContext<SrslGrammarParser::AssignmentContext>(0);
}

SrslGrammarParser::ExpressionContext* SrslGrammarParser::StatementContext::expression() {
  return getRuleContext<SrslGrammarParser::ExpressionContext>(0);
}

SrslGrammarParser::ControlFlowContext* SrslGrammarParser::StatementContext::controlFlow() {
  return getRuleContext<SrslGrammarParser::ControlFlowContext>(0);
}

SrslGrammarParser::ForLoopContext* SrslGrammarParser::StatementContext::forLoop() {
  return getRuleContext<SrslGrammarParser::ForLoopContext>(0);
}

SrslGrammarParser::WhileLoopContext* SrslGrammarParser::StatementContext::whileLoop() {
  return getRuleContext<SrslGrammarParser::WhileLoopContext>(0);
}

SrslGrammarParser::IfStatementContext* SrslGrammarParser::StatementContext::ifStatement() {
  return getRuleContext<SrslGrammarParser::IfStatementContext>(0);
}

SrslGrammarParser::ReturnStatementContext* SrslGrammarParser::StatementContext::returnStatement() {
  return getRuleContext<SrslGrammarParser::ReturnStatementContext>(0);
}

SrslGrammarParser::FunctionDeclarationContext* SrslGrammarParser::StatementContext::functionDeclaration() {
  return getRuleContext<SrslGrammarParser::FunctionDeclarationContext>(0);
}

SrslGrammarParser::FunctionCallContext* SrslGrammarParser::StatementContext::functionCall() {
  return getRuleContext<SrslGrammarParser::FunctionCallContext>(0);
}

SrslGrammarParser::StructDeclarationContext* SrslGrammarParser::StatementContext::structDeclaration() {
  return getRuleContext<SrslGrammarParser::StructDeclarationContext>(0);
}

SrslGrammarParser::SamplerDeclarationContext* SrslGrammarParser::StatementContext::samplerDeclaration() {
  return getRuleContext<SrslGrammarParser::SamplerDeclarationContext>(0);
}

SrslGrammarParser::TextureDeclarationContext* SrslGrammarParser::StatementContext::textureDeclaration() {
  return getRuleContext<SrslGrammarParser::TextureDeclarationContext>(0);
}

SrslGrammarParser::ShaderInterfaceContext* SrslGrammarParser::StatementContext::shaderInterface() {
  return getRuleContext<SrslGrammarParser::ShaderInterfaceContext>(0);
}

SrslGrammarParser::ConstantBufferDeclarationContext* SrslGrammarParser::StatementContext::constantBufferDeclaration() {
  return getRuleContext<SrslGrammarParser::ConstantBufferDeclarationContext>(0);
}

SrslGrammarParser::TestCaseContext* SrslGrammarParser::StatementContext::testCase() {
  return getRuleContext<SrslGrammarParser::TestCaseContext>(0);
}


size_t SrslGrammarParser::StatementContext::getRuleIndex() const {
  return SrslGrammarParser::RuleStatement;
}

void SrslGrammarParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SrslGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void SrslGrammarParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SrslGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}

SrslGrammarParser::StatementContext* SrslGrammarParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 8, SrslGrammarParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(121);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(83);
      lvalue();
      setState(84);
      match(SrslGrammarParser::EOL);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(86);
      assignment();
      setState(87);
      match(SrslGrammarParser::EOL);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(89);
      expression(0);
      setState(90);
      match(SrslGrammarParser::EOL);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(92);
      controlFlow();
      setState(93);
      match(SrslGrammarParser::EOL);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(95);
      forLoop();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(96);
      whileLoop();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(97);
      ifStatement();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(98);
      returnStatement();
      setState(99);
      match(SrslGrammarParser::EOL);
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(101);
      functionDeclaration();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(102);
      functionCall();
      setState(103);
      match(SrslGrammarParser::EOL);
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(105);
      structDeclaration();
      setState(106);
      match(SrslGrammarParser::EOL);
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(108);
      samplerDeclaration();
      setState(109);
      match(SrslGrammarParser::EOL);
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(111);
      textureDeclaration();
      setState(112);
      match(SrslGrammarParser::EOL);
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(114);
      shaderInterface();
      setState(115);
      match(SrslGrammarParser::EOL);
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(117);
      constantBufferDeclaration();
      setState(118);
      match(SrslGrammarParser::EOL);
      break;
    }

    case 16: {
      enterOuterAlt(_localctx, 16);
      setState(120);
      testCase();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForLoopContext ------------------------------------------------------------------

SrslGrammarParser::ForLoopContext::ForLoopContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SrslGrammarParser::ForLoopContext::FOR() {
  return getToken(SrslGrammarParser::FOR, 0);
}

tree::TerminalNode* SrslGrammarParser::ForLoopContext::PARENO() {
  return getToken(SrslGrammarParser::PARENO, 0);
}

SrslGrammarParser::StatementContext* SrslGrammarParser::ForLoopContext::statement() {
  return getRuleContext<SrslGrammarParser::StatementContext>(0);
}

std::vector<SrslGrammarParser::ExpressionContext *> SrslGrammarParser::ForLoopContext::expression() {
  return getRuleContexts<SrslGrammarParser::ExpressionContext>();
}

SrslGrammarParser::ExpressionContext* SrslGrammarParser::ForLoopContext::expression(size_t i) {
  return getRuleContext<SrslGrammarParser::ExpressionContext>(i);
}

tree::TerminalNode* SrslGrammarParser::ForLoopContext::EOL() {
  return getToken(SrslGrammarParser::EOL, 0);
}

tree::TerminalNode* SrslGrammarParser::ForLoopContext::PARENC() {
  return getToken(SrslGrammarParser::PARENC, 0);
}

SrslGrammarParser::ScopeContext* SrslGrammarParser::ForLoopContext::scope() {
  return getRuleContext<SrslGrammarParser::ScopeContext>(0);
}


size_t SrslGrammarParser::ForLoopContext::getRuleIndex() const {
  return SrslGrammarParser::RuleForLoop;
}

void SrslGrammarParser::ForLoopContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SrslGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForLoop(this);
}

void SrslGrammarParser::ForLoopContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SrslGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForLoop(this);
}

SrslGrammarParser::ForLoopContext* SrslGrammarParser::forLoop() {
  ForLoopContext *_localctx = _tracker.createInstance<ForLoopContext>(_ctx, getState());
  enterRule(_localctx, 10, SrslGrammarParser::RuleForLoop);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(123);
    match(SrslGrammarParser::FOR);
    setState(124);
    match(SrslGrammarParser::PARENO);
    setState(125);
    statement();
    setState(126);
    expression(0);
    setState(127);
    match(SrslGrammarParser::EOL);
    setState(128);
    expression(0);
    setState(129);
    match(SrslGrammarParser::PARENC);
    setState(130);
    scope();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhileLoopContext ------------------------------------------------------------------

SrslGrammarParser::WhileLoopContext::WhileLoopContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SrslGrammarParser::WhileLoopContext::WHILE() {
  return getToken(SrslGrammarParser::WHILE, 0);
}

tree::TerminalNode* SrslGrammarParser::WhileLoopContext::PARENO() {
  return getToken(SrslGrammarParser::PARENO, 0);
}

SrslGrammarParser::ExpressionContext* SrslGrammarParser::WhileLoopContext::expression() {
  return getRuleContext<SrslGrammarParser::ExpressionContext>(0);
}

tree::TerminalNode* SrslGrammarParser::WhileLoopContext::PARENC() {
  return getToken(SrslGrammarParser::PARENC, 0);
}

SrslGrammarParser::ScopeContext* SrslGrammarParser::WhileLoopContext::scope() {
  return getRuleContext<SrslGrammarParser::ScopeContext>(0);
}


size_t SrslGrammarParser::WhileLoopContext::getRuleIndex() const {
  return SrslGrammarParser::RuleWhileLoop;
}

void SrslGrammarParser::WhileLoopContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SrslGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhileLoop(this);
}

void SrslGrammarParser::WhileLoopContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SrslGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhileLoop(this);
}

SrslGrammarParser::WhileLoopContext* SrslGrammarParser::whileLoop() {
  WhileLoopContext *_localctx = _tracker.createInstance<WhileLoopContext>(_ctx, getState());
  enterRule(_localctx, 12, SrslGrammarParser::RuleWhileLoop);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(132);
    match(SrslGrammarParser::WHILE);
    setState(133);
    match(SrslGrammarParser::PARENO);
    setState(134);
    expression(0);
    setState(135);
    match(SrslGrammarParser::PARENC);
    setState(136);
    scope();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfStatementContext ------------------------------------------------------------------

SrslGrammarParser::IfStatementContext::IfStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SrslGrammarParser::IfStatementContext::IF() {
  return getToken(SrslGrammarParser::IF, 0);
}

tree::TerminalNode* SrslGrammarParser::IfStatementContext::PARENO() {
  return getToken(SrslGrammarParser::PARENO, 0);
}

SrslGrammarParser::ExpressionContext* SrslGrammarParser::IfStatementContext::expression() {
  return getRuleContext<SrslGrammarParser::ExpressionContext>(0);
}

tree::TerminalNode* SrslGrammarParser::IfStatementContext::PARENC() {
  return getToken(SrslGrammarParser::PARENC, 0);
}

SrslGrammarParser::ScopeContext* SrslGrammarParser::IfStatementContext::scope() {
  return getRuleContext<SrslGrammarParser::ScopeContext>(0);
}

SrslGrammarParser::OptionalStatementContext* SrslGrammarParser::IfStatementContext::optionalStatement() {
  return getRuleContext<SrslGrammarParser::OptionalStatementContext>(0);
}


size_t SrslGrammarParser::IfStatementContext::getRuleIndex() const {
  return SrslGrammarParser::RuleIfStatement;
}

void SrslGrammarParser::IfStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SrslGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfStatement(this);
}

void SrslGrammarParser::IfStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SrslGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfStatement(this);
}

SrslGrammarParser::IfStatementContext* SrslGrammarParser::ifStatement() {
  IfStatementContext *_localctx = _tracker.createInstance<IfStatementContext>(_ctx, getState());
  enterRule(_localctx, 14, SrslGrammarParser::RuleIfStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(138);
    match(SrslGrammarParser::IF);
    setState(139);
    match(SrslGrammarParser::PARENO);
    setState(140);
    expression(0);
    setState(141);
    match(SrslGrammarParser::PARENC);
    setState(142);
    scope();
    setState(144);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SrslGrammarParser::ELSE) {
      setState(143);
      optionalStatement();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OptionalStatementContext ------------------------------------------------------------------

SrslGrammarParser::OptionalStatementContext::OptionalStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SrslGrammarParser::ElseStatementContext* SrslGrammarParser::OptionalStatementContext::elseStatement() {
  return getRuleContext<SrslGrammarParser::ElseStatementContext>(0);
}

SrslGrammarParser::ElseIfStatementContext* SrslGrammarParser::OptionalStatementContext::elseIfStatement() {
  return getRuleContext<SrslGrammarParser::ElseIfStatementContext>(0);
}


size_t SrslGrammarParser::OptionalStatementContext::getRuleIndex() const {
  return SrslGrammarParser::RuleOptionalStatement;
}

void SrslGrammarParser::OptionalStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SrslGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOptionalStatement(this);
}

void SrslGrammarParser::OptionalStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SrslGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOptionalStatement(this);
}

SrslGrammarParser::OptionalStatementContext* SrslGrammarParser::optionalStatement() {
  OptionalStatementContext *_localctx = _tracker.createInstance<OptionalStatementContext>(_ctx, getState());
  enterRule(_localctx, 16, SrslGrammarParser::RuleOptionalStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(148);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(146);
      elseStatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(147);
      elseIfStatement();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElseIfStatementContext ------------------------------------------------------------------

SrslGrammarParser::ElseIfStatementContext::ElseIfStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SrslGrammarParser::ElseIfStatementContext::ELSE() {
  return getToken(SrslGrammarParser::ELSE, 0);
}

tree::TerminalNode* SrslGrammarParser::ElseIfStatementContext::IF() {
  return getToken(SrslGrammarParser::IF, 0);
}

tree::TerminalNode* SrslGrammarParser::ElseIfStatementContext::PARENO() {
  return getToken(SrslGrammarParser::PARENO, 0);
}

SrslGrammarParser::ExpressionContext* SrslGrammarParser::ElseIfStatementContext::expression() {
  return getRuleContext<SrslGrammarParser::ExpressionContext>(0);
}

tree::TerminalNode* SrslGrammarParser::ElseIfStatementContext::PARENC() {
  return getToken(SrslGrammarParser::PARENC, 0);
}

SrslGrammarParser::ScopeContext* SrslGrammarParser::ElseIfStatementContext::scope() {
  return getRuleContext<SrslGrammarParser::ScopeContext>(0);
}

SrslGrammarParser::OptionalStatementContext* SrslGrammarParser::ElseIfStatementContext::optionalStatement() {
  return getRuleContext<SrslGrammarParser::OptionalStatementContext>(0);
}


size_t SrslGrammarParser::ElseIfStatementContext::getRuleIndex() const {
  return SrslGrammarParser::RuleElseIfStatement;
}

void SrslGrammarParser::ElseIfStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SrslGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElseIfStatement(this);
}

void SrslGrammarParser::ElseIfStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SrslGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElseIfStatement(this);
}

SrslGrammarParser::ElseIfStatementContext* SrslGrammarParser::elseIfStatement() {
  ElseIfStatementContext *_localctx = _tracker.createInstance<ElseIfStatementContext>(_ctx, getState());
  enterRule(_localctx, 18, SrslGrammarParser::RuleElseIfStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(150);
    match(SrslGrammarParser::ELSE);
    setState(151);
    match(SrslGrammarParser::IF);
    setState(152);
    match(SrslGrammarParser::PARENO);
    setState(153);
    expression(0);
    setState(154);
    match(SrslGrammarParser::PARENC);
    setState(155);
    scope();
    setState(157);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SrslGrammarParser::ELSE) {
      setState(156);
      optionalStatement();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElseStatementContext ------------------------------------------------------------------

SrslGrammarParser::ElseStatementContext::ElseStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SrslGrammarParser::ElseStatementContext::ELSE() {
  return getToken(SrslGrammarParser::ELSE, 0);
}

SrslGrammarParser::ScopeContext* SrslGrammarParser::ElseStatementContext::scope() {
  return getRuleContext<SrslGrammarParser::ScopeContext>(0);
}


size_t SrslGrammarParser::ElseStatementContext::getRuleIndex() const {
  return SrslGrammarParser::RuleElseStatement;
}

void SrslGrammarParser::ElseStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SrslGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElseStatement(this);
}

void SrslGrammarParser::ElseStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SrslGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElseStatement(this);
}

SrslGrammarParser::ElseStatementContext* SrslGrammarParser::elseStatement() {
  ElseStatementContext *_localctx = _tracker.createInstance<ElseStatementContext>(_ctx, getState());
  enterRule(_localctx, 20, SrslGrammarParser::RuleElseStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(159);
    match(SrslGrammarParser::ELSE);
    setState(160);
    scope();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TextureDeclarationContext ------------------------------------------------------------------

SrslGrammarParser::TextureDeclarationContext::TextureDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SrslGrammarParser::TextureDeclarationContext::TEXTURE_TYPES() {
  return getToken(SrslGrammarParser::TEXTURE_TYPES, 0);
}

tree::TerminalNode* SrslGrammarParser::TextureDeclarationContext::PARENO() {
  return getToken(SrslGrammarParser::PARENO, 0);
}

tree::TerminalNode* SrslGrammarParser::TextureDeclarationContext::SLOT() {
  return getToken(SrslGrammarParser::SLOT, 0);
}

tree::TerminalNode* SrslGrammarParser::TextureDeclarationContext::ASSIGN() {
  return getToken(SrslGrammarParser::ASSIGN, 0);
}

tree::TerminalNode* SrslGrammarParser::TextureDeclarationContext::NUMBER() {
  return getToken(SrslGrammarParser::NUMBER, 0);
}

tree::TerminalNode* SrslGrammarParser::TextureDeclarationContext::PARENC() {
  return getToken(SrslGrammarParser::PARENC, 0);
}

tree::TerminalNode* SrslGrammarParser::TextureDeclarationContext::VAR_NAME() {
  return getToken(SrslGrammarParser::VAR_NAME, 0);
}


size_t SrslGrammarParser::TextureDeclarationContext::getRuleIndex() const {
  return SrslGrammarParser::RuleTextureDeclaration;
}

void SrslGrammarParser::TextureDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SrslGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTextureDeclaration(this);
}

void SrslGrammarParser::TextureDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SrslGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTextureDeclaration(this);
}

SrslGrammarParser::TextureDeclarationContext* SrslGrammarParser::textureDeclaration() {
  TextureDeclarationContext *_localctx = _tracker.createInstance<TextureDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 22, SrslGrammarParser::RuleTextureDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(162);
    match(SrslGrammarParser::TEXTURE_TYPES);
    setState(163);
    match(SrslGrammarParser::PARENO);
    setState(164);
    match(SrslGrammarParser::SLOT);
    setState(165);
    match(SrslGrammarParser::ASSIGN);
    setState(166);
    match(SrslGrammarParser::NUMBER);
    setState(167);
    match(SrslGrammarParser::PARENC);
    setState(168);
    match(SrslGrammarParser::VAR_NAME);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SamplerDeclarationContext ------------------------------------------------------------------

SrslGrammarParser::SamplerDeclarationContext::SamplerDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SrslGrammarParser::SamplerDeclarationContext::SAMPLER_TYPE() {
  return getToken(SrslGrammarParser::SAMPLER_TYPE, 0);
}

tree::TerminalNode* SrslGrammarParser::SamplerDeclarationContext::PARENO() {
  return getToken(SrslGrammarParser::PARENO, 0);
}

tree::TerminalNode* SrslGrammarParser::SamplerDeclarationContext::SLOT() {
  return getToken(SrslGrammarParser::SLOT, 0);
}

tree::TerminalNode* SrslGrammarParser::SamplerDeclarationContext::ASSIGN() {
  return getToken(SrslGrammarParser::ASSIGN, 0);
}

tree::TerminalNode* SrslGrammarParser::SamplerDeclarationContext::NUMBER() {
  return getToken(SrslGrammarParser::NUMBER, 0);
}

tree::TerminalNode* SrslGrammarParser::SamplerDeclarationContext::PARENC() {
  return getToken(SrslGrammarParser::PARENC, 0);
}

tree::TerminalNode* SrslGrammarParser::SamplerDeclarationContext::VAR_NAME() {
  return getToken(SrslGrammarParser::VAR_NAME, 0);
}


size_t SrslGrammarParser::SamplerDeclarationContext::getRuleIndex() const {
  return SrslGrammarParser::RuleSamplerDeclaration;
}

void SrslGrammarParser::SamplerDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SrslGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSamplerDeclaration(this);
}

void SrslGrammarParser::SamplerDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SrslGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSamplerDeclaration(this);
}

SrslGrammarParser::SamplerDeclarationContext* SrslGrammarParser::samplerDeclaration() {
  SamplerDeclarationContext *_localctx = _tracker.createInstance<SamplerDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 24, SrslGrammarParser::RuleSamplerDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(170);
    match(SrslGrammarParser::SAMPLER_TYPE);
    setState(171);
    match(SrslGrammarParser::PARENO);
    setState(172);
    match(SrslGrammarParser::SLOT);
    setState(173);
    match(SrslGrammarParser::ASSIGN);
    setState(174);
    match(SrslGrammarParser::NUMBER);
    setState(175);
    match(SrslGrammarParser::PARENC);
    setState(176);
    match(SrslGrammarParser::VAR_NAME);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstantBufferDeclarationContext ------------------------------------------------------------------

SrslGrammarParser::ConstantBufferDeclarationContext::ConstantBufferDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SrslGrammarParser::ConstantBufferDeclarationContext::CONSTANT_BUFFER() {
  return getToken(SrslGrammarParser::CONSTANT_BUFFER, 0);
}

tree::TerminalNode* SrslGrammarParser::ConstantBufferDeclarationContext::PARENO() {
  return getToken(SrslGrammarParser::PARENO, 0);
}

tree::TerminalNode* SrslGrammarParser::ConstantBufferDeclarationContext::SLOT() {
  return getToken(SrslGrammarParser::SLOT, 0);
}

tree::TerminalNode* SrslGrammarParser::ConstantBufferDeclarationContext::ASSIGN() {
  return getToken(SrslGrammarParser::ASSIGN, 0);
}

tree::TerminalNode* SrslGrammarParser::ConstantBufferDeclarationContext::NUMBER() {
  return getToken(SrslGrammarParser::NUMBER, 0);
}

tree::TerminalNode* SrslGrammarParser::ConstantBufferDeclarationContext::PARENC() {
  return getToken(SrslGrammarParser::PARENC, 0);
}

tree::TerminalNode* SrslGrammarParser::ConstantBufferDeclarationContext::VAR_NAME() {
  return getToken(SrslGrammarParser::VAR_NAME, 0);
}

tree::TerminalNode* SrslGrammarParser::ConstantBufferDeclarationContext::CBRACKO() {
  return getToken(SrslGrammarParser::CBRACKO, 0);
}

tree::TerminalNode* SrslGrammarParser::ConstantBufferDeclarationContext::CBRACKC() {
  return getToken(SrslGrammarParser::CBRACKC, 0);
}

std::vector<SrslGrammarParser::NewVariableContext *> SrslGrammarParser::ConstantBufferDeclarationContext::newVariable() {
  return getRuleContexts<SrslGrammarParser::NewVariableContext>();
}

SrslGrammarParser::NewVariableContext* SrslGrammarParser::ConstantBufferDeclarationContext::newVariable(size_t i) {
  return getRuleContext<SrslGrammarParser::NewVariableContext>(i);
}

std::vector<tree::TerminalNode *> SrslGrammarParser::ConstantBufferDeclarationContext::EOL() {
  return getTokens(SrslGrammarParser::EOL);
}

tree::TerminalNode* SrslGrammarParser::ConstantBufferDeclarationContext::EOL(size_t i) {
  return getToken(SrslGrammarParser::EOL, i);
}


size_t SrslGrammarParser::ConstantBufferDeclarationContext::getRuleIndex() const {
  return SrslGrammarParser::RuleConstantBufferDeclaration;
}

void SrslGrammarParser::ConstantBufferDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SrslGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstantBufferDeclaration(this);
}

void SrslGrammarParser::ConstantBufferDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SrslGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstantBufferDeclaration(this);
}

SrslGrammarParser::ConstantBufferDeclarationContext* SrslGrammarParser::constantBufferDeclaration() {
  ConstantBufferDeclarationContext *_localctx = _tracker.createInstance<ConstantBufferDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 26, SrslGrammarParser::RuleConstantBufferDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(178);
    match(SrslGrammarParser::CONSTANT_BUFFER);
    setState(179);
    match(SrslGrammarParser::PARENO);
    setState(180);
    match(SrslGrammarParser::SLOT);
    setState(181);
    match(SrslGrammarParser::ASSIGN);
    setState(182);
    match(SrslGrammarParser::NUMBER);
    setState(183);
    match(SrslGrammarParser::PARENC);
    setState(184);
    match(SrslGrammarParser::VAR_NAME);
    setState(185);
    match(SrslGrammarParser::CBRACKO);
    setState(191);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 35184374186240) != 0) {
      setState(186);
      newVariable();
      setState(187);
      match(SrslGrammarParser::EOL);
      setState(193);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(194);
    match(SrslGrammarParser::CBRACKC);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ShaderInterfaceContext ------------------------------------------------------------------

SrslGrammarParser::ShaderInterfaceContext::ShaderInterfaceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SrslGrammarParser::ShaderInterfaceContext::VAR_NAME() {
  return getToken(SrslGrammarParser::VAR_NAME, 0);
}

tree::TerminalNode* SrslGrammarParser::ShaderInterfaceContext::CBRACKO() {
  return getToken(SrslGrammarParser::CBRACKO, 0);
}

tree::TerminalNode* SrslGrammarParser::ShaderInterfaceContext::CBRACKC() {
  return getToken(SrslGrammarParser::CBRACKC, 0);
}

tree::TerminalNode* SrslGrammarParser::ShaderInterfaceContext::SHADER_INPUT() {
  return getToken(SrslGrammarParser::SHADER_INPUT, 0);
}

tree::TerminalNode* SrslGrammarParser::ShaderInterfaceContext::SHADER_OUTPUT() {
  return getToken(SrslGrammarParser::SHADER_OUTPUT, 0);
}

std::vector<SrslGrammarParser::NewVariableContext *> SrslGrammarParser::ShaderInterfaceContext::newVariable() {
  return getRuleContexts<SrslGrammarParser::NewVariableContext>();
}

SrslGrammarParser::NewVariableContext* SrslGrammarParser::ShaderInterfaceContext::newVariable(size_t i) {
  return getRuleContext<SrslGrammarParser::NewVariableContext>(i);
}

std::vector<tree::TerminalNode *> SrslGrammarParser::ShaderInterfaceContext::EOL() {
  return getTokens(SrslGrammarParser::EOL);
}

tree::TerminalNode* SrslGrammarParser::ShaderInterfaceContext::EOL(size_t i) {
  return getToken(SrslGrammarParser::EOL, i);
}


size_t SrslGrammarParser::ShaderInterfaceContext::getRuleIndex() const {
  return SrslGrammarParser::RuleShaderInterface;
}

void SrslGrammarParser::ShaderInterfaceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SrslGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterShaderInterface(this);
}

void SrslGrammarParser::ShaderInterfaceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SrslGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitShaderInterface(this);
}

SrslGrammarParser::ShaderInterfaceContext* SrslGrammarParser::shaderInterface() {
  ShaderInterfaceContext *_localctx = _tracker.createInstance<ShaderInterfaceContext>(_ctx, getState());
  enterRule(_localctx, 28, SrslGrammarParser::RuleShaderInterface);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(196);
    _la = _input->LA(1);
    if (!(_la == SrslGrammarParser::SHADER_INPUT

    || _la == SrslGrammarParser::SHADER_OUTPUT)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(197);
    match(SrslGrammarParser::VAR_NAME);
    setState(198);
    match(SrslGrammarParser::CBRACKO);
    setState(204);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 35184374186240) != 0) {
      setState(199);
      newVariable();
      setState(200);
      match(SrslGrammarParser::EOL);
      setState(206);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(207);
    match(SrslGrammarParser::CBRACKC);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionDeclarationContext ------------------------------------------------------------------

SrslGrammarParser::FunctionDeclarationContext::FunctionDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SrslGrammarParser::FunctionDeclarationContext::VAR_NAME() {
  return getTokens(SrslGrammarParser::VAR_NAME);
}

tree::TerminalNode* SrslGrammarParser::FunctionDeclarationContext::VAR_NAME(size_t i) {
  return getToken(SrslGrammarParser::VAR_NAME, i);
}

tree::TerminalNode* SrslGrammarParser::FunctionDeclarationContext::PARENO() {
  return getToken(SrslGrammarParser::PARENO, 0);
}

tree::TerminalNode* SrslGrammarParser::FunctionDeclarationContext::PARENC() {
  return getToken(SrslGrammarParser::PARENC, 0);
}

tree::TerminalNode* SrslGrammarParser::FunctionDeclarationContext::TYPE() {
  return getToken(SrslGrammarParser::TYPE, 0);
}

SrslGrammarParser::ScopeContext* SrslGrammarParser::FunctionDeclarationContext::scope() {
  return getRuleContext<SrslGrammarParser::ScopeContext>(0);
}

tree::TerminalNode* SrslGrammarParser::FunctionDeclarationContext::EOL() {
  return getToken(SrslGrammarParser::EOL, 0);
}

std::vector<tree::TerminalNode *> SrslGrammarParser::FunctionDeclarationContext::CONST() {
  return getTokens(SrslGrammarParser::CONST);
}

tree::TerminalNode* SrslGrammarParser::FunctionDeclarationContext::CONST(size_t i) {
  return getToken(SrslGrammarParser::CONST, i);
}

std::vector<SrslGrammarParser::NewVariableContext *> SrslGrammarParser::FunctionDeclarationContext::newVariable() {
  return getRuleContexts<SrslGrammarParser::NewVariableContext>();
}

SrslGrammarParser::NewVariableContext* SrslGrammarParser::FunctionDeclarationContext::newVariable(size_t i) {
  return getRuleContext<SrslGrammarParser::NewVariableContext>(i);
}

tree::TerminalNode* SrslGrammarParser::FunctionDeclarationContext::COLON() {
  return getToken(SrslGrammarParser::COLON, 0);
}

std::vector<tree::TerminalNode *> SrslGrammarParser::FunctionDeclarationContext::COMMA() {
  return getTokens(SrslGrammarParser::COMMA);
}

tree::TerminalNode* SrslGrammarParser::FunctionDeclarationContext::COMMA(size_t i) {
  return getToken(SrslGrammarParser::COMMA, i);
}


size_t SrslGrammarParser::FunctionDeclarationContext::getRuleIndex() const {
  return SrslGrammarParser::RuleFunctionDeclaration;
}

void SrslGrammarParser::FunctionDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SrslGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionDeclaration(this);
}

void SrslGrammarParser::FunctionDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SrslGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionDeclaration(this);
}

SrslGrammarParser::FunctionDeclarationContext* SrslGrammarParser::functionDeclaration() {
  FunctionDeclarationContext *_localctx = _tracker.createInstance<FunctionDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 30, SrslGrammarParser::RuleFunctionDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(212);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SrslGrammarParser::CONST) {
      setState(209);
      match(SrslGrammarParser::CONST);
      setState(214);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(215);
    _la = _input->LA(1);
    if (!(_la == SrslGrammarParser::TYPE

    || _la == SrslGrammarParser::VAR_NAME)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(216);
    match(SrslGrammarParser::VAR_NAME);
    setState(217);
    match(SrslGrammarParser::PARENO);
    setState(226);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 35184374186240) != 0) {
      setState(218);
      newVariable();
      setState(223);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SrslGrammarParser::COMMA) {
        setState(219);
        match(SrslGrammarParser::COMMA);
        setState(220);
        newVariable();
        setState(225);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(228);
    match(SrslGrammarParser::PARENC);
    setState(231);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SrslGrammarParser::COLON) {
      setState(229);
      match(SrslGrammarParser::COLON);
      setState(230);
      match(SrslGrammarParser::VAR_NAME);
    }
    setState(235);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SrslGrammarParser::CBRACKO: {
        setState(233);
        scope();
        break;
      }

      case SrslGrammarParser::EOL: {
        setState(234);
        match(SrslGrammarParser::EOL);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionCallContext ------------------------------------------------------------------

SrslGrammarParser::FunctionCallContext::FunctionCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SrslGrammarParser::FunctionCallContext::VAR_NAME() {
  return getToken(SrslGrammarParser::VAR_NAME, 0);
}

tree::TerminalNode* SrslGrammarParser::FunctionCallContext::PARENO() {
  return getToken(SrslGrammarParser::PARENO, 0);
}

tree::TerminalNode* SrslGrammarParser::FunctionCallContext::PARENC() {
  return getToken(SrslGrammarParser::PARENC, 0);
}

std::vector<SrslGrammarParser::ExpressionContext *> SrslGrammarParser::FunctionCallContext::expression() {
  return getRuleContexts<SrslGrammarParser::ExpressionContext>();
}

SrslGrammarParser::ExpressionContext* SrslGrammarParser::FunctionCallContext::expression(size_t i) {
  return getRuleContext<SrslGrammarParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> SrslGrammarParser::FunctionCallContext::COMMA() {
  return getTokens(SrslGrammarParser::COMMA);
}

tree::TerminalNode* SrslGrammarParser::FunctionCallContext::COMMA(size_t i) {
  return getToken(SrslGrammarParser::COMMA, i);
}


size_t SrslGrammarParser::FunctionCallContext::getRuleIndex() const {
  return SrslGrammarParser::RuleFunctionCall;
}

void SrslGrammarParser::FunctionCallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SrslGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionCall(this);
}

void SrslGrammarParser::FunctionCallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SrslGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionCall(this);
}

SrslGrammarParser::FunctionCallContext* SrslGrammarParser::functionCall() {
  FunctionCallContext *_localctx = _tracker.createInstance<FunctionCallContext>(_ctx, getState());
  enterRule(_localctx, 32, SrslGrammarParser::RuleFunctionCall);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(237);
    match(SrslGrammarParser::VAR_NAME);
    setState(238);
    match(SrslGrammarParser::PARENO);
    setState(247);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 62148178870352) != 0) {
      setState(239);
      expression(0);
      setState(244);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SrslGrammarParser::COMMA) {
        setState(240);
        match(SrslGrammarParser::COMMA);
        setState(241);
        expression(0);
        setState(246);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(249);
    match(SrslGrammarParser::PARENC);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReturnStatementContext ------------------------------------------------------------------

SrslGrammarParser::ReturnStatementContext::ReturnStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SrslGrammarParser::ReturnStatementContext::RETURN() {
  return getToken(SrslGrammarParser::RETURN, 0);
}

SrslGrammarParser::ExpressionContext* SrslGrammarParser::ReturnStatementContext::expression() {
  return getRuleContext<SrslGrammarParser::ExpressionContext>(0);
}


size_t SrslGrammarParser::ReturnStatementContext::getRuleIndex() const {
  return SrslGrammarParser::RuleReturnStatement;
}

void SrslGrammarParser::ReturnStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SrslGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturnStatement(this);
}

void SrslGrammarParser::ReturnStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SrslGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturnStatement(this);
}

SrslGrammarParser::ReturnStatementContext* SrslGrammarParser::returnStatement() {
  ReturnStatementContext *_localctx = _tracker.createInstance<ReturnStatementContext>(_ctx, getState());
  enterRule(_localctx, 34, SrslGrammarParser::RuleReturnStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(251);
    match(SrslGrammarParser::RETURN);
    setState(253);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 62148178870352) != 0) {
      setState(252);
      expression(0);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ScopeContext ------------------------------------------------------------------

SrslGrammarParser::ScopeContext::ScopeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SrslGrammarParser::ScopeContext::CBRACKO() {
  return getToken(SrslGrammarParser::CBRACKO, 0);
}

tree::TerminalNode* SrslGrammarParser::ScopeContext::CBRACKC() {
  return getToken(SrslGrammarParser::CBRACKC, 0);
}

std::vector<SrslGrammarParser::StatementContext *> SrslGrammarParser::ScopeContext::statement() {
  return getRuleContexts<SrslGrammarParser::StatementContext>();
}

SrslGrammarParser::StatementContext* SrslGrammarParser::ScopeContext::statement(size_t i) {
  return getRuleContext<SrslGrammarParser::StatementContext>(i);
}


size_t SrslGrammarParser::ScopeContext::getRuleIndex() const {
  return SrslGrammarParser::RuleScope;
}

void SrslGrammarParser::ScopeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SrslGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterScope(this);
}

void SrslGrammarParser::ScopeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SrslGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitScope(this);
}

SrslGrammarParser::ScopeContext* SrslGrammarParser::scope() {
  ScopeContext *_localctx = _tracker.createInstance<ScopeContext>(_ctx, getState());
  enterRule(_localctx, 36, SrslGrammarParser::RuleScope);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(255);
    match(SrslGrammarParser::CBRACKO);
    setState(259);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 62285647695696) != 0) {
      setState(256);
      statement();
      setState(261);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(262);
    match(SrslGrammarParser::CBRACKC);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TestCaseContext ------------------------------------------------------------------

SrslGrammarParser::TestCaseContext::TestCaseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SrslGrammarParser::TestCaseContext::AT() {
  return getToken(SrslGrammarParser::AT, 0);
}

tree::TerminalNode* SrslGrammarParser::TestCaseContext::TEST() {
  return getToken(SrslGrammarParser::TEST, 0);
}

tree::TerminalNode* SrslGrammarParser::TestCaseContext::PARENO() {
  return getToken(SrslGrammarParser::PARENO, 0);
}

std::vector<tree::TerminalNode *> SrslGrammarParser::TestCaseContext::VAR_NAME() {
  return getTokens(SrslGrammarParser::VAR_NAME);
}

tree::TerminalNode* SrslGrammarParser::TestCaseContext::VAR_NAME(size_t i) {
  return getToken(SrslGrammarParser::VAR_NAME, i);
}

tree::TerminalNode* SrslGrammarParser::TestCaseContext::COMMA() {
  return getToken(SrslGrammarParser::COMMA, 0);
}

tree::TerminalNode* SrslGrammarParser::TestCaseContext::PARENC() {
  return getToken(SrslGrammarParser::PARENC, 0);
}

tree::TerminalNode* SrslGrammarParser::TestCaseContext::CBRACKO() {
  return getToken(SrslGrammarParser::CBRACKO, 0);
}

tree::TerminalNode* SrslGrammarParser::TestCaseContext::CBRACKC() {
  return getToken(SrslGrammarParser::CBRACKC, 0);
}

std::vector<SrslGrammarParser::StatementContext *> SrslGrammarParser::TestCaseContext::statement() {
  return getRuleContexts<SrslGrammarParser::StatementContext>();
}

SrslGrammarParser::StatementContext* SrslGrammarParser::TestCaseContext::statement(size_t i) {
  return getRuleContext<SrslGrammarParser::StatementContext>(i);
}

std::vector<SrslGrammarParser::TestAssertionContext *> SrslGrammarParser::TestCaseContext::testAssertion() {
  return getRuleContexts<SrslGrammarParser::TestAssertionContext>();
}

SrslGrammarParser::TestAssertionContext* SrslGrammarParser::TestCaseContext::testAssertion(size_t i) {
  return getRuleContext<SrslGrammarParser::TestAssertionContext>(i);
}


size_t SrslGrammarParser::TestCaseContext::getRuleIndex() const {
  return SrslGrammarParser::RuleTestCase;
}

void SrslGrammarParser::TestCaseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SrslGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTestCase(this);
}

void SrslGrammarParser::TestCaseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SrslGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTestCase(this);
}

SrslGrammarParser::TestCaseContext* SrslGrammarParser::testCase() {
  TestCaseContext *_localctx = _tracker.createInstance<TestCaseContext>(_ctx, getState());
  enterRule(_localctx, 38, SrslGrammarParser::RuleTestCase);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(264);
    match(SrslGrammarParser::AT);
    setState(265);
    match(SrslGrammarParser::TEST);
    setState(266);
    match(SrslGrammarParser::PARENO);
    setState(267);
    match(SrslGrammarParser::VAR_NAME);
    setState(268);
    match(SrslGrammarParser::COMMA);
    setState(269);
    match(SrslGrammarParser::VAR_NAME);
    setState(270);
    match(SrslGrammarParser::PARENC);
    setState(271);
    match(SrslGrammarParser::CBRACKO);
    setState(276);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 62285648744272) != 0) {
      setState(274);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case SrslGrammarParser::CBRACKO:
        case SrslGrammarParser::PARENO:
        case SrslGrammarParser::CONST:
        case SrslGrammarParser::FOR:
        case SrslGrammarParser::WHILE:
        case SrslGrammarParser::IF:
        case SrslGrammarParser::RETURN:
        case SrslGrammarParser::CONTROL_FLOW:
        case SrslGrammarParser::STRUCT:
        case SrslGrammarParser::SHADER_INPUT:
        case SrslGrammarParser::SHADER_OUTPUT:
        case SrslGrammarParser::TYPE:
        case SrslGrammarParser::TEXTURE_TYPES:
        case SrslGrammarParser::SAMPLER_TYPE:
        case SrslGrammarParser::CONSTANT_BUFFER:
        case SrslGrammarParser::FLOATING_POINT:
        case SrslGrammarParser::NUMBER:
        case SrslGrammarParser::AT:
        case SrslGrammarParser::MINUS:
        case SrslGrammarParser::CREMENT:
        case SrslGrammarParser::NOT:
        case SrslGrammarParser::VAR_NAME: {
          setState(272);
          statement();
          break;
        }

        case SrslGrammarParser::TEST_ASSERT_TYPE: {
          setState(273);
          testAssertion();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(278);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(279);
    match(SrslGrammarParser::CBRACKC);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TestAssertionContext ------------------------------------------------------------------

SrslGrammarParser::TestAssertionContext::TestAssertionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SrslGrammarParser::TestAssertionContext::TEST_ASSERT_TYPE() {
  return getToken(SrslGrammarParser::TEST_ASSERT_TYPE, 0);
}

tree::TerminalNode* SrslGrammarParser::TestAssertionContext::PARENO() {
  return getToken(SrslGrammarParser::PARENO, 0);
}

std::vector<SrslGrammarParser::ExpressionContext *> SrslGrammarParser::TestAssertionContext::expression() {
  return getRuleContexts<SrslGrammarParser::ExpressionContext>();
}

SrslGrammarParser::ExpressionContext* SrslGrammarParser::TestAssertionContext::expression(size_t i) {
  return getRuleContext<SrslGrammarParser::ExpressionContext>(i);
}

tree::TerminalNode* SrslGrammarParser::TestAssertionContext::COMMA() {
  return getToken(SrslGrammarParser::COMMA, 0);
}

tree::TerminalNode* SrslGrammarParser::TestAssertionContext::PARENC() {
  return getToken(SrslGrammarParser::PARENC, 0);
}

tree::TerminalNode* SrslGrammarParser::TestAssertionContext::EOL() {
  return getToken(SrslGrammarParser::EOL, 0);
}


size_t SrslGrammarParser::TestAssertionContext::getRuleIndex() const {
  return SrslGrammarParser::RuleTestAssertion;
}

void SrslGrammarParser::TestAssertionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SrslGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTestAssertion(this);
}

void SrslGrammarParser::TestAssertionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SrslGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTestAssertion(this);
}

SrslGrammarParser::TestAssertionContext* SrslGrammarParser::testAssertion() {
  TestAssertionContext *_localctx = _tracker.createInstance<TestAssertionContext>(_ctx, getState());
  enterRule(_localctx, 40, SrslGrammarParser::RuleTestAssertion);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(281);
    match(SrslGrammarParser::TEST_ASSERT_TYPE);
    setState(282);
    match(SrslGrammarParser::PARENO);
    setState(283);
    expression(0);
    setState(284);
    match(SrslGrammarParser::COMMA);
    setState(285);
    expression(0);
    setState(286);
    match(SrslGrammarParser::PARENC);
    setState(287);
    match(SrslGrammarParser::EOL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StructDeclarationContext ------------------------------------------------------------------

SrslGrammarParser::StructDeclarationContext::StructDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SrslGrammarParser::StructDeclarationContext::STRUCT() {
  return getToken(SrslGrammarParser::STRUCT, 0);
}

tree::TerminalNode* SrslGrammarParser::StructDeclarationContext::VAR_NAME() {
  return getToken(SrslGrammarParser::VAR_NAME, 0);
}

tree::TerminalNode* SrslGrammarParser::StructDeclarationContext::CBRACKO() {
  return getToken(SrslGrammarParser::CBRACKO, 0);
}

tree::TerminalNode* SrslGrammarParser::StructDeclarationContext::CBRACKC() {
  return getToken(SrslGrammarParser::CBRACKC, 0);
}

std::vector<SrslGrammarParser::NewVariableContext *> SrslGrammarParser::StructDeclarationContext::newVariable() {
  return getRuleContexts<SrslGrammarParser::NewVariableContext>();
}

SrslGrammarParser::NewVariableContext* SrslGrammarParser::StructDeclarationContext::newVariable(size_t i) {
  return getRuleContext<SrslGrammarParser::NewVariableContext>(i);
}

std::vector<tree::TerminalNode *> SrslGrammarParser::StructDeclarationContext::EOL() {
  return getTokens(SrslGrammarParser::EOL);
}

tree::TerminalNode* SrslGrammarParser::StructDeclarationContext::EOL(size_t i) {
  return getToken(SrslGrammarParser::EOL, i);
}


size_t SrslGrammarParser::StructDeclarationContext::getRuleIndex() const {
  return SrslGrammarParser::RuleStructDeclaration;
}

void SrslGrammarParser::StructDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SrslGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStructDeclaration(this);
}

void SrslGrammarParser::StructDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SrslGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStructDeclaration(this);
}

SrslGrammarParser::StructDeclarationContext* SrslGrammarParser::structDeclaration() {
  StructDeclarationContext *_localctx = _tracker.createInstance<StructDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 42, SrslGrammarParser::RuleStructDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(289);
    match(SrslGrammarParser::STRUCT);
    setState(290);
    match(SrslGrammarParser::VAR_NAME);
    setState(291);
    match(SrslGrammarParser::CBRACKO);
    setState(297);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 35184374186240) != 0) {
      setState(292);
      newVariable();
      setState(293);
      match(SrslGrammarParser::EOL);
      setState(299);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(300);
    match(SrslGrammarParser::CBRACKC);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentContext ------------------------------------------------------------------

SrslGrammarParser::AssignmentContext::AssignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SrslGrammarParser::LvalueContext* SrslGrammarParser::AssignmentContext::lvalue() {
  return getRuleContext<SrslGrammarParser::LvalueContext>(0);
}

tree::TerminalNode* SrslGrammarParser::AssignmentContext::ASSIGN() {
  return getToken(SrslGrammarParser::ASSIGN, 0);
}

SrslGrammarParser::ExpressionContext* SrslGrammarParser::AssignmentContext::expression() {
  return getRuleContext<SrslGrammarParser::ExpressionContext>(0);
}


size_t SrslGrammarParser::AssignmentContext::getRuleIndex() const {
  return SrslGrammarParser::RuleAssignment;
}

void SrslGrammarParser::AssignmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SrslGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignment(this);
}

void SrslGrammarParser::AssignmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SrslGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignment(this);
}

SrslGrammarParser::AssignmentContext* SrslGrammarParser::assignment() {
  AssignmentContext *_localctx = _tracker.createInstance<AssignmentContext>(_ctx, getState());
  enterRule(_localctx, 44, SrslGrammarParser::RuleAssignment);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(302);
    lvalue();
    setState(303);
    match(SrslGrammarParser::ASSIGN);
    setState(304);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

SrslGrammarParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SrslGrammarParser::ExpressionContext::PARENO() {
  return getToken(SrslGrammarParser::PARENO, 0);
}

std::vector<SrslGrammarParser::ExpressionContext *> SrslGrammarParser::ExpressionContext::expression() {
  return getRuleContexts<SrslGrammarParser::ExpressionContext>();
}

SrslGrammarParser::ExpressionContext* SrslGrammarParser::ExpressionContext::expression(size_t i) {
  return getRuleContext<SrslGrammarParser::ExpressionContext>(i);
}

tree::TerminalNode* SrslGrammarParser::ExpressionContext::PARENC() {
  return getToken(SrslGrammarParser::PARENC, 0);
}

tree::TerminalNode* SrslGrammarParser::ExpressionContext::CREMENT() {
  return getToken(SrslGrammarParser::CREMENT, 0);
}

tree::TerminalNode* SrslGrammarParser::ExpressionContext::NOT() {
  return getToken(SrslGrammarParser::NOT, 0);
}

tree::TerminalNode* SrslGrammarParser::ExpressionContext::MINUS() {
  return getToken(SrslGrammarParser::MINUS, 0);
}

SrslGrammarParser::RvalueContext* SrslGrammarParser::ExpressionContext::rvalue() {
  return getRuleContext<SrslGrammarParser::RvalueContext>(0);
}

tree::TerminalNode* SrslGrammarParser::ExpressionContext::MULTIPLY() {
  return getToken(SrslGrammarParser::MULTIPLY, 0);
}

tree::TerminalNode* SrslGrammarParser::ExpressionContext::DIVIDE() {
  return getToken(SrslGrammarParser::DIVIDE, 0);
}

tree::TerminalNode* SrslGrammarParser::ExpressionContext::PLUS() {
  return getToken(SrslGrammarParser::PLUS, 0);
}

tree::TerminalNode* SrslGrammarParser::ExpressionContext::OPERATION() {
  return getToken(SrslGrammarParser::OPERATION, 0);
}


size_t SrslGrammarParser::ExpressionContext::getRuleIndex() const {
  return SrslGrammarParser::RuleExpression;
}

void SrslGrammarParser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SrslGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void SrslGrammarParser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SrslGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}


SrslGrammarParser::ExpressionContext* SrslGrammarParser::expression() {
   return expression(0);
}

SrslGrammarParser::ExpressionContext* SrslGrammarParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  SrslGrammarParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  SrslGrammarParser::ExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 46;
  enterRecursionRule(_localctx, 46, SrslGrammarParser::RuleExpression, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(318);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SrslGrammarParser::PARENO: {
        setState(307);
        match(SrslGrammarParser::PARENO);
        setState(308);
        expression(0);
        setState(309);
        match(SrslGrammarParser::PARENC);
        break;
      }

      case SrslGrammarParser::CREMENT: {
        setState(311);
        match(SrslGrammarParser::CREMENT);
        setState(312);
        expression(5);
        break;
      }

      case SrslGrammarParser::NOT: {
        setState(313);
        match(SrslGrammarParser::NOT);
        setState(314);
        expression(3);
        break;
      }

      case SrslGrammarParser::MINUS: {
        setState(315);
        match(SrslGrammarParser::MINUS);
        setState(316);
        expression(2);
        break;
      }

      case SrslGrammarParser::CBRACKO:
      case SrslGrammarParser::TYPE:
      case SrslGrammarParser::FLOATING_POINT:
      case SrslGrammarParser::NUMBER:
      case SrslGrammarParser::VAR_NAME: {
        setState(317);
        rvalue();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(333);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(331);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(320);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(321);
          _la = _input->LA(1);
          if (!(_la == SrslGrammarParser::MULTIPLY

          || _la == SrslGrammarParser::DIVIDE)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(322);
          expression(10);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(323);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(324);
          _la = _input->LA(1);
          if (!(_la == SrslGrammarParser::PLUS

          || _la == SrslGrammarParser::MINUS)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(325);
          expression(9);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(326);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(327);
          match(SrslGrammarParser::OPERATION);
          setState(328);
          expression(8);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(329);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(330);
          match(SrslGrammarParser::CREMENT);
          break;
        }

        default:
          break;
        } 
      }
      setState(335);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- InitializerListContext ------------------------------------------------------------------

SrslGrammarParser::InitializerListContext::InitializerListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SrslGrammarParser::InitializerListContext::CBRACKO() {
  return getToken(SrslGrammarParser::CBRACKO, 0);
}

tree::TerminalNode* SrslGrammarParser::InitializerListContext::CBRACKC() {
  return getToken(SrslGrammarParser::CBRACKC, 0);
}

std::vector<SrslGrammarParser::ExpressionContext *> SrslGrammarParser::InitializerListContext::expression() {
  return getRuleContexts<SrslGrammarParser::ExpressionContext>();
}

SrslGrammarParser::ExpressionContext* SrslGrammarParser::InitializerListContext::expression(size_t i) {
  return getRuleContext<SrslGrammarParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> SrslGrammarParser::InitializerListContext::COMMA() {
  return getTokens(SrslGrammarParser::COMMA);
}

tree::TerminalNode* SrslGrammarParser::InitializerListContext::COMMA(size_t i) {
  return getToken(SrslGrammarParser::COMMA, i);
}


size_t SrslGrammarParser::InitializerListContext::getRuleIndex() const {
  return SrslGrammarParser::RuleInitializerList;
}

void SrslGrammarParser::InitializerListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SrslGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInitializerList(this);
}

void SrslGrammarParser::InitializerListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SrslGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInitializerList(this);
}

SrslGrammarParser::InitializerListContext* SrslGrammarParser::initializerList() {
  InitializerListContext *_localctx = _tracker.createInstance<InitializerListContext>(_ctx, getState());
  enterRule(_localctx, 48, SrslGrammarParser::RuleInitializerList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(336);
    match(SrslGrammarParser::CBRACKO);
    setState(345);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 62148178870352) != 0) {
      setState(337);
      expression(0);
      setState(342);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SrslGrammarParser::COMMA) {
        setState(338);
        match(SrslGrammarParser::COMMA);
        setState(339);
        expression(0);
        setState(344);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(347);
    match(SrslGrammarParser::CBRACKC);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LvalueContext ------------------------------------------------------------------

SrslGrammarParser::LvalueContext::LvalueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SrslGrammarParser::NewVariableContext* SrslGrammarParser::LvalueContext::newVariable() {
  return getRuleContext<SrslGrammarParser::NewVariableContext>(0);
}

SrslGrammarParser::VariableContext* SrslGrammarParser::LvalueContext::variable() {
  return getRuleContext<SrslGrammarParser::VariableContext>(0);
}

SrslGrammarParser::MemberAccessContext* SrslGrammarParser::LvalueContext::memberAccess() {
  return getRuleContext<SrslGrammarParser::MemberAccessContext>(0);
}


size_t SrslGrammarParser::LvalueContext::getRuleIndex() const {
  return SrslGrammarParser::RuleLvalue;
}

void SrslGrammarParser::LvalueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SrslGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLvalue(this);
}

void SrslGrammarParser::LvalueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SrslGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLvalue(this);
}

SrslGrammarParser::LvalueContext* SrslGrammarParser::lvalue() {
  LvalueContext *_localctx = _tracker.createInstance<LvalueContext>(_ctx, getState());
  enterRule(_localctx, 50, SrslGrammarParser::RuleLvalue);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(352);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(349);
      newVariable();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(350);
      variable();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(351);
      memberAccess();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RvalueContext ------------------------------------------------------------------

SrslGrammarParser::RvalueContext::RvalueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SrslGrammarParser::VariableContext* SrslGrammarParser::RvalueContext::variable() {
  return getRuleContext<SrslGrammarParser::VariableContext>(0);
}

SrslGrammarParser::ConstantContext* SrslGrammarParser::RvalueContext::constant() {
  return getRuleContext<SrslGrammarParser::ConstantContext>(0);
}

SrslGrammarParser::FunctionCallContext* SrslGrammarParser::RvalueContext::functionCall() {
  return getRuleContext<SrslGrammarParser::FunctionCallContext>(0);
}

SrslGrammarParser::TypeConstructorContext* SrslGrammarParser::RvalueContext::typeConstructor() {
  return getRuleContext<SrslGrammarParser::TypeConstructorContext>(0);
}

SrslGrammarParser::MemberAccessContext* SrslGrammarParser::RvalueContext::memberAccess() {
  return getRuleContext<SrslGrammarParser::MemberAccessContext>(0);
}

SrslGrammarParser::InitializerListContext* SrslGrammarParser::RvalueContext::initializerList() {
  return getRuleContext<SrslGrammarParser::InitializerListContext>(0);
}


size_t SrslGrammarParser::RvalueContext::getRuleIndex() const {
  return SrslGrammarParser::RuleRvalue;
}

void SrslGrammarParser::RvalueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SrslGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRvalue(this);
}

void SrslGrammarParser::RvalueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SrslGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRvalue(this);
}

SrslGrammarParser::RvalueContext* SrslGrammarParser::rvalue() {
  RvalueContext *_localctx = _tracker.createInstance<RvalueContext>(_ctx, getState());
  enterRule(_localctx, 52, SrslGrammarParser::RuleRvalue);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(360);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(354);
      variable();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(355);
      constant();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(356);
      functionCall();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(357);
      typeConstructor();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(358);
      memberAccess();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(359);
      initializerList();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MemberAccessContext ------------------------------------------------------------------

SrslGrammarParser::MemberAccessContext::MemberAccessContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SrslGrammarParser::MemberAccessContext::DOT() {
  return getToken(SrslGrammarParser::DOT, 0);
}

std::vector<SrslGrammarParser::VariableContext *> SrslGrammarParser::MemberAccessContext::variable() {
  return getRuleContexts<SrslGrammarParser::VariableContext>();
}

SrslGrammarParser::VariableContext* SrslGrammarParser::MemberAccessContext::variable(size_t i) {
  return getRuleContext<SrslGrammarParser::VariableContext>(i);
}

SrslGrammarParser::FunctionCallContext* SrslGrammarParser::MemberAccessContext::functionCall() {
  return getRuleContext<SrslGrammarParser::FunctionCallContext>(0);
}

SrslGrammarParser::MemberAccessContext* SrslGrammarParser::MemberAccessContext::memberAccess() {
  return getRuleContext<SrslGrammarParser::MemberAccessContext>(0);
}


size_t SrslGrammarParser::MemberAccessContext::getRuleIndex() const {
  return SrslGrammarParser::RuleMemberAccess;
}

void SrslGrammarParser::MemberAccessContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SrslGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMemberAccess(this);
}

void SrslGrammarParser::MemberAccessContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SrslGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMemberAccess(this);
}

SrslGrammarParser::MemberAccessContext* SrslGrammarParser::memberAccess() {
  MemberAccessContext *_localctx = _tracker.createInstance<MemberAccessContext>(_ctx, getState());
  enterRule(_localctx, 54, SrslGrammarParser::RuleMemberAccess);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(364);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx)) {
    case 1: {
      setState(362);
      variable();
      break;
    }

    case 2: {
      setState(363);
      functionCall();
      break;
    }

    default:
      break;
    }
    setState(366);
    match(SrslGrammarParser::DOT);
    setState(369);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx)) {
    case 1: {
      setState(367);
      variable();
      break;
    }

    case 2: {
      setState(368);
      memberAccess();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NewVariableContext ------------------------------------------------------------------

SrslGrammarParser::NewVariableContext::NewVariableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SrslGrammarParser::NewVariableContext::VAR_NAME() {
  return getTokens(SrslGrammarParser::VAR_NAME);
}

tree::TerminalNode* SrslGrammarParser::NewVariableContext::VAR_NAME(size_t i) {
  return getToken(SrslGrammarParser::VAR_NAME, i);
}

tree::TerminalNode* SrslGrammarParser::NewVariableContext::TYPE() {
  return getToken(SrslGrammarParser::TYPE, 0);
}

std::vector<tree::TerminalNode *> SrslGrammarParser::NewVariableContext::CONST() {
  return getTokens(SrslGrammarParser::CONST);
}

tree::TerminalNode* SrslGrammarParser::NewVariableContext::CONST(size_t i) {
  return getToken(SrslGrammarParser::CONST, i);
}

std::vector<tree::TerminalNode *> SrslGrammarParser::NewVariableContext::SBRACKO() {
  return getTokens(SrslGrammarParser::SBRACKO);
}

tree::TerminalNode* SrslGrammarParser::NewVariableContext::SBRACKO(size_t i) {
  return getToken(SrslGrammarParser::SBRACKO, i);
}

std::vector<tree::TerminalNode *> SrslGrammarParser::NewVariableContext::NUMBER() {
  return getTokens(SrslGrammarParser::NUMBER);
}

tree::TerminalNode* SrslGrammarParser::NewVariableContext::NUMBER(size_t i) {
  return getToken(SrslGrammarParser::NUMBER, i);
}

std::vector<tree::TerminalNode *> SrslGrammarParser::NewVariableContext::SBRACKC() {
  return getTokens(SrslGrammarParser::SBRACKC);
}

tree::TerminalNode* SrslGrammarParser::NewVariableContext::SBRACKC(size_t i) {
  return getToken(SrslGrammarParser::SBRACKC, i);
}

tree::TerminalNode* SrslGrammarParser::NewVariableContext::COLON() {
  return getToken(SrslGrammarParser::COLON, 0);
}


size_t SrslGrammarParser::NewVariableContext::getRuleIndex() const {
  return SrslGrammarParser::RuleNewVariable;
}

void SrslGrammarParser::NewVariableContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SrslGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNewVariable(this);
}

void SrslGrammarParser::NewVariableContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SrslGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNewVariable(this);
}

SrslGrammarParser::NewVariableContext* SrslGrammarParser::newVariable() {
  NewVariableContext *_localctx = _tracker.createInstance<NewVariableContext>(_ctx, getState());
  enterRule(_localctx, 56, SrslGrammarParser::RuleNewVariable);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(374);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SrslGrammarParser::CONST) {
      setState(371);
      match(SrslGrammarParser::CONST);
      setState(376);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(377);
    _la = _input->LA(1);
    if (!(_la == SrslGrammarParser::TYPE

    || _la == SrslGrammarParser::VAR_NAME)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(378);
    match(SrslGrammarParser::VAR_NAME);
    setState(384);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SrslGrammarParser::SBRACKO) {
      setState(379);
      match(SrslGrammarParser::SBRACKO);
      setState(380);
      match(SrslGrammarParser::NUMBER);
      setState(381);
      match(SrslGrammarParser::SBRACKC);
      setState(386);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(389);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SrslGrammarParser::COLON) {
      setState(387);
      match(SrslGrammarParser::COLON);
      setState(388);
      match(SrslGrammarParser::VAR_NAME);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableContext ------------------------------------------------------------------

SrslGrammarParser::VariableContext::VariableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SrslGrammarParser::VariableContext::VAR_NAME() {
  return getToken(SrslGrammarParser::VAR_NAME, 0);
}

std::vector<tree::TerminalNode *> SrslGrammarParser::VariableContext::SBRACKO() {
  return getTokens(SrslGrammarParser::SBRACKO);
}

tree::TerminalNode* SrslGrammarParser::VariableContext::SBRACKO(size_t i) {
  return getToken(SrslGrammarParser::SBRACKO, i);
}

std::vector<SrslGrammarParser::ExpressionContext *> SrslGrammarParser::VariableContext::expression() {
  return getRuleContexts<SrslGrammarParser::ExpressionContext>();
}

SrslGrammarParser::ExpressionContext* SrslGrammarParser::VariableContext::expression(size_t i) {
  return getRuleContext<SrslGrammarParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> SrslGrammarParser::VariableContext::SBRACKC() {
  return getTokens(SrslGrammarParser::SBRACKC);
}

tree::TerminalNode* SrslGrammarParser::VariableContext::SBRACKC(size_t i) {
  return getToken(SrslGrammarParser::SBRACKC, i);
}


size_t SrslGrammarParser::VariableContext::getRuleIndex() const {
  return SrslGrammarParser::RuleVariable;
}

void SrslGrammarParser::VariableContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SrslGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariable(this);
}

void SrslGrammarParser::VariableContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SrslGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariable(this);
}

SrslGrammarParser::VariableContext* SrslGrammarParser::variable() {
  VariableContext *_localctx = _tracker.createInstance<VariableContext>(_ctx, getState());
  enterRule(_localctx, 58, SrslGrammarParser::RuleVariable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(391);
    match(SrslGrammarParser::VAR_NAME);
    setState(398);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(392);
        match(SrslGrammarParser::SBRACKO);
        setState(393);
        expression(0);
        setState(394);
        match(SrslGrammarParser::SBRACKC); 
      }
      setState(400);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstantContext ------------------------------------------------------------------

SrslGrammarParser::ConstantContext::ConstantContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SrslGrammarParser::ConstantContext::NUMBER() {
  return getToken(SrslGrammarParser::NUMBER, 0);
}

tree::TerminalNode* SrslGrammarParser::ConstantContext::FLOATING_POINT() {
  return getToken(SrslGrammarParser::FLOATING_POINT, 0);
}


size_t SrslGrammarParser::ConstantContext::getRuleIndex() const {
  return SrslGrammarParser::RuleConstant;
}

void SrslGrammarParser::ConstantContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SrslGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstant(this);
}

void SrslGrammarParser::ConstantContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SrslGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstant(this);
}

SrslGrammarParser::ConstantContext* SrslGrammarParser::constant() {
  ConstantContext *_localctx = _tracker.createInstance<ConstantContext>(_ctx, getState());
  enterRule(_localctx, 60, SrslGrammarParser::RuleConstant);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(401);
    _la = _input->LA(1);
    if (!(_la == SrslGrammarParser::FLOATING_POINT

    || _la == SrslGrammarParser::NUMBER)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ControlFlowContext ------------------------------------------------------------------

SrslGrammarParser::ControlFlowContext::ControlFlowContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SrslGrammarParser::ControlFlowContext::CONTROL_FLOW() {
  return getToken(SrslGrammarParser::CONTROL_FLOW, 0);
}


size_t SrslGrammarParser::ControlFlowContext::getRuleIndex() const {
  return SrslGrammarParser::RuleControlFlow;
}

void SrslGrammarParser::ControlFlowContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SrslGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterControlFlow(this);
}

void SrslGrammarParser::ControlFlowContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SrslGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitControlFlow(this);
}

SrslGrammarParser::ControlFlowContext* SrslGrammarParser::controlFlow() {
  ControlFlowContext *_localctx = _tracker.createInstance<ControlFlowContext>(_ctx, getState());
  enterRule(_localctx, 62, SrslGrammarParser::RuleControlFlow);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(403);
    match(SrslGrammarParser::CONTROL_FLOW);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeConstructorContext ------------------------------------------------------------------

SrslGrammarParser::TypeConstructorContext::TypeConstructorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SrslGrammarParser::TypeConstructorContext::TYPE() {
  return getToken(SrslGrammarParser::TYPE, 0);
}

tree::TerminalNode* SrslGrammarParser::TypeConstructorContext::PARENO() {
  return getToken(SrslGrammarParser::PARENO, 0);
}

std::vector<SrslGrammarParser::ExpressionContext *> SrslGrammarParser::TypeConstructorContext::expression() {
  return getRuleContexts<SrslGrammarParser::ExpressionContext>();
}

SrslGrammarParser::ExpressionContext* SrslGrammarParser::TypeConstructorContext::expression(size_t i) {
  return getRuleContext<SrslGrammarParser::ExpressionContext>(i);
}

tree::TerminalNode* SrslGrammarParser::TypeConstructorContext::PARENC() {
  return getToken(SrslGrammarParser::PARENC, 0);
}

std::vector<tree::TerminalNode *> SrslGrammarParser::TypeConstructorContext::COMMA() {
  return getTokens(SrslGrammarParser::COMMA);
}

tree::TerminalNode* SrslGrammarParser::TypeConstructorContext::COMMA(size_t i) {
  return getToken(SrslGrammarParser::COMMA, i);
}


size_t SrslGrammarParser::TypeConstructorContext::getRuleIndex() const {
  return SrslGrammarParser::RuleTypeConstructor;
}

void SrslGrammarParser::TypeConstructorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SrslGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeConstructor(this);
}

void SrslGrammarParser::TypeConstructorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SrslGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeConstructor(this);
}

SrslGrammarParser::TypeConstructorContext* SrslGrammarParser::typeConstructor() {
  TypeConstructorContext *_localctx = _tracker.createInstance<TypeConstructorContext>(_ctx, getState());
  enterRule(_localctx, 64, SrslGrammarParser::RuleTypeConstructor);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(405);
    match(SrslGrammarParser::TYPE);
    setState(406);
    match(SrslGrammarParser::PARENO);
    setState(407);
    expression(0);
    setState(412);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SrslGrammarParser::COMMA) {
      setState(408);
      match(SrslGrammarParser::COMMA);
      setState(409);
      expression(0);
      setState(414);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(415);
    match(SrslGrammarParser::PARENC);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool SrslGrammarParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 23: return expressionSempred(antlrcpp::downCast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool SrslGrammarParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 9);
    case 1: return precpred(_ctx, 8);
    case 2: return precpred(_ctx, 7);
    case 3: return precpred(_ctx, 4);

  default:
    break;
  }
  return true;
}

void SrslGrammarParser::initialize() {
  ::antlr4::internal::call_once(srslgrammarParserOnceFlag, srslgrammarParserInitialize);
}
