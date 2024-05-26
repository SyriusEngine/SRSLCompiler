
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
      "file", "shaderTypeSpec", "statement", "forStatement", "whileStatement", 
      "ifStatement", "optionalStatement", "elseIfStatement", "elseStatement", 
      "textureDeclaration", "samplerDeclaration", "constantBufferDeclaration", 
      "shaderInput", "shaderOutput", "functionDeclaration", "functionCall", 
      "returnStatement", "scope", "structDeclaration", "assignment", "expression", 
      "lvalue", "rvalue", "memberAccess", "newVariable", "variable", "constant", 
      "controlFlow", "typeConstructor", "initializerList"
    },
    std::vector<std::string>{
      "", "", "", "'['", "']'", "'{'", "'}'", "'('", "')'", "'const'", "'for'", 
      "'while'", "'if'", "'else'", "'return'", "", "'struct'", "'Input'", 
      "'Output'", "", "", "'Sampler'", "'ConstantBuffer'", "'slot'", "'ShaderType = '", 
      "", "';'", "','", "':'", "", "", "'='", "'.'", "'@'", "'+'", "'-'", 
      "'*'", "'/'", "", "", "", "'!'"
    },
    std::vector<std::string>{
      "", "WS", "COMMENT", "SBRACKO", "SBRACKC", "CBRACKO", "CBRACKC", "PARENO", 
      "PARENC", "CONST", "FOR", "WHILE", "IF", "ELSE", "RETURN", "CONTROL_FLOW", 
      "STRUCT", "SHADER_INPUT", "SHADER_OUTPUT", "TYPE", "TEXTURE_TYPES", 
      "SAMPLER_TYPE", "CONSTANT_BUFFER", "SLOT", "SHADER_TYPE_LIT", "SHADER_TYPE", 
      "EOL", "COMMA", "COLON", "FLOATING_POINT", "NUMBER", "ASSIGN", "DOT", 
      "AT", "PLUS", "MINUS", "MULTIPLY", "DIVIDE", "ASSIGN_OP", "OPERATION", 
      "CREMENT", "NOT", "BOOL", "VAR_NAME"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,43,392,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,1,0,1,0,5,0,63,8,0,10,0,12,0,66,9,0,1,1,1,1,1,1,1,1,1,2,
  	1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,
  	2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,
  	1,2,1,2,1,2,1,2,3,2,112,8,2,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,4,1,
  	4,1,4,1,4,1,4,1,4,1,5,1,5,1,5,1,5,1,5,1,5,3,5,135,8,5,1,6,1,6,3,6,139,
  	8,6,1,7,1,7,1,7,1,7,1,7,1,7,1,7,3,7,148,8,7,1,8,1,8,1,8,1,9,1,9,1,9,1,
  	9,1,9,1,9,1,9,1,9,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,11,1,11,1,
  	11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,5,11,180,8,11,10,11,12,11,
  	183,9,11,1,11,1,11,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,5,12,195,8,
  	12,10,12,12,12,198,9,12,1,12,1,12,1,13,1,13,1,13,1,13,1,13,1,13,1,13,
  	1,13,5,13,210,8,13,10,13,12,13,213,9,13,1,13,1,13,1,14,5,14,218,8,14,
  	10,14,12,14,221,9,14,1,14,1,14,1,14,1,14,1,14,1,14,5,14,229,8,14,10,14,
  	12,14,232,9,14,3,14,234,8,14,1,14,1,14,1,14,3,14,239,8,14,1,15,1,15,1,
  	15,1,15,1,15,5,15,246,8,15,10,15,12,15,249,9,15,3,15,251,8,15,1,15,1,
  	15,1,16,1,16,3,16,257,8,16,1,17,1,17,5,17,261,8,17,10,17,12,17,264,9,
  	17,1,17,1,17,1,18,1,18,1,18,1,18,1,18,1,18,5,18,274,8,18,10,18,12,18,
  	277,9,18,1,18,1,18,1,19,1,19,1,19,1,19,1,20,1,20,1,20,1,20,1,20,1,20,
  	1,20,1,20,1,20,1,20,1,20,1,20,3,20,297,8,20,1,20,1,20,1,20,1,20,1,20,
  	1,20,1,20,1,20,1,20,1,20,1,20,5,20,310,8,20,10,20,12,20,313,9,20,1,21,
  	1,21,1,21,3,21,318,8,21,1,22,1,22,1,22,1,22,1,22,1,22,3,22,326,8,22,1,
  	23,1,23,3,23,330,8,23,1,23,1,23,1,23,3,23,335,8,23,1,24,5,24,338,8,24,
  	10,24,12,24,341,9,24,1,24,1,24,1,24,1,24,1,24,5,24,348,8,24,10,24,12,
  	24,351,9,24,1,25,1,25,1,25,1,25,1,25,5,25,358,8,25,10,25,12,25,361,9,
  	25,1,26,1,26,1,27,1,27,1,28,1,28,1,28,1,28,1,28,5,28,372,8,28,10,28,12,
  	28,375,9,28,1,28,1,28,1,29,1,29,1,29,1,29,5,29,383,8,29,10,29,12,29,386,
  	9,29,3,29,388,8,29,1,29,1,29,1,29,0,1,40,30,0,2,4,6,8,10,12,14,16,18,
  	20,22,24,26,28,30,32,34,36,38,40,42,44,46,48,50,52,54,56,58,0,5,2,0,19,
  	19,43,43,2,0,31,31,38,38,1,0,36,37,1,0,34,35,2,0,29,30,42,42,415,0,60,
  	1,0,0,0,2,67,1,0,0,0,4,111,1,0,0,0,6,113,1,0,0,0,8,122,1,0,0,0,10,128,
  	1,0,0,0,12,138,1,0,0,0,14,140,1,0,0,0,16,149,1,0,0,0,18,152,1,0,0,0,20,
  	160,1,0,0,0,22,168,1,0,0,0,24,186,1,0,0,0,26,201,1,0,0,0,28,219,1,0,0,
  	0,30,240,1,0,0,0,32,254,1,0,0,0,34,258,1,0,0,0,36,267,1,0,0,0,38,280,
  	1,0,0,0,40,296,1,0,0,0,42,317,1,0,0,0,44,325,1,0,0,0,46,329,1,0,0,0,48,
  	339,1,0,0,0,50,352,1,0,0,0,52,362,1,0,0,0,54,364,1,0,0,0,56,366,1,0,0,
  	0,58,378,1,0,0,0,60,64,3,2,1,0,61,63,3,4,2,0,62,61,1,0,0,0,63,66,1,0,
  	0,0,64,62,1,0,0,0,64,65,1,0,0,0,65,1,1,0,0,0,66,64,1,0,0,0,67,68,5,24,
  	0,0,68,69,5,25,0,0,69,70,5,26,0,0,70,3,1,0,0,0,71,72,3,48,24,0,72,73,
  	5,26,0,0,73,112,1,0,0,0,74,75,3,38,19,0,75,76,5,26,0,0,76,112,1,0,0,0,
  	77,78,3,40,20,0,78,79,5,26,0,0,79,112,1,0,0,0,80,81,3,54,27,0,81,82,5,
  	26,0,0,82,112,1,0,0,0,83,112,3,6,3,0,84,112,3,8,4,0,85,112,3,10,5,0,86,
  	87,3,32,16,0,87,88,5,26,0,0,88,112,1,0,0,0,89,112,3,28,14,0,90,91,3,30,
  	15,0,91,92,5,26,0,0,92,112,1,0,0,0,93,94,3,36,18,0,94,95,5,26,0,0,95,
  	112,1,0,0,0,96,97,3,20,10,0,97,98,5,26,0,0,98,112,1,0,0,0,99,100,3,18,
  	9,0,100,101,5,26,0,0,101,112,1,0,0,0,102,103,3,24,12,0,103,104,5,26,0,
  	0,104,112,1,0,0,0,105,106,3,26,13,0,106,107,5,26,0,0,107,112,1,0,0,0,
  	108,109,3,22,11,0,109,110,5,26,0,0,110,112,1,0,0,0,111,71,1,0,0,0,111,
  	74,1,0,0,0,111,77,1,0,0,0,111,80,1,0,0,0,111,83,1,0,0,0,111,84,1,0,0,
  	0,111,85,1,0,0,0,111,86,1,0,0,0,111,89,1,0,0,0,111,90,1,0,0,0,111,93,
  	1,0,0,0,111,96,1,0,0,0,111,99,1,0,0,0,111,102,1,0,0,0,111,105,1,0,0,0,
  	111,108,1,0,0,0,112,5,1,0,0,0,113,114,5,10,0,0,114,115,5,7,0,0,115,116,
  	3,4,2,0,116,117,3,40,20,0,117,118,5,26,0,0,118,119,3,40,20,0,119,120,
  	5,8,0,0,120,121,3,34,17,0,121,7,1,0,0,0,122,123,5,11,0,0,123,124,5,7,
  	0,0,124,125,3,40,20,0,125,126,5,8,0,0,126,127,3,34,17,0,127,9,1,0,0,0,
  	128,129,5,12,0,0,129,130,5,7,0,0,130,131,3,40,20,0,131,132,5,8,0,0,132,
  	134,3,34,17,0,133,135,3,12,6,0,134,133,1,0,0,0,134,135,1,0,0,0,135,11,
  	1,0,0,0,136,139,3,16,8,0,137,139,3,14,7,0,138,136,1,0,0,0,138,137,1,0,
  	0,0,139,13,1,0,0,0,140,141,5,13,0,0,141,142,5,12,0,0,142,143,5,7,0,0,
  	143,144,3,40,20,0,144,145,5,8,0,0,145,147,3,34,17,0,146,148,3,12,6,0,
  	147,146,1,0,0,0,147,148,1,0,0,0,148,15,1,0,0,0,149,150,5,13,0,0,150,151,
  	3,34,17,0,151,17,1,0,0,0,152,153,5,20,0,0,153,154,5,7,0,0,154,155,5,23,
  	0,0,155,156,5,31,0,0,156,157,5,30,0,0,157,158,5,8,0,0,158,159,5,43,0,
  	0,159,19,1,0,0,0,160,161,5,21,0,0,161,162,5,7,0,0,162,163,5,23,0,0,163,
  	164,5,31,0,0,164,165,5,30,0,0,165,166,5,8,0,0,166,167,5,43,0,0,167,21,
  	1,0,0,0,168,169,5,22,0,0,169,170,5,7,0,0,170,171,5,23,0,0,171,172,5,31,
  	0,0,172,173,5,30,0,0,173,174,5,8,0,0,174,175,5,43,0,0,175,181,5,5,0,0,
  	176,177,3,48,24,0,177,178,5,26,0,0,178,180,1,0,0,0,179,176,1,0,0,0,180,
  	183,1,0,0,0,181,179,1,0,0,0,181,182,1,0,0,0,182,184,1,0,0,0,183,181,1,
  	0,0,0,184,185,5,6,0,0,185,23,1,0,0,0,186,187,5,17,0,0,187,188,5,43,0,
  	0,188,196,5,5,0,0,189,190,3,48,24,0,190,191,5,28,0,0,191,192,5,43,0,0,
  	192,193,5,26,0,0,193,195,1,0,0,0,194,189,1,0,0,0,195,198,1,0,0,0,196,
  	194,1,0,0,0,196,197,1,0,0,0,197,199,1,0,0,0,198,196,1,0,0,0,199,200,5,
  	6,0,0,200,25,1,0,0,0,201,202,5,18,0,0,202,203,5,43,0,0,203,211,5,5,0,
  	0,204,205,3,48,24,0,205,206,5,28,0,0,206,207,5,43,0,0,207,208,5,26,0,
  	0,208,210,1,0,0,0,209,204,1,0,0,0,210,213,1,0,0,0,211,209,1,0,0,0,211,
  	212,1,0,0,0,212,214,1,0,0,0,213,211,1,0,0,0,214,215,5,6,0,0,215,27,1,
  	0,0,0,216,218,5,9,0,0,217,216,1,0,0,0,218,221,1,0,0,0,219,217,1,0,0,0,
  	219,220,1,0,0,0,220,222,1,0,0,0,221,219,1,0,0,0,222,223,7,0,0,0,223,224,
  	5,43,0,0,224,233,5,7,0,0,225,230,3,48,24,0,226,227,5,27,0,0,227,229,3,
  	48,24,0,228,226,1,0,0,0,229,232,1,0,0,0,230,228,1,0,0,0,230,231,1,0,0,
  	0,231,234,1,0,0,0,232,230,1,0,0,0,233,225,1,0,0,0,233,234,1,0,0,0,234,
  	235,1,0,0,0,235,238,5,8,0,0,236,239,3,34,17,0,237,239,5,26,0,0,238,236,
  	1,0,0,0,238,237,1,0,0,0,239,29,1,0,0,0,240,241,5,43,0,0,241,250,5,7,0,
  	0,242,247,3,40,20,0,243,244,5,27,0,0,244,246,3,40,20,0,245,243,1,0,0,
  	0,246,249,1,0,0,0,247,245,1,0,0,0,247,248,1,0,0,0,248,251,1,0,0,0,249,
  	247,1,0,0,0,250,242,1,0,0,0,250,251,1,0,0,0,251,252,1,0,0,0,252,253,5,
  	8,0,0,253,31,1,0,0,0,254,256,5,14,0,0,255,257,3,40,20,0,256,255,1,0,0,
  	0,256,257,1,0,0,0,257,33,1,0,0,0,258,262,5,5,0,0,259,261,3,4,2,0,260,
  	259,1,0,0,0,261,264,1,0,0,0,262,260,1,0,0,0,262,263,1,0,0,0,263,265,1,
  	0,0,0,264,262,1,0,0,0,265,266,5,6,0,0,266,35,1,0,0,0,267,268,5,16,0,0,
  	268,269,5,43,0,0,269,275,5,5,0,0,270,271,3,48,24,0,271,272,5,26,0,0,272,
  	274,1,0,0,0,273,270,1,0,0,0,274,277,1,0,0,0,275,273,1,0,0,0,275,276,1,
  	0,0,0,276,278,1,0,0,0,277,275,1,0,0,0,278,279,5,6,0,0,279,37,1,0,0,0,
  	280,281,3,42,21,0,281,282,7,1,0,0,282,283,3,40,20,0,283,39,1,0,0,0,284,
  	285,6,20,-1,0,285,286,5,7,0,0,286,287,3,40,20,0,287,288,5,8,0,0,288,297,
  	1,0,0,0,289,290,5,40,0,0,290,297,3,40,20,5,291,292,5,41,0,0,292,297,3,
  	40,20,3,293,294,5,35,0,0,294,297,3,40,20,2,295,297,3,44,22,0,296,284,
  	1,0,0,0,296,289,1,0,0,0,296,291,1,0,0,0,296,293,1,0,0,0,296,295,1,0,0,
  	0,297,311,1,0,0,0,298,299,10,9,0,0,299,300,7,2,0,0,300,310,3,40,20,10,
  	301,302,10,8,0,0,302,303,7,3,0,0,303,310,3,40,20,9,304,305,10,7,0,0,305,
  	306,5,39,0,0,306,310,3,40,20,8,307,308,10,4,0,0,308,310,5,40,0,0,309,
  	298,1,0,0,0,309,301,1,0,0,0,309,304,1,0,0,0,309,307,1,0,0,0,310,313,1,
  	0,0,0,311,309,1,0,0,0,311,312,1,0,0,0,312,41,1,0,0,0,313,311,1,0,0,0,
  	314,318,3,48,24,0,315,318,3,50,25,0,316,318,3,46,23,0,317,314,1,0,0,0,
  	317,315,1,0,0,0,317,316,1,0,0,0,318,43,1,0,0,0,319,326,3,50,25,0,320,
  	326,3,52,26,0,321,326,3,30,15,0,322,326,3,56,28,0,323,326,3,46,23,0,324,
  	326,3,58,29,0,325,319,1,0,0,0,325,320,1,0,0,0,325,321,1,0,0,0,325,322,
  	1,0,0,0,325,323,1,0,0,0,325,324,1,0,0,0,326,45,1,0,0,0,327,330,3,50,25,
  	0,328,330,3,30,15,0,329,327,1,0,0,0,329,328,1,0,0,0,330,331,1,0,0,0,331,
  	334,5,32,0,0,332,335,3,50,25,0,333,335,3,46,23,0,334,332,1,0,0,0,334,
  	333,1,0,0,0,335,47,1,0,0,0,336,338,5,9,0,0,337,336,1,0,0,0,338,341,1,
  	0,0,0,339,337,1,0,0,0,339,340,1,0,0,0,340,342,1,0,0,0,341,339,1,0,0,0,
  	342,343,7,0,0,0,343,349,5,43,0,0,344,345,5,3,0,0,345,346,5,30,0,0,346,
  	348,5,4,0,0,347,344,1,0,0,0,348,351,1,0,0,0,349,347,1,0,0,0,349,350,1,
  	0,0,0,350,49,1,0,0,0,351,349,1,0,0,0,352,359,5,43,0,0,353,354,5,3,0,0,
  	354,355,3,40,20,0,355,356,5,4,0,0,356,358,1,0,0,0,357,353,1,0,0,0,358,
  	361,1,0,0,0,359,357,1,0,0,0,359,360,1,0,0,0,360,51,1,0,0,0,361,359,1,
  	0,0,0,362,363,7,4,0,0,363,53,1,0,0,0,364,365,5,15,0,0,365,55,1,0,0,0,
  	366,367,5,19,0,0,367,368,5,7,0,0,368,373,3,40,20,0,369,370,5,27,0,0,370,
  	372,3,40,20,0,371,369,1,0,0,0,372,375,1,0,0,0,373,371,1,0,0,0,373,374,
  	1,0,0,0,374,376,1,0,0,0,375,373,1,0,0,0,376,377,5,8,0,0,377,57,1,0,0,
  	0,378,387,5,5,0,0,379,384,3,40,20,0,380,381,5,27,0,0,381,383,3,40,20,
  	0,382,380,1,0,0,0,383,386,1,0,0,0,384,382,1,0,0,0,384,385,1,0,0,0,385,
  	388,1,0,0,0,386,384,1,0,0,0,387,379,1,0,0,0,387,388,1,0,0,0,388,389,1,
  	0,0,0,389,390,5,6,0,0,390,59,1,0,0,0,30,64,111,134,138,147,181,196,211,
  	219,230,233,238,247,250,256,262,275,296,309,311,317,325,329,334,339,349,
  	359,373,384,387
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
    setState(60);
    shaderTypeSpec();
    setState(64);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 16528653147808) != 0) {
      setState(61);
      statement();
      setState(66);
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
    setState(67);
    match(SrslGrammarParser::SHADER_TYPE_LIT);
    setState(68);
    match(SrslGrammarParser::SHADER_TYPE);
    setState(69);
    match(SrslGrammarParser::EOL);
   
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

SrslGrammarParser::NewVariableContext* SrslGrammarParser::StatementContext::newVariable() {
  return getRuleContext<SrslGrammarParser::NewVariableContext>(0);
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

SrslGrammarParser::ForStatementContext* SrslGrammarParser::StatementContext::forStatement() {
  return getRuleContext<SrslGrammarParser::ForStatementContext>(0);
}

SrslGrammarParser::WhileStatementContext* SrslGrammarParser::StatementContext::whileStatement() {
  return getRuleContext<SrslGrammarParser::WhileStatementContext>(0);
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

SrslGrammarParser::ShaderInputContext* SrslGrammarParser::StatementContext::shaderInput() {
  return getRuleContext<SrslGrammarParser::ShaderInputContext>(0);
}

SrslGrammarParser::ShaderOutputContext* SrslGrammarParser::StatementContext::shaderOutput() {
  return getRuleContext<SrslGrammarParser::ShaderOutputContext>(0);
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
  enterRule(_localctx, 4, SrslGrammarParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(111);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(71);
      newVariable();
      setState(72);
      match(SrslGrammarParser::EOL);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(74);
      assignment();
      setState(75);
      match(SrslGrammarParser::EOL);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(77);
      expression(0);
      setState(78);
      match(SrslGrammarParser::EOL);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(80);
      controlFlow();
      setState(81);
      match(SrslGrammarParser::EOL);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(83);
      forStatement();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(84);
      whileStatement();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(85);
      ifStatement();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(86);
      returnStatement();
      setState(87);
      match(SrslGrammarParser::EOL);
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(89);
      functionDeclaration();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(90);
      functionCall();
      setState(91);
      match(SrslGrammarParser::EOL);
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(93);
      structDeclaration();
      setState(94);
      match(SrslGrammarParser::EOL);
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(96);
      samplerDeclaration();
      setState(97);
      match(SrslGrammarParser::EOL);
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(99);
      textureDeclaration();
      setState(100);
      match(SrslGrammarParser::EOL);
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(102);
      shaderInput();
      setState(103);
      match(SrslGrammarParser::EOL);
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(105);
      shaderOutput();
      setState(106);
      match(SrslGrammarParser::EOL);
      break;
    }

    case 16: {
      enterOuterAlt(_localctx, 16);
      setState(108);
      constantBufferDeclaration();
      setState(109);
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

//----------------- ForStatementContext ------------------------------------------------------------------

SrslGrammarParser::ForStatementContext::ForStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SrslGrammarParser::ForStatementContext::FOR() {
  return getToken(SrslGrammarParser::FOR, 0);
}

tree::TerminalNode* SrslGrammarParser::ForStatementContext::PARENO() {
  return getToken(SrslGrammarParser::PARENO, 0);
}

SrslGrammarParser::StatementContext* SrslGrammarParser::ForStatementContext::statement() {
  return getRuleContext<SrslGrammarParser::StatementContext>(0);
}

std::vector<SrslGrammarParser::ExpressionContext *> SrslGrammarParser::ForStatementContext::expression() {
  return getRuleContexts<SrslGrammarParser::ExpressionContext>();
}

SrslGrammarParser::ExpressionContext* SrslGrammarParser::ForStatementContext::expression(size_t i) {
  return getRuleContext<SrslGrammarParser::ExpressionContext>(i);
}

tree::TerminalNode* SrslGrammarParser::ForStatementContext::EOL() {
  return getToken(SrslGrammarParser::EOL, 0);
}

tree::TerminalNode* SrslGrammarParser::ForStatementContext::PARENC() {
  return getToken(SrslGrammarParser::PARENC, 0);
}

SrslGrammarParser::ScopeContext* SrslGrammarParser::ForStatementContext::scope() {
  return getRuleContext<SrslGrammarParser::ScopeContext>(0);
}


size_t SrslGrammarParser::ForStatementContext::getRuleIndex() const {
  return SrslGrammarParser::RuleForStatement;
}

void SrslGrammarParser::ForStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SrslGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForStatement(this);
}

void SrslGrammarParser::ForStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SrslGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForStatement(this);
}

SrslGrammarParser::ForStatementContext* SrslGrammarParser::forStatement() {
  ForStatementContext *_localctx = _tracker.createInstance<ForStatementContext>(_ctx, getState());
  enterRule(_localctx, 6, SrslGrammarParser::RuleForStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(113);
    match(SrslGrammarParser::FOR);
    setState(114);
    match(SrslGrammarParser::PARENO);
    setState(115);
    statement();
    setState(116);
    expression(0);
    setState(117);
    match(SrslGrammarParser::EOL);
    setState(118);
    expression(0);
    setState(119);
    match(SrslGrammarParser::PARENC);
    setState(120);
    scope();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhileStatementContext ------------------------------------------------------------------

SrslGrammarParser::WhileStatementContext::WhileStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SrslGrammarParser::WhileStatementContext::WHILE() {
  return getToken(SrslGrammarParser::WHILE, 0);
}

tree::TerminalNode* SrslGrammarParser::WhileStatementContext::PARENO() {
  return getToken(SrslGrammarParser::PARENO, 0);
}

SrslGrammarParser::ExpressionContext* SrslGrammarParser::WhileStatementContext::expression() {
  return getRuleContext<SrslGrammarParser::ExpressionContext>(0);
}

tree::TerminalNode* SrslGrammarParser::WhileStatementContext::PARENC() {
  return getToken(SrslGrammarParser::PARENC, 0);
}

SrslGrammarParser::ScopeContext* SrslGrammarParser::WhileStatementContext::scope() {
  return getRuleContext<SrslGrammarParser::ScopeContext>(0);
}


size_t SrslGrammarParser::WhileStatementContext::getRuleIndex() const {
  return SrslGrammarParser::RuleWhileStatement;
}

void SrslGrammarParser::WhileStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SrslGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhileStatement(this);
}

void SrslGrammarParser::WhileStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SrslGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhileStatement(this);
}

SrslGrammarParser::WhileStatementContext* SrslGrammarParser::whileStatement() {
  WhileStatementContext *_localctx = _tracker.createInstance<WhileStatementContext>(_ctx, getState());
  enterRule(_localctx, 8, SrslGrammarParser::RuleWhileStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(122);
    match(SrslGrammarParser::WHILE);
    setState(123);
    match(SrslGrammarParser::PARENO);
    setState(124);
    expression(0);
    setState(125);
    match(SrslGrammarParser::PARENC);
    setState(126);
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
  enterRule(_localctx, 10, SrslGrammarParser::RuleIfStatement);
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
    setState(128);
    match(SrslGrammarParser::IF);
    setState(129);
    match(SrslGrammarParser::PARENO);
    setState(130);
    expression(0);
    setState(131);
    match(SrslGrammarParser::PARENC);
    setState(132);
    scope();
    setState(134);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SrslGrammarParser::ELSE) {
      setState(133);
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
  enterRule(_localctx, 12, SrslGrammarParser::RuleOptionalStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(138);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(136);
      elseStatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(137);
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
  enterRule(_localctx, 14, SrslGrammarParser::RuleElseIfStatement);
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
    setState(140);
    match(SrslGrammarParser::ELSE);
    setState(141);
    match(SrslGrammarParser::IF);
    setState(142);
    match(SrslGrammarParser::PARENO);
    setState(143);
    expression(0);
    setState(144);
    match(SrslGrammarParser::PARENC);
    setState(145);
    scope();
    setState(147);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SrslGrammarParser::ELSE) {
      setState(146);
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
  enterRule(_localctx, 16, SrslGrammarParser::RuleElseStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(149);
    match(SrslGrammarParser::ELSE);
    setState(150);
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
  enterRule(_localctx, 18, SrslGrammarParser::RuleTextureDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(152);
    match(SrslGrammarParser::TEXTURE_TYPES);
    setState(153);
    match(SrslGrammarParser::PARENO);
    setState(154);
    match(SrslGrammarParser::SLOT);
    setState(155);
    match(SrslGrammarParser::ASSIGN);
    setState(156);
    match(SrslGrammarParser::NUMBER);
    setState(157);
    match(SrslGrammarParser::PARENC);
    setState(158);
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
  enterRule(_localctx, 20, SrslGrammarParser::RuleSamplerDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(160);
    match(SrslGrammarParser::SAMPLER_TYPE);
    setState(161);
    match(SrslGrammarParser::PARENO);
    setState(162);
    match(SrslGrammarParser::SLOT);
    setState(163);
    match(SrslGrammarParser::ASSIGN);
    setState(164);
    match(SrslGrammarParser::NUMBER);
    setState(165);
    match(SrslGrammarParser::PARENC);
    setState(166);
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
  enterRule(_localctx, 22, SrslGrammarParser::RuleConstantBufferDeclaration);
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
    setState(168);
    match(SrslGrammarParser::CONSTANT_BUFFER);
    setState(169);
    match(SrslGrammarParser::PARENO);
    setState(170);
    match(SrslGrammarParser::SLOT);
    setState(171);
    match(SrslGrammarParser::ASSIGN);
    setState(172);
    match(SrslGrammarParser::NUMBER);
    setState(173);
    match(SrslGrammarParser::PARENC);
    setState(174);
    match(SrslGrammarParser::VAR_NAME);
    setState(175);
    match(SrslGrammarParser::CBRACKO);
    setState(181);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 8796093547008) != 0) {
      setState(176);
      newVariable();
      setState(177);
      match(SrslGrammarParser::EOL);
      setState(183);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(184);
    match(SrslGrammarParser::CBRACKC);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ShaderInputContext ------------------------------------------------------------------

SrslGrammarParser::ShaderInputContext::ShaderInputContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SrslGrammarParser::ShaderInputContext::SHADER_INPUT() {
  return getToken(SrslGrammarParser::SHADER_INPUT, 0);
}

std::vector<tree::TerminalNode *> SrslGrammarParser::ShaderInputContext::VAR_NAME() {
  return getTokens(SrslGrammarParser::VAR_NAME);
}

tree::TerminalNode* SrslGrammarParser::ShaderInputContext::VAR_NAME(size_t i) {
  return getToken(SrslGrammarParser::VAR_NAME, i);
}

tree::TerminalNode* SrslGrammarParser::ShaderInputContext::CBRACKO() {
  return getToken(SrslGrammarParser::CBRACKO, 0);
}

tree::TerminalNode* SrslGrammarParser::ShaderInputContext::CBRACKC() {
  return getToken(SrslGrammarParser::CBRACKC, 0);
}

std::vector<SrslGrammarParser::NewVariableContext *> SrslGrammarParser::ShaderInputContext::newVariable() {
  return getRuleContexts<SrslGrammarParser::NewVariableContext>();
}

SrslGrammarParser::NewVariableContext* SrslGrammarParser::ShaderInputContext::newVariable(size_t i) {
  return getRuleContext<SrslGrammarParser::NewVariableContext>(i);
}

std::vector<tree::TerminalNode *> SrslGrammarParser::ShaderInputContext::COLON() {
  return getTokens(SrslGrammarParser::COLON);
}

tree::TerminalNode* SrslGrammarParser::ShaderInputContext::COLON(size_t i) {
  return getToken(SrslGrammarParser::COLON, i);
}

std::vector<tree::TerminalNode *> SrslGrammarParser::ShaderInputContext::EOL() {
  return getTokens(SrslGrammarParser::EOL);
}

tree::TerminalNode* SrslGrammarParser::ShaderInputContext::EOL(size_t i) {
  return getToken(SrslGrammarParser::EOL, i);
}


size_t SrslGrammarParser::ShaderInputContext::getRuleIndex() const {
  return SrslGrammarParser::RuleShaderInput;
}

void SrslGrammarParser::ShaderInputContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SrslGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterShaderInput(this);
}

void SrslGrammarParser::ShaderInputContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SrslGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitShaderInput(this);
}

SrslGrammarParser::ShaderInputContext* SrslGrammarParser::shaderInput() {
  ShaderInputContext *_localctx = _tracker.createInstance<ShaderInputContext>(_ctx, getState());
  enterRule(_localctx, 24, SrslGrammarParser::RuleShaderInput);
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
    setState(186);
    match(SrslGrammarParser::SHADER_INPUT);
    setState(187);
    match(SrslGrammarParser::VAR_NAME);
    setState(188);
    match(SrslGrammarParser::CBRACKO);
    setState(196);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 8796093547008) != 0) {
      setState(189);
      newVariable();
      setState(190);
      match(SrslGrammarParser::COLON);
      setState(191);
      match(SrslGrammarParser::VAR_NAME);
      setState(192);
      match(SrslGrammarParser::EOL);
      setState(198);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(199);
    match(SrslGrammarParser::CBRACKC);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ShaderOutputContext ------------------------------------------------------------------

SrslGrammarParser::ShaderOutputContext::ShaderOutputContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SrslGrammarParser::ShaderOutputContext::SHADER_OUTPUT() {
  return getToken(SrslGrammarParser::SHADER_OUTPUT, 0);
}

std::vector<tree::TerminalNode *> SrslGrammarParser::ShaderOutputContext::VAR_NAME() {
  return getTokens(SrslGrammarParser::VAR_NAME);
}

tree::TerminalNode* SrslGrammarParser::ShaderOutputContext::VAR_NAME(size_t i) {
  return getToken(SrslGrammarParser::VAR_NAME, i);
}

tree::TerminalNode* SrslGrammarParser::ShaderOutputContext::CBRACKO() {
  return getToken(SrslGrammarParser::CBRACKO, 0);
}

tree::TerminalNode* SrslGrammarParser::ShaderOutputContext::CBRACKC() {
  return getToken(SrslGrammarParser::CBRACKC, 0);
}

std::vector<SrslGrammarParser::NewVariableContext *> SrslGrammarParser::ShaderOutputContext::newVariable() {
  return getRuleContexts<SrslGrammarParser::NewVariableContext>();
}

SrslGrammarParser::NewVariableContext* SrslGrammarParser::ShaderOutputContext::newVariable(size_t i) {
  return getRuleContext<SrslGrammarParser::NewVariableContext>(i);
}

std::vector<tree::TerminalNode *> SrslGrammarParser::ShaderOutputContext::COLON() {
  return getTokens(SrslGrammarParser::COLON);
}

tree::TerminalNode* SrslGrammarParser::ShaderOutputContext::COLON(size_t i) {
  return getToken(SrslGrammarParser::COLON, i);
}

std::vector<tree::TerminalNode *> SrslGrammarParser::ShaderOutputContext::EOL() {
  return getTokens(SrslGrammarParser::EOL);
}

tree::TerminalNode* SrslGrammarParser::ShaderOutputContext::EOL(size_t i) {
  return getToken(SrslGrammarParser::EOL, i);
}


size_t SrslGrammarParser::ShaderOutputContext::getRuleIndex() const {
  return SrslGrammarParser::RuleShaderOutput;
}

void SrslGrammarParser::ShaderOutputContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SrslGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterShaderOutput(this);
}

void SrslGrammarParser::ShaderOutputContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SrslGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitShaderOutput(this);
}

SrslGrammarParser::ShaderOutputContext* SrslGrammarParser::shaderOutput() {
  ShaderOutputContext *_localctx = _tracker.createInstance<ShaderOutputContext>(_ctx, getState());
  enterRule(_localctx, 26, SrslGrammarParser::RuleShaderOutput);
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
    setState(201);
    match(SrslGrammarParser::SHADER_OUTPUT);
    setState(202);
    match(SrslGrammarParser::VAR_NAME);
    setState(203);
    match(SrslGrammarParser::CBRACKO);
    setState(211);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 8796093547008) != 0) {
      setState(204);
      newVariable();
      setState(205);
      match(SrslGrammarParser::COLON);
      setState(206);
      match(SrslGrammarParser::VAR_NAME);
      setState(207);
      match(SrslGrammarParser::EOL);
      setState(213);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(214);
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
  enterRule(_localctx, 28, SrslGrammarParser::RuleFunctionDeclaration);
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
    setState(219);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SrslGrammarParser::CONST) {
      setState(216);
      match(SrslGrammarParser::CONST);
      setState(221);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(222);
    _la = _input->LA(1);
    if (!(_la == SrslGrammarParser::TYPE

    || _la == SrslGrammarParser::VAR_NAME)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(223);
    match(SrslGrammarParser::VAR_NAME);
    setState(224);
    match(SrslGrammarParser::PARENO);
    setState(233);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 8796093547008) != 0) {
      setState(225);
      newVariable();
      setState(230);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SrslGrammarParser::COMMA) {
        setState(226);
        match(SrslGrammarParser::COMMA);
        setState(227);
        newVariable();
        setState(232);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(235);
    match(SrslGrammarParser::PARENC);
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
  enterRule(_localctx, 30, SrslGrammarParser::RuleFunctionCall);
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
      ((1ULL << _la) & 16528645292192) != 0) {
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
  enterRule(_localctx, 32, SrslGrammarParser::RuleReturnStatement);
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
    setState(254);
    match(SrslGrammarParser::RETURN);
    setState(256);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 16528645292192) != 0) {
      setState(255);
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
  enterRule(_localctx, 34, SrslGrammarParser::RuleScope);
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
    setState(258);
    match(SrslGrammarParser::CBRACKO);
    setState(262);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 16528653147808) != 0) {
      setState(259);
      statement();
      setState(264);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(265);
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
  enterRule(_localctx, 36, SrslGrammarParser::RuleStructDeclaration);
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
    setState(267);
    match(SrslGrammarParser::STRUCT);
    setState(268);
    match(SrslGrammarParser::VAR_NAME);
    setState(269);
    match(SrslGrammarParser::CBRACKO);
    setState(275);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 8796093547008) != 0) {
      setState(270);
      newVariable();
      setState(271);
      match(SrslGrammarParser::EOL);
      setState(277);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(278);
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

SrslGrammarParser::ExpressionContext* SrslGrammarParser::AssignmentContext::expression() {
  return getRuleContext<SrslGrammarParser::ExpressionContext>(0);
}

tree::TerminalNode* SrslGrammarParser::AssignmentContext::ASSIGN() {
  return getToken(SrslGrammarParser::ASSIGN, 0);
}

tree::TerminalNode* SrslGrammarParser::AssignmentContext::ASSIGN_OP() {
  return getToken(SrslGrammarParser::ASSIGN_OP, 0);
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
  enterRule(_localctx, 38, SrslGrammarParser::RuleAssignment);
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
    setState(280);
    lvalue();
    setState(281);
    _la = _input->LA(1);
    if (!(_la == SrslGrammarParser::ASSIGN

    || _la == SrslGrammarParser::ASSIGN_OP)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(282);
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
  size_t startState = 40;
  enterRecursionRule(_localctx, 40, SrslGrammarParser::RuleExpression, precedence);

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
    setState(296);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SrslGrammarParser::PARENO: {
        setState(285);
        match(SrslGrammarParser::PARENO);
        setState(286);
        expression(0);
        setState(287);
        match(SrslGrammarParser::PARENC);
        break;
      }

      case SrslGrammarParser::CREMENT: {
        setState(289);
        match(SrslGrammarParser::CREMENT);
        setState(290);
        expression(5);
        break;
      }

      case SrslGrammarParser::NOT: {
        setState(291);
        match(SrslGrammarParser::NOT);
        setState(292);
        expression(3);
        break;
      }

      case SrslGrammarParser::MINUS: {
        setState(293);
        match(SrslGrammarParser::MINUS);
        setState(294);
        expression(2);
        break;
      }

      case SrslGrammarParser::CBRACKO:
      case SrslGrammarParser::TYPE:
      case SrslGrammarParser::FLOATING_POINT:
      case SrslGrammarParser::NUMBER:
      case SrslGrammarParser::BOOL:
      case SrslGrammarParser::VAR_NAME: {
        setState(295);
        rvalue();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(311);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(309);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(298);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(299);
          _la = _input->LA(1);
          if (!(_la == SrslGrammarParser::MULTIPLY

          || _la == SrslGrammarParser::DIVIDE)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(300);
          expression(10);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(301);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(302);
          _la = _input->LA(1);
          if (!(_la == SrslGrammarParser::PLUS

          || _la == SrslGrammarParser::MINUS)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(303);
          expression(9);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(304);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(305);
          match(SrslGrammarParser::OPERATION);
          setState(306);
          expression(8);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(307);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(308);
          match(SrslGrammarParser::CREMENT);
          break;
        }

        default:
          break;
        } 
      }
      setState(313);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx);
    }
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
  enterRule(_localctx, 42, SrslGrammarParser::RuleLvalue);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(317);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(314);
      newVariable();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(315);
      variable();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(316);
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
  enterRule(_localctx, 44, SrslGrammarParser::RuleRvalue);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(325);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(319);
      variable();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(320);
      constant();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(321);
      functionCall();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(322);
      typeConstructor();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(323);
      memberAccess();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(324);
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
  enterRule(_localctx, 46, SrslGrammarParser::RuleMemberAccess);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(329);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
    case 1: {
      setState(327);
      variable();
      break;
    }

    case 2: {
      setState(328);
      functionCall();
      break;
    }

    default:
      break;
    }
    setState(331);
    match(SrslGrammarParser::DOT);
    setState(334);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
    case 1: {
      setState(332);
      variable();
      break;
    }

    case 2: {
      setState(333);
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
  enterRule(_localctx, 48, SrslGrammarParser::RuleNewVariable);
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
    setState(339);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SrslGrammarParser::CONST) {
      setState(336);
      match(SrslGrammarParser::CONST);
      setState(341);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(342);
    _la = _input->LA(1);
    if (!(_la == SrslGrammarParser::TYPE

    || _la == SrslGrammarParser::VAR_NAME)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(343);
    match(SrslGrammarParser::VAR_NAME);
    setState(349);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SrslGrammarParser::SBRACKO) {
      setState(344);
      match(SrslGrammarParser::SBRACKO);
      setState(345);
      match(SrslGrammarParser::NUMBER);
      setState(346);
      match(SrslGrammarParser::SBRACKC);
      setState(351);
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
  enterRule(_localctx, 50, SrslGrammarParser::RuleVariable);

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
    setState(352);
    match(SrslGrammarParser::VAR_NAME);
    setState(359);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(353);
        match(SrslGrammarParser::SBRACKO);
        setState(354);
        expression(0);
        setState(355);
        match(SrslGrammarParser::SBRACKC); 
      }
      setState(361);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx);
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

tree::TerminalNode* SrslGrammarParser::ConstantContext::BOOL() {
  return getToken(SrslGrammarParser::BOOL, 0);
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
  enterRule(_localctx, 52, SrslGrammarParser::RuleConstant);
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
    setState(362);
    _la = _input->LA(1);
    if (!(((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 4399657123840) != 0)) {
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
  enterRule(_localctx, 54, SrslGrammarParser::RuleControlFlow);

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
  enterRule(_localctx, 56, SrslGrammarParser::RuleTypeConstructor);
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
    setState(366);
    match(SrslGrammarParser::TYPE);
    setState(367);
    match(SrslGrammarParser::PARENO);
    setState(368);
    expression(0);
    setState(373);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SrslGrammarParser::COMMA) {
      setState(369);
      match(SrslGrammarParser::COMMA);
      setState(370);
      expression(0);
      setState(375);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(376);
    match(SrslGrammarParser::PARENC);
   
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
  enterRule(_localctx, 58, SrslGrammarParser::RuleInitializerList);
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
    setState(378);
    match(SrslGrammarParser::CBRACKO);
    setState(387);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 16528645292192) != 0) {
      setState(379);
      expression(0);
      setState(384);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SrslGrammarParser::COMMA) {
        setState(380);
        match(SrslGrammarParser::COMMA);
        setState(381);
        expression(0);
        setState(386);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(389);
    match(SrslGrammarParser::CBRACKC);
   
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
    case 20: return expressionSempred(antlrcpp::downCast<ExpressionContext *>(context), predicateIndex);

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
