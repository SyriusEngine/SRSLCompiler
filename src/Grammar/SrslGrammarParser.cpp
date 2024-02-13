
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
      "functionCall", "returnStatement", "scope", "structDeclaration", "testCase", 
      "assignment", "expression", "initializerList", "lvalue", "rvalue", 
      "memberAccess", "newVariable", "variable", "constant", "controlFlow", 
      "typeConstructor"
    },
    std::vector<std::string>{
      "", "", "'['", "']'", "'{'", "'}'", "'('", "')'", "'const'", "'for'", 
      "'while'", "'if'", "'else'", "'else if'", "'return'", "", "'struct'", 
      "'Input'", "'Output'", "'test'", "", "", "'Sampler'", "'ConstantBuffer'", 
      "'slot'", "", "", "'ShaderType = '", "", "';'", "','", "':'", "", 
      "", "'='", "'.'", "'@'", "'+'", "'-'", "'*'", "'/'", "", "", "'!'"
    },
    std::vector<std::string>{
      "", "WS", "SBRACKO", "SBRACKC", "CBRACKO", "CBRACKC", "PARENO", "PARENC", 
      "CONST", "FOR", "WHILE", "IF", "ELSE", "ELSEIF", "RETURN", "CONTROL_FLOW", 
      "STRUCT", "SHADER_INPUT", "SHADER_OUTPUT", "TEST", "TYPE", "TEXTURE_TYPES", 
      "SAMPLER_TYPE", "CONSTANT_BUFFER", "SLOT", "COMMENT", "MCOMMENT", 
      "SHADER_TYPE_LIT", "SHADER_TYPE", "EOL", "COMMA", "COLON", "FLOATING_POINT", 
      "NUMBER", "ASSIGN", "DOT", "AT", "PLUS", "MINUS", "MULTIPLY", "DIVIDE", 
      "OPERATION", "CREMENT", "NOT", "VAR_NAME"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,44,412,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,1,0,1,0,1,0,1,0,5,0,69,8,0,10,0,12,0,
  	72,9,0,1,1,1,1,1,1,1,1,1,2,1,2,1,3,1,3,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,
  	4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,
  	1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,3,4,119,8,4,1,5,1,5,1,
  	5,1,5,1,5,1,5,1,5,1,5,1,5,1,6,1,6,1,6,1,6,1,6,1,6,1,7,1,7,1,7,1,7,1,7,
  	1,7,3,7,142,8,7,1,8,1,8,3,8,146,8,8,1,9,1,9,1,9,1,9,1,9,1,9,1,9,3,9,155,
  	8,9,1,10,1,10,1,10,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,12,1,12,
  	1,12,1,12,1,12,1,12,1,12,1,12,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,
  	1,13,1,13,1,13,5,13,187,8,13,10,13,12,13,190,9,13,1,13,1,13,1,14,1,14,
  	1,14,1,14,1,14,1,14,5,14,200,8,14,10,14,12,14,203,9,14,1,14,1,14,1,15,
  	5,15,208,8,15,10,15,12,15,211,9,15,1,15,5,15,214,8,15,10,15,12,15,217,
  	9,15,1,15,1,15,1,15,1,15,1,15,1,15,5,15,225,8,15,10,15,12,15,228,9,15,
  	3,15,230,8,15,1,15,1,15,1,15,3,15,235,8,15,1,15,1,15,3,15,239,8,15,1,
  	16,1,16,1,16,1,16,1,16,5,16,246,8,16,10,16,12,16,249,9,16,3,16,251,8,
  	16,1,16,1,16,1,17,1,17,1,17,1,18,1,18,5,18,260,8,18,10,18,12,18,263,9,
  	18,1,18,1,18,1,19,1,19,1,19,1,19,1,19,1,19,5,19,273,8,19,10,19,12,19,
  	276,9,19,1,19,1,19,1,20,1,20,1,20,1,20,1,20,1,20,1,20,5,20,287,8,20,10,
  	20,12,20,290,9,20,1,20,1,20,1,20,1,20,1,20,1,21,1,21,1,21,1,21,1,22,1,
  	22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,3,22,313,8,22,1,
  	22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,5,22,326,8,22,10,
  	22,12,22,329,9,22,1,23,1,23,1,23,1,23,5,23,335,8,23,10,23,12,23,338,9,
  	23,3,23,340,8,23,1,23,1,23,1,24,1,24,1,24,3,24,347,8,24,1,25,1,25,1,25,
  	1,25,1,25,1,25,3,25,355,8,25,1,26,1,26,3,26,359,8,26,1,26,1,26,1,26,3,
  	26,364,8,26,1,27,5,27,367,8,27,10,27,12,27,370,9,27,1,27,1,27,1,27,1,
  	27,1,27,5,27,377,8,27,10,27,12,27,380,9,27,1,27,1,27,3,27,384,8,27,1,
  	28,1,28,1,28,1,28,1,28,5,28,391,8,28,10,28,12,28,394,9,28,1,29,1,29,1,
  	30,1,30,1,31,1,31,1,31,1,31,1,31,5,31,405,8,31,10,31,12,31,408,9,31,1,
  	31,1,31,1,31,0,1,44,32,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,
  	34,36,38,40,42,44,46,48,50,52,54,56,58,60,62,0,5,1,0,17,18,2,0,20,20,
  	44,44,1,0,39,40,1,0,37,38,1,0,32,33,436,0,64,1,0,0,0,2,73,1,0,0,0,4,77,
  	1,0,0,0,6,79,1,0,0,0,8,118,1,0,0,0,10,120,1,0,0,0,12,129,1,0,0,0,14,135,
  	1,0,0,0,16,145,1,0,0,0,18,147,1,0,0,0,20,156,1,0,0,0,22,159,1,0,0,0,24,
  	167,1,0,0,0,26,175,1,0,0,0,28,193,1,0,0,0,30,209,1,0,0,0,32,240,1,0,0,
  	0,34,254,1,0,0,0,36,257,1,0,0,0,38,266,1,0,0,0,40,279,1,0,0,0,42,296,
  	1,0,0,0,44,312,1,0,0,0,46,330,1,0,0,0,48,346,1,0,0,0,50,354,1,0,0,0,52,
  	358,1,0,0,0,54,368,1,0,0,0,56,385,1,0,0,0,58,395,1,0,0,0,60,397,1,0,0,
  	0,62,399,1,0,0,0,64,70,3,2,1,0,65,69,3,4,2,0,66,69,3,6,3,0,67,69,3,8,
  	4,0,68,65,1,0,0,0,68,66,1,0,0,0,68,67,1,0,0,0,69,72,1,0,0,0,70,68,1,0,
  	0,0,70,71,1,0,0,0,71,1,1,0,0,0,72,70,1,0,0,0,73,74,5,27,0,0,74,75,5,28,
  	0,0,75,76,5,29,0,0,76,3,1,0,0,0,77,78,5,26,0,0,78,5,1,0,0,0,79,80,5,25,
  	0,0,80,7,1,0,0,0,81,82,3,48,24,0,82,83,5,29,0,0,83,119,1,0,0,0,84,85,
  	3,42,21,0,85,86,5,29,0,0,86,119,1,0,0,0,87,88,3,44,22,0,88,89,5,29,0,
  	0,89,119,1,0,0,0,90,91,3,60,30,0,91,92,5,29,0,0,92,119,1,0,0,0,93,119,
  	3,10,5,0,94,119,3,12,6,0,95,119,3,14,7,0,96,97,3,34,17,0,97,98,5,29,0,
  	0,98,119,1,0,0,0,99,119,3,30,15,0,100,101,3,32,16,0,101,102,5,29,0,0,
  	102,119,1,0,0,0,103,104,3,38,19,0,104,105,5,29,0,0,105,119,1,0,0,0,106,
  	107,3,24,12,0,107,108,5,29,0,0,108,119,1,0,0,0,109,110,3,22,11,0,110,
  	111,5,29,0,0,111,119,1,0,0,0,112,113,3,28,14,0,113,114,5,29,0,0,114,119,
  	1,0,0,0,115,116,3,26,13,0,116,117,5,29,0,0,117,119,1,0,0,0,118,81,1,0,
  	0,0,118,84,1,0,0,0,118,87,1,0,0,0,118,90,1,0,0,0,118,93,1,0,0,0,118,94,
  	1,0,0,0,118,95,1,0,0,0,118,96,1,0,0,0,118,99,1,0,0,0,118,100,1,0,0,0,
  	118,103,1,0,0,0,118,106,1,0,0,0,118,109,1,0,0,0,118,112,1,0,0,0,118,115,
  	1,0,0,0,119,9,1,0,0,0,120,121,5,9,0,0,121,122,5,6,0,0,122,123,3,8,4,0,
  	123,124,3,44,22,0,124,125,5,29,0,0,125,126,3,44,22,0,126,127,5,7,0,0,
  	127,128,3,36,18,0,128,11,1,0,0,0,129,130,5,10,0,0,130,131,5,6,0,0,131,
  	132,3,44,22,0,132,133,5,7,0,0,133,134,3,36,18,0,134,13,1,0,0,0,135,136,
  	5,11,0,0,136,137,5,6,0,0,137,138,3,44,22,0,138,139,5,7,0,0,139,141,3,
  	36,18,0,140,142,3,16,8,0,141,140,1,0,0,0,141,142,1,0,0,0,142,15,1,0,0,
  	0,143,146,3,20,10,0,144,146,3,18,9,0,145,143,1,0,0,0,145,144,1,0,0,0,
  	146,17,1,0,0,0,147,148,5,12,0,0,148,149,5,11,0,0,149,150,5,6,0,0,150,
  	151,3,44,22,0,151,152,5,7,0,0,152,154,3,36,18,0,153,155,3,16,8,0,154,
  	153,1,0,0,0,154,155,1,0,0,0,155,19,1,0,0,0,156,157,5,12,0,0,157,158,3,
  	36,18,0,158,21,1,0,0,0,159,160,5,21,0,0,160,161,5,6,0,0,161,162,5,24,
  	0,0,162,163,5,34,0,0,163,164,5,33,0,0,164,165,5,7,0,0,165,166,5,44,0,
  	0,166,23,1,0,0,0,167,168,5,22,0,0,168,169,5,6,0,0,169,170,5,24,0,0,170,
  	171,5,34,0,0,171,172,5,33,0,0,172,173,5,7,0,0,173,174,5,44,0,0,174,25,
  	1,0,0,0,175,176,5,23,0,0,176,177,5,6,0,0,177,178,5,24,0,0,178,179,5,34,
  	0,0,179,180,5,33,0,0,180,181,5,7,0,0,181,182,5,44,0,0,182,188,5,4,0,0,
  	183,184,3,54,27,0,184,185,5,29,0,0,185,187,1,0,0,0,186,183,1,0,0,0,187,
  	190,1,0,0,0,188,186,1,0,0,0,188,189,1,0,0,0,189,191,1,0,0,0,190,188,1,
  	0,0,0,191,192,5,5,0,0,192,27,1,0,0,0,193,194,7,0,0,0,194,195,5,44,0,0,
  	195,201,5,4,0,0,196,197,3,54,27,0,197,198,5,29,0,0,198,200,1,0,0,0,199,
  	196,1,0,0,0,200,203,1,0,0,0,201,199,1,0,0,0,201,202,1,0,0,0,202,204,1,
  	0,0,0,203,201,1,0,0,0,204,205,5,5,0,0,205,29,1,0,0,0,206,208,3,40,20,
  	0,207,206,1,0,0,0,208,211,1,0,0,0,209,207,1,0,0,0,209,210,1,0,0,0,210,
  	215,1,0,0,0,211,209,1,0,0,0,212,214,5,8,0,0,213,212,1,0,0,0,214,217,1,
  	0,0,0,215,213,1,0,0,0,215,216,1,0,0,0,216,218,1,0,0,0,217,215,1,0,0,0,
  	218,219,7,1,0,0,219,220,5,44,0,0,220,229,5,6,0,0,221,226,3,54,27,0,222,
  	223,5,30,0,0,223,225,3,54,27,0,224,222,1,0,0,0,225,228,1,0,0,0,226,224,
  	1,0,0,0,226,227,1,0,0,0,227,230,1,0,0,0,228,226,1,0,0,0,229,221,1,0,0,
  	0,229,230,1,0,0,0,230,231,1,0,0,0,231,234,5,7,0,0,232,233,5,31,0,0,233,
  	235,5,44,0,0,234,232,1,0,0,0,234,235,1,0,0,0,235,238,1,0,0,0,236,239,
  	3,36,18,0,237,239,5,29,0,0,238,236,1,0,0,0,238,237,1,0,0,0,239,31,1,0,
  	0,0,240,241,5,44,0,0,241,250,5,6,0,0,242,247,3,44,22,0,243,244,5,30,0,
  	0,244,246,3,44,22,0,245,243,1,0,0,0,246,249,1,0,0,0,247,245,1,0,0,0,247,
  	248,1,0,0,0,248,251,1,0,0,0,249,247,1,0,0,0,250,242,1,0,0,0,250,251,1,
  	0,0,0,251,252,1,0,0,0,252,253,5,7,0,0,253,33,1,0,0,0,254,255,5,14,0,0,
  	255,256,3,44,22,0,256,35,1,0,0,0,257,261,5,4,0,0,258,260,3,8,4,0,259,
  	258,1,0,0,0,260,263,1,0,0,0,261,259,1,0,0,0,261,262,1,0,0,0,262,264,1,
  	0,0,0,263,261,1,0,0,0,264,265,5,5,0,0,265,37,1,0,0,0,266,267,5,16,0,0,
  	267,268,5,44,0,0,268,274,5,4,0,0,269,270,3,54,27,0,270,271,5,29,0,0,271,
  	273,1,0,0,0,272,269,1,0,0,0,273,276,1,0,0,0,274,272,1,0,0,0,274,275,1,
  	0,0,0,275,277,1,0,0,0,276,274,1,0,0,0,277,278,5,5,0,0,278,39,1,0,0,0,
  	279,280,5,36,0,0,280,281,5,19,0,0,281,282,5,44,0,0,282,288,5,4,0,0,283,
  	284,3,44,22,0,284,285,5,30,0,0,285,287,1,0,0,0,286,283,1,0,0,0,287,290,
  	1,0,0,0,288,286,1,0,0,0,288,289,1,0,0,0,289,291,1,0,0,0,290,288,1,0,0,
  	0,291,292,5,41,0,0,292,293,5,30,0,0,293,294,3,44,22,0,294,295,5,5,0,0,
  	295,41,1,0,0,0,296,297,3,48,24,0,297,298,5,34,0,0,298,299,3,44,22,0,299,
  	43,1,0,0,0,300,301,6,22,-1,0,301,302,5,6,0,0,302,303,3,44,22,0,303,304,
  	5,7,0,0,304,313,1,0,0,0,305,306,5,42,0,0,306,313,3,44,22,5,307,308,5,
  	43,0,0,308,313,3,44,22,3,309,310,5,38,0,0,310,313,3,44,22,2,311,313,3,
  	50,25,0,312,300,1,0,0,0,312,305,1,0,0,0,312,307,1,0,0,0,312,309,1,0,0,
  	0,312,311,1,0,0,0,313,327,1,0,0,0,314,315,10,9,0,0,315,316,7,2,0,0,316,
  	326,3,44,22,10,317,318,10,8,0,0,318,319,7,3,0,0,319,326,3,44,22,9,320,
  	321,10,7,0,0,321,322,5,41,0,0,322,326,3,44,22,8,323,324,10,4,0,0,324,
  	326,5,42,0,0,325,314,1,0,0,0,325,317,1,0,0,0,325,320,1,0,0,0,325,323,
  	1,0,0,0,326,329,1,0,0,0,327,325,1,0,0,0,327,328,1,0,0,0,328,45,1,0,0,
  	0,329,327,1,0,0,0,330,339,5,4,0,0,331,336,3,44,22,0,332,333,5,30,0,0,
  	333,335,3,44,22,0,334,332,1,0,0,0,335,338,1,0,0,0,336,334,1,0,0,0,336,
  	337,1,0,0,0,337,340,1,0,0,0,338,336,1,0,0,0,339,331,1,0,0,0,339,340,1,
  	0,0,0,340,341,1,0,0,0,341,342,5,5,0,0,342,47,1,0,0,0,343,347,3,54,27,
  	0,344,347,3,56,28,0,345,347,3,52,26,0,346,343,1,0,0,0,346,344,1,0,0,0,
  	346,345,1,0,0,0,347,49,1,0,0,0,348,355,3,56,28,0,349,355,3,58,29,0,350,
  	355,3,32,16,0,351,355,3,62,31,0,352,355,3,52,26,0,353,355,3,46,23,0,354,
  	348,1,0,0,0,354,349,1,0,0,0,354,350,1,0,0,0,354,351,1,0,0,0,354,352,1,
  	0,0,0,354,353,1,0,0,0,355,51,1,0,0,0,356,359,3,56,28,0,357,359,3,32,16,
  	0,358,356,1,0,0,0,358,357,1,0,0,0,359,360,1,0,0,0,360,363,5,35,0,0,361,
  	364,3,56,28,0,362,364,3,52,26,0,363,361,1,0,0,0,363,362,1,0,0,0,364,53,
  	1,0,0,0,365,367,5,8,0,0,366,365,1,0,0,0,367,370,1,0,0,0,368,366,1,0,0,
  	0,368,369,1,0,0,0,369,371,1,0,0,0,370,368,1,0,0,0,371,372,7,1,0,0,372,
  	378,5,44,0,0,373,374,5,2,0,0,374,375,5,33,0,0,375,377,5,3,0,0,376,373,
  	1,0,0,0,377,380,1,0,0,0,378,376,1,0,0,0,378,379,1,0,0,0,379,383,1,0,0,
  	0,380,378,1,0,0,0,381,382,5,31,0,0,382,384,5,44,0,0,383,381,1,0,0,0,383,
  	384,1,0,0,0,384,55,1,0,0,0,385,392,5,44,0,0,386,387,5,2,0,0,387,388,3,
  	44,22,0,388,389,5,3,0,0,389,391,1,0,0,0,390,386,1,0,0,0,391,394,1,0,0,
  	0,392,390,1,0,0,0,392,393,1,0,0,0,393,57,1,0,0,0,394,392,1,0,0,0,395,
  	396,7,4,0,0,396,59,1,0,0,0,397,398,5,15,0,0,398,61,1,0,0,0,399,400,5,
  	20,0,0,400,401,5,6,0,0,401,406,3,44,22,0,402,403,5,30,0,0,403,405,3,44,
  	22,0,404,402,1,0,0,0,405,408,1,0,0,0,406,404,1,0,0,0,406,407,1,0,0,0,
  	407,409,1,0,0,0,408,406,1,0,0,0,409,410,5,7,0,0,410,63,1,0,0,0,33,68,
  	70,118,141,145,154,188,201,209,215,226,229,234,238,247,250,261,274,288,
  	312,325,327,336,339,346,354,358,363,368,378,383,392,406
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
    setState(64);
    shaderTypeSpec();
    setState(70);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 31142924767056) != 0) {
      setState(68);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case SrslGrammarParser::MCOMMENT: {
          setState(65);
          multilineComment();
          break;
        }

        case SrslGrammarParser::COMMENT: {
          setState(66);
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
          setState(67);
          statement();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(72);
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
    setState(73);
    match(SrslGrammarParser::SHADER_TYPE_LIT);
    setState(74);
    match(SrslGrammarParser::SHADER_TYPE);
    setState(75);
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
    setState(77);
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
    setState(79);
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
    setState(118);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(81);
      lvalue();
      setState(82);
      match(SrslGrammarParser::EOL);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(84);
      assignment();
      setState(85);
      match(SrslGrammarParser::EOL);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(87);
      expression(0);
      setState(88);
      match(SrslGrammarParser::EOL);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(90);
      controlFlow();
      setState(91);
      match(SrslGrammarParser::EOL);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(93);
      forLoop();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(94);
      whileLoop();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(95);
      ifStatement();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(96);
      returnStatement();
      setState(97);
      match(SrslGrammarParser::EOL);
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(99);
      functionDeclaration();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(100);
      functionCall();
      setState(101);
      match(SrslGrammarParser::EOL);
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(103);
      structDeclaration();
      setState(104);
      match(SrslGrammarParser::EOL);
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(106);
      samplerDeclaration();
      setState(107);
      match(SrslGrammarParser::EOL);
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(109);
      textureDeclaration();
      setState(110);
      match(SrslGrammarParser::EOL);
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(112);
      shaderInterface();
      setState(113);
      match(SrslGrammarParser::EOL);
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(115);
      constantBufferDeclaration();
      setState(116);
      match(SrslGrammarParser::EOL);
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
    setState(120);
    match(SrslGrammarParser::FOR);
    setState(121);
    match(SrslGrammarParser::PARENO);
    setState(122);
    statement();
    setState(123);
    expression(0);
    setState(124);
    match(SrslGrammarParser::EOL);
    setState(125);
    expression(0);
    setState(126);
    match(SrslGrammarParser::PARENC);
    setState(127);
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
    setState(129);
    match(SrslGrammarParser::WHILE);
    setState(130);
    match(SrslGrammarParser::PARENO);
    setState(131);
    expression(0);
    setState(132);
    match(SrslGrammarParser::PARENC);
    setState(133);
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
    setState(135);
    match(SrslGrammarParser::IF);
    setState(136);
    match(SrslGrammarParser::PARENO);
    setState(137);
    expression(0);
    setState(138);
    match(SrslGrammarParser::PARENC);
    setState(139);
    scope();
    setState(141);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SrslGrammarParser::ELSE) {
      setState(140);
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
    setState(145);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(143);
      elseStatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(144);
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
    setState(147);
    match(SrslGrammarParser::ELSE);
    setState(148);
    match(SrslGrammarParser::IF);
    setState(149);
    match(SrslGrammarParser::PARENO);
    setState(150);
    expression(0);
    setState(151);
    match(SrslGrammarParser::PARENC);
    setState(152);
    scope();
    setState(154);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SrslGrammarParser::ELSE) {
      setState(153);
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
    setState(156);
    match(SrslGrammarParser::ELSE);
    setState(157);
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
    setState(159);
    match(SrslGrammarParser::TEXTURE_TYPES);
    setState(160);
    match(SrslGrammarParser::PARENO);
    setState(161);
    match(SrslGrammarParser::SLOT);
    setState(162);
    match(SrslGrammarParser::ASSIGN);
    setState(163);
    match(SrslGrammarParser::NUMBER);
    setState(164);
    match(SrslGrammarParser::PARENC);
    setState(165);
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
    setState(167);
    match(SrslGrammarParser::SAMPLER_TYPE);
    setState(168);
    match(SrslGrammarParser::PARENO);
    setState(169);
    match(SrslGrammarParser::SLOT);
    setState(170);
    match(SrslGrammarParser::ASSIGN);
    setState(171);
    match(SrslGrammarParser::NUMBER);
    setState(172);
    match(SrslGrammarParser::PARENC);
    setState(173);
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
    setState(175);
    match(SrslGrammarParser::CONSTANT_BUFFER);
    setState(176);
    match(SrslGrammarParser::PARENO);
    setState(177);
    match(SrslGrammarParser::SLOT);
    setState(178);
    match(SrslGrammarParser::ASSIGN);
    setState(179);
    match(SrslGrammarParser::NUMBER);
    setState(180);
    match(SrslGrammarParser::PARENC);
    setState(181);
    match(SrslGrammarParser::VAR_NAME);
    setState(182);
    match(SrslGrammarParser::CBRACKO);
    setState(188);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 17592187093248) != 0) {
      setState(183);
      newVariable();
      setState(184);
      match(SrslGrammarParser::EOL);
      setState(190);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(191);
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
    setState(193);
    _la = _input->LA(1);
    if (!(_la == SrslGrammarParser::SHADER_INPUT

    || _la == SrslGrammarParser::SHADER_OUTPUT)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(194);
    match(SrslGrammarParser::VAR_NAME);
    setState(195);
    match(SrslGrammarParser::CBRACKO);
    setState(201);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 17592187093248) != 0) {
      setState(196);
      newVariable();
      setState(197);
      match(SrslGrammarParser::EOL);
      setState(203);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(204);
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

std::vector<SrslGrammarParser::TestCaseContext *> SrslGrammarParser::FunctionDeclarationContext::testCase() {
  return getRuleContexts<SrslGrammarParser::TestCaseContext>();
}

SrslGrammarParser::TestCaseContext* SrslGrammarParser::FunctionDeclarationContext::testCase(size_t i) {
  return getRuleContext<SrslGrammarParser::TestCaseContext>(i);
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
    setState(209);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SrslGrammarParser::AT) {
      setState(206);
      testCase();
      setState(211);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(215);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SrslGrammarParser::CONST) {
      setState(212);
      match(SrslGrammarParser::CONST);
      setState(217);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(218);
    _la = _input->LA(1);
    if (!(_la == SrslGrammarParser::TYPE

    || _la == SrslGrammarParser::VAR_NAME)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(219);
    match(SrslGrammarParser::VAR_NAME);
    setState(220);
    match(SrslGrammarParser::PARENO);
    setState(229);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 17592187093248) != 0) {
      setState(221);
      newVariable();
      setState(226);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SrslGrammarParser::COMMA) {
        setState(222);
        match(SrslGrammarParser::COMMA);
        setState(223);
        newVariable();
        setState(228);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(231);
    match(SrslGrammarParser::PARENC);
    setState(234);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SrslGrammarParser::COLON) {
      setState(232);
      match(SrslGrammarParser::COLON);
      setState(233);
      match(SrslGrammarParser::VAR_NAME);
    }
    setState(238);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SrslGrammarParser::CBRACKO: {
        setState(236);
        scope();
        break;
      }

      case SrslGrammarParser::EOL: {
        setState(237);
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
    setState(240);
    match(SrslGrammarParser::VAR_NAME);
    setState(241);
    match(SrslGrammarParser::PARENO);
    setState(250);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 31074089435216) != 0) {
      setState(242);
      expression(0);
      setState(247);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SrslGrammarParser::COMMA) {
        setState(243);
        match(SrslGrammarParser::COMMA);
        setState(244);
        expression(0);
        setState(249);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(252);
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

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(254);
    match(SrslGrammarParser::RETURN);
    setState(255);
    expression(0);
   
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
    setState(257);
    match(SrslGrammarParser::CBRACKO);
    setState(261);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 31142824103760) != 0) {
      setState(258);
      statement();
      setState(263);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(264);
    match(SrslGrammarParser::CBRACKC);
   
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
  enterRule(_localctx, 38, SrslGrammarParser::RuleStructDeclaration);
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
    setState(266);
    match(SrslGrammarParser::STRUCT);
    setState(267);
    match(SrslGrammarParser::VAR_NAME);
    setState(268);
    match(SrslGrammarParser::CBRACKO);
    setState(274);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 17592187093248) != 0) {
      setState(269);
      newVariable();
      setState(270);
      match(SrslGrammarParser::EOL);
      setState(276);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(277);
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

tree::TerminalNode* SrslGrammarParser::TestCaseContext::VAR_NAME() {
  return getToken(SrslGrammarParser::VAR_NAME, 0);
}

tree::TerminalNode* SrslGrammarParser::TestCaseContext::CBRACKO() {
  return getToken(SrslGrammarParser::CBRACKO, 0);
}

tree::TerminalNode* SrslGrammarParser::TestCaseContext::OPERATION() {
  return getToken(SrslGrammarParser::OPERATION, 0);
}

std::vector<tree::TerminalNode *> SrslGrammarParser::TestCaseContext::COMMA() {
  return getTokens(SrslGrammarParser::COMMA);
}

tree::TerminalNode* SrslGrammarParser::TestCaseContext::COMMA(size_t i) {
  return getToken(SrslGrammarParser::COMMA, i);
}

std::vector<SrslGrammarParser::ExpressionContext *> SrslGrammarParser::TestCaseContext::expression() {
  return getRuleContexts<SrslGrammarParser::ExpressionContext>();
}

SrslGrammarParser::ExpressionContext* SrslGrammarParser::TestCaseContext::expression(size_t i) {
  return getRuleContext<SrslGrammarParser::ExpressionContext>(i);
}

tree::TerminalNode* SrslGrammarParser::TestCaseContext::CBRACKC() {
  return getToken(SrslGrammarParser::CBRACKC, 0);
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
  enterRule(_localctx, 40, SrslGrammarParser::RuleTestCase);
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
    setState(279);
    match(SrslGrammarParser::AT);
    setState(280);
    match(SrslGrammarParser::TEST);
    setState(281);
    match(SrslGrammarParser::VAR_NAME);
    setState(282);
    match(SrslGrammarParser::CBRACKO);
    setState(288);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 31074089435216) != 0) {
      setState(283);
      expression(0);
      setState(284);
      match(SrslGrammarParser::COMMA);
      setState(290);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(291);
    match(SrslGrammarParser::OPERATION);
    setState(292);
    match(SrslGrammarParser::COMMA);
    setState(293);
    expression(0);
    setState(294);
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
  enterRule(_localctx, 42, SrslGrammarParser::RuleAssignment);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(296);
    lvalue();
    setState(297);
    match(SrslGrammarParser::ASSIGN);
    setState(298);
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
  size_t startState = 44;
  enterRecursionRule(_localctx, 44, SrslGrammarParser::RuleExpression, precedence);

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
    setState(312);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SrslGrammarParser::PARENO: {
        setState(301);
        match(SrslGrammarParser::PARENO);
        setState(302);
        expression(0);
        setState(303);
        match(SrslGrammarParser::PARENC);
        break;
      }

      case SrslGrammarParser::CREMENT: {
        setState(305);
        match(SrslGrammarParser::CREMENT);
        setState(306);
        expression(5);
        break;
      }

      case SrslGrammarParser::NOT: {
        setState(307);
        match(SrslGrammarParser::NOT);
        setState(308);
        expression(3);
        break;
      }

      case SrslGrammarParser::MINUS: {
        setState(309);
        match(SrslGrammarParser::MINUS);
        setState(310);
        expression(2);
        break;
      }

      case SrslGrammarParser::CBRACKO:
      case SrslGrammarParser::TYPE:
      case SrslGrammarParser::FLOATING_POINT:
      case SrslGrammarParser::NUMBER:
      case SrslGrammarParser::VAR_NAME: {
        setState(311);
        rvalue();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(327);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(325);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(314);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(315);
          _la = _input->LA(1);
          if (!(_la == SrslGrammarParser::MULTIPLY

          || _la == SrslGrammarParser::DIVIDE)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(316);
          expression(10);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(317);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(318);
          _la = _input->LA(1);
          if (!(_la == SrslGrammarParser::PLUS

          || _la == SrslGrammarParser::MINUS)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(319);
          expression(9);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(320);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(321);
          match(SrslGrammarParser::OPERATION);
          setState(322);
          expression(8);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(323);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(324);
          match(SrslGrammarParser::CREMENT);
          break;
        }

        default:
          break;
        } 
      }
      setState(329);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
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
  enterRule(_localctx, 46, SrslGrammarParser::RuleInitializerList);
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
    setState(330);
    match(SrslGrammarParser::CBRACKO);
    setState(339);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 31074089435216) != 0) {
      setState(331);
      expression(0);
      setState(336);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SrslGrammarParser::COMMA) {
        setState(332);
        match(SrslGrammarParser::COMMA);
        setState(333);
        expression(0);
        setState(338);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(341);
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
  enterRule(_localctx, 48, SrslGrammarParser::RuleLvalue);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(346);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(343);
      newVariable();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(344);
      variable();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(345);
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
  enterRule(_localctx, 50, SrslGrammarParser::RuleRvalue);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(354);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(348);
      variable();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(349);
      constant();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(350);
      functionCall();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(351);
      typeConstructor();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(352);
      memberAccess();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(353);
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
  enterRule(_localctx, 52, SrslGrammarParser::RuleMemberAccess);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(358);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx)) {
    case 1: {
      setState(356);
      variable();
      break;
    }

    case 2: {
      setState(357);
      functionCall();
      break;
    }

    default:
      break;
    }
    setState(360);
    match(SrslGrammarParser::DOT);
    setState(363);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx)) {
    case 1: {
      setState(361);
      variable();
      break;
    }

    case 2: {
      setState(362);
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
  enterRule(_localctx, 54, SrslGrammarParser::RuleNewVariable);
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
    setState(368);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SrslGrammarParser::CONST) {
      setState(365);
      match(SrslGrammarParser::CONST);
      setState(370);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(371);
    _la = _input->LA(1);
    if (!(_la == SrslGrammarParser::TYPE

    || _la == SrslGrammarParser::VAR_NAME)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(372);
    match(SrslGrammarParser::VAR_NAME);
    setState(378);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SrslGrammarParser::SBRACKO) {
      setState(373);
      match(SrslGrammarParser::SBRACKO);
      setState(374);
      match(SrslGrammarParser::NUMBER);
      setState(375);
      match(SrslGrammarParser::SBRACKC);
      setState(380);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(383);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SrslGrammarParser::COLON) {
      setState(381);
      match(SrslGrammarParser::COLON);
      setState(382);
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
  enterRule(_localctx, 56, SrslGrammarParser::RuleVariable);

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
    setState(385);
    match(SrslGrammarParser::VAR_NAME);
    setState(392);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(386);
        match(SrslGrammarParser::SBRACKO);
        setState(387);
        expression(0);
        setState(388);
        match(SrslGrammarParser::SBRACKC); 
      }
      setState(394);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx);
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
  enterRule(_localctx, 58, SrslGrammarParser::RuleConstant);
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
    setState(395);
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
  enterRule(_localctx, 60, SrslGrammarParser::RuleControlFlow);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(397);
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
  enterRule(_localctx, 62, SrslGrammarParser::RuleTypeConstructor);
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
    setState(399);
    match(SrslGrammarParser::TYPE);
    setState(400);
    match(SrslGrammarParser::PARENO);
    setState(401);
    expression(0);
    setState(406);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SrslGrammarParser::COMMA) {
      setState(402);
      match(SrslGrammarParser::COMMA);
      setState(403);
      expression(0);
      setState(408);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(409);
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
    case 22: return expressionSempred(antlrcpp::downCast<ExpressionContext *>(context), predicateIndex);

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
