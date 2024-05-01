
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
      "functionCall", "returnStatement", "scope", "structDeclaration", "assignment", 
      "expression", "initializerList", "lvalue", "rvalue", "memberAccess", 
      "newVariable", "variable", "constant", "controlFlow", "typeConstructor"
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
  	4,1,44,388,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,1,0,1,0,1,0,1,0,5,0,67,8,0,10,0,12,0,70,9,0,1,
  	1,1,1,1,1,1,1,1,2,1,2,1,3,1,3,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,
  	1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,
  	4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,3,4,117,8,4,1,5,1,5,1,5,1,5,1,5,
  	1,5,1,5,1,5,1,5,1,6,1,6,1,6,1,6,1,6,1,6,1,7,1,7,1,7,1,7,1,7,1,7,3,7,140,
  	8,7,1,8,1,8,3,8,144,8,8,1,9,1,9,1,9,1,9,1,9,1,9,1,9,3,9,153,8,9,1,10,
  	1,10,1,10,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,12,1,12,1,12,1,12,
  	1,12,1,12,1,12,1,12,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,
  	1,13,5,13,185,8,13,10,13,12,13,188,9,13,1,13,1,13,1,14,1,14,1,14,1,14,
  	1,14,1,14,5,14,198,8,14,10,14,12,14,201,9,14,1,14,1,14,1,15,5,15,206,
  	8,15,10,15,12,15,209,9,15,1,15,1,15,1,15,1,15,1,15,1,15,5,15,217,8,15,
  	10,15,12,15,220,9,15,3,15,222,8,15,1,15,1,15,1,15,3,15,227,8,15,1,15,
  	1,15,3,15,231,8,15,1,16,1,16,1,16,1,16,1,16,5,16,238,8,16,10,16,12,16,
  	241,9,16,3,16,243,8,16,1,16,1,16,1,17,1,17,3,17,249,8,17,1,18,1,18,5,
  	18,253,8,18,10,18,12,18,256,9,18,1,18,1,18,1,19,1,19,1,19,1,19,1,19,1,
  	19,5,19,266,8,19,10,19,12,19,269,9,19,1,19,1,19,1,20,1,20,1,20,1,20,1,
  	21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,3,21,289,8,
  	21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,5,21,302,8,
  	21,10,21,12,21,305,9,21,1,22,1,22,1,22,1,22,5,22,311,8,22,10,22,12,22,
  	314,9,22,3,22,316,8,22,1,22,1,22,1,23,1,23,1,23,3,23,323,8,23,1,24,1,
  	24,1,24,1,24,1,24,1,24,3,24,331,8,24,1,25,1,25,3,25,335,8,25,1,25,1,25,
  	1,25,3,25,340,8,25,1,26,5,26,343,8,26,10,26,12,26,346,9,26,1,26,1,26,
  	1,26,1,26,1,26,5,26,353,8,26,10,26,12,26,356,9,26,1,26,1,26,3,26,360,
  	8,26,1,27,1,27,1,27,1,27,1,27,5,27,367,8,27,10,27,12,27,370,9,27,1,28,
  	1,28,1,29,1,29,1,30,1,30,1,30,1,30,1,30,5,30,381,8,30,10,30,12,30,384,
  	9,30,1,30,1,30,1,30,0,1,42,31,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,
  	30,32,34,36,38,40,42,44,46,48,50,52,54,56,58,60,0,5,1,0,17,18,2,0,20,
  	20,44,44,1,0,39,40,1,0,37,38,1,0,32,33,412,0,62,1,0,0,0,2,71,1,0,0,0,
  	4,75,1,0,0,0,6,77,1,0,0,0,8,116,1,0,0,0,10,118,1,0,0,0,12,127,1,0,0,0,
  	14,133,1,0,0,0,16,143,1,0,0,0,18,145,1,0,0,0,20,154,1,0,0,0,22,157,1,
  	0,0,0,24,165,1,0,0,0,26,173,1,0,0,0,28,191,1,0,0,0,30,207,1,0,0,0,32,
  	232,1,0,0,0,34,246,1,0,0,0,36,250,1,0,0,0,38,259,1,0,0,0,40,272,1,0,0,
  	0,42,288,1,0,0,0,44,306,1,0,0,0,46,322,1,0,0,0,48,330,1,0,0,0,50,334,
  	1,0,0,0,52,344,1,0,0,0,54,361,1,0,0,0,56,371,1,0,0,0,58,373,1,0,0,0,60,
  	375,1,0,0,0,62,68,3,2,1,0,63,67,3,4,2,0,64,67,3,6,3,0,65,67,3,8,4,0,66,
  	63,1,0,0,0,66,64,1,0,0,0,66,65,1,0,0,0,67,70,1,0,0,0,68,66,1,0,0,0,68,
  	69,1,0,0,0,69,1,1,0,0,0,70,68,1,0,0,0,71,72,5,27,0,0,72,73,5,28,0,0,73,
  	74,5,29,0,0,74,3,1,0,0,0,75,76,5,26,0,0,76,5,1,0,0,0,77,78,5,25,0,0,78,
  	7,1,0,0,0,79,80,3,46,23,0,80,81,5,29,0,0,81,117,1,0,0,0,82,83,3,40,20,
  	0,83,84,5,29,0,0,84,117,1,0,0,0,85,86,3,42,21,0,86,87,5,29,0,0,87,117,
  	1,0,0,0,88,89,3,58,29,0,89,90,5,29,0,0,90,117,1,0,0,0,91,117,3,10,5,0,
  	92,117,3,12,6,0,93,117,3,14,7,0,94,95,3,34,17,0,95,96,5,29,0,0,96,117,
  	1,0,0,0,97,117,3,30,15,0,98,99,3,32,16,0,99,100,5,29,0,0,100,117,1,0,
  	0,0,101,102,3,38,19,0,102,103,5,29,0,0,103,117,1,0,0,0,104,105,3,24,12,
  	0,105,106,5,29,0,0,106,117,1,0,0,0,107,108,3,22,11,0,108,109,5,29,0,0,
  	109,117,1,0,0,0,110,111,3,28,14,0,111,112,5,29,0,0,112,117,1,0,0,0,113,
  	114,3,26,13,0,114,115,5,29,0,0,115,117,1,0,0,0,116,79,1,0,0,0,116,82,
  	1,0,0,0,116,85,1,0,0,0,116,88,1,0,0,0,116,91,1,0,0,0,116,92,1,0,0,0,116,
  	93,1,0,0,0,116,94,1,0,0,0,116,97,1,0,0,0,116,98,1,0,0,0,116,101,1,0,0,
  	0,116,104,1,0,0,0,116,107,1,0,0,0,116,110,1,0,0,0,116,113,1,0,0,0,117,
  	9,1,0,0,0,118,119,5,9,0,0,119,120,5,6,0,0,120,121,3,8,4,0,121,122,3,42,
  	21,0,122,123,5,29,0,0,123,124,3,42,21,0,124,125,5,7,0,0,125,126,3,36,
  	18,0,126,11,1,0,0,0,127,128,5,10,0,0,128,129,5,6,0,0,129,130,3,42,21,
  	0,130,131,5,7,0,0,131,132,3,36,18,0,132,13,1,0,0,0,133,134,5,11,0,0,134,
  	135,5,6,0,0,135,136,3,42,21,0,136,137,5,7,0,0,137,139,3,36,18,0,138,140,
  	3,16,8,0,139,138,1,0,0,0,139,140,1,0,0,0,140,15,1,0,0,0,141,144,3,20,
  	10,0,142,144,3,18,9,0,143,141,1,0,0,0,143,142,1,0,0,0,144,17,1,0,0,0,
  	145,146,5,12,0,0,146,147,5,11,0,0,147,148,5,6,0,0,148,149,3,42,21,0,149,
  	150,5,7,0,0,150,152,3,36,18,0,151,153,3,16,8,0,152,151,1,0,0,0,152,153,
  	1,0,0,0,153,19,1,0,0,0,154,155,5,12,0,0,155,156,3,36,18,0,156,21,1,0,
  	0,0,157,158,5,21,0,0,158,159,5,6,0,0,159,160,5,24,0,0,160,161,5,34,0,
  	0,161,162,5,33,0,0,162,163,5,7,0,0,163,164,5,44,0,0,164,23,1,0,0,0,165,
  	166,5,22,0,0,166,167,5,6,0,0,167,168,5,24,0,0,168,169,5,34,0,0,169,170,
  	5,33,0,0,170,171,5,7,0,0,171,172,5,44,0,0,172,25,1,0,0,0,173,174,5,23,
  	0,0,174,175,5,6,0,0,175,176,5,24,0,0,176,177,5,34,0,0,177,178,5,33,0,
  	0,178,179,5,7,0,0,179,180,5,44,0,0,180,186,5,4,0,0,181,182,3,52,26,0,
  	182,183,5,29,0,0,183,185,1,0,0,0,184,181,1,0,0,0,185,188,1,0,0,0,186,
  	184,1,0,0,0,186,187,1,0,0,0,187,189,1,0,0,0,188,186,1,0,0,0,189,190,5,
  	5,0,0,190,27,1,0,0,0,191,192,7,0,0,0,192,193,5,44,0,0,193,199,5,4,0,0,
  	194,195,3,52,26,0,195,196,5,29,0,0,196,198,1,0,0,0,197,194,1,0,0,0,198,
  	201,1,0,0,0,199,197,1,0,0,0,199,200,1,0,0,0,200,202,1,0,0,0,201,199,1,
  	0,0,0,202,203,5,5,0,0,203,29,1,0,0,0,204,206,5,8,0,0,205,204,1,0,0,0,
  	206,209,1,0,0,0,207,205,1,0,0,0,207,208,1,0,0,0,208,210,1,0,0,0,209,207,
  	1,0,0,0,210,211,7,1,0,0,211,212,5,44,0,0,212,221,5,6,0,0,213,218,3,52,
  	26,0,214,215,5,30,0,0,215,217,3,52,26,0,216,214,1,0,0,0,217,220,1,0,0,
  	0,218,216,1,0,0,0,218,219,1,0,0,0,219,222,1,0,0,0,220,218,1,0,0,0,221,
  	213,1,0,0,0,221,222,1,0,0,0,222,223,1,0,0,0,223,226,5,7,0,0,224,225,5,
  	31,0,0,225,227,5,44,0,0,226,224,1,0,0,0,226,227,1,0,0,0,227,230,1,0,0,
  	0,228,231,3,36,18,0,229,231,5,29,0,0,230,228,1,0,0,0,230,229,1,0,0,0,
  	231,31,1,0,0,0,232,233,5,44,0,0,233,242,5,6,0,0,234,239,3,42,21,0,235,
  	236,5,30,0,0,236,238,3,42,21,0,237,235,1,0,0,0,238,241,1,0,0,0,239,237,
  	1,0,0,0,239,240,1,0,0,0,240,243,1,0,0,0,241,239,1,0,0,0,242,234,1,0,0,
  	0,242,243,1,0,0,0,243,244,1,0,0,0,244,245,5,7,0,0,245,33,1,0,0,0,246,
  	248,5,14,0,0,247,249,3,42,21,0,248,247,1,0,0,0,248,249,1,0,0,0,249,35,
  	1,0,0,0,250,254,5,4,0,0,251,253,3,8,4,0,252,251,1,0,0,0,253,256,1,0,0,
  	0,254,252,1,0,0,0,254,255,1,0,0,0,255,257,1,0,0,0,256,254,1,0,0,0,257,
  	258,5,5,0,0,258,37,1,0,0,0,259,260,5,16,0,0,260,261,5,44,0,0,261,267,
  	5,4,0,0,262,263,3,52,26,0,263,264,5,29,0,0,264,266,1,0,0,0,265,262,1,
  	0,0,0,266,269,1,0,0,0,267,265,1,0,0,0,267,268,1,0,0,0,268,270,1,0,0,0,
  	269,267,1,0,0,0,270,271,5,5,0,0,271,39,1,0,0,0,272,273,3,46,23,0,273,
  	274,5,34,0,0,274,275,3,42,21,0,275,41,1,0,0,0,276,277,6,21,-1,0,277,278,
  	5,6,0,0,278,279,3,42,21,0,279,280,5,7,0,0,280,289,1,0,0,0,281,282,5,42,
  	0,0,282,289,3,42,21,5,283,284,5,43,0,0,284,289,3,42,21,3,285,286,5,38,
  	0,0,286,289,3,42,21,2,287,289,3,48,24,0,288,276,1,0,0,0,288,281,1,0,0,
  	0,288,283,1,0,0,0,288,285,1,0,0,0,288,287,1,0,0,0,289,303,1,0,0,0,290,
  	291,10,9,0,0,291,292,7,2,0,0,292,302,3,42,21,10,293,294,10,8,0,0,294,
  	295,7,3,0,0,295,302,3,42,21,9,296,297,10,7,0,0,297,298,5,41,0,0,298,302,
  	3,42,21,8,299,300,10,4,0,0,300,302,5,42,0,0,301,290,1,0,0,0,301,293,1,
  	0,0,0,301,296,1,0,0,0,301,299,1,0,0,0,302,305,1,0,0,0,303,301,1,0,0,0,
  	303,304,1,0,0,0,304,43,1,0,0,0,305,303,1,0,0,0,306,315,5,4,0,0,307,312,
  	3,42,21,0,308,309,5,30,0,0,309,311,3,42,21,0,310,308,1,0,0,0,311,314,
  	1,0,0,0,312,310,1,0,0,0,312,313,1,0,0,0,313,316,1,0,0,0,314,312,1,0,0,
  	0,315,307,1,0,0,0,315,316,1,0,0,0,316,317,1,0,0,0,317,318,5,5,0,0,318,
  	45,1,0,0,0,319,323,3,52,26,0,320,323,3,54,27,0,321,323,3,50,25,0,322,
  	319,1,0,0,0,322,320,1,0,0,0,322,321,1,0,0,0,323,47,1,0,0,0,324,331,3,
  	54,27,0,325,331,3,56,28,0,326,331,3,32,16,0,327,331,3,60,30,0,328,331,
  	3,50,25,0,329,331,3,44,22,0,330,324,1,0,0,0,330,325,1,0,0,0,330,326,1,
  	0,0,0,330,327,1,0,0,0,330,328,1,0,0,0,330,329,1,0,0,0,331,49,1,0,0,0,
  	332,335,3,54,27,0,333,335,3,32,16,0,334,332,1,0,0,0,334,333,1,0,0,0,335,
  	336,1,0,0,0,336,339,5,35,0,0,337,340,3,54,27,0,338,340,3,50,25,0,339,
  	337,1,0,0,0,339,338,1,0,0,0,340,51,1,0,0,0,341,343,5,8,0,0,342,341,1,
  	0,0,0,343,346,1,0,0,0,344,342,1,0,0,0,344,345,1,0,0,0,345,347,1,0,0,0,
  	346,344,1,0,0,0,347,348,7,1,0,0,348,354,5,44,0,0,349,350,5,2,0,0,350,
  	351,5,33,0,0,351,353,5,3,0,0,352,349,1,0,0,0,353,356,1,0,0,0,354,352,
  	1,0,0,0,354,355,1,0,0,0,355,359,1,0,0,0,356,354,1,0,0,0,357,358,5,31,
  	0,0,358,360,5,44,0,0,359,357,1,0,0,0,359,360,1,0,0,0,360,53,1,0,0,0,361,
  	368,5,44,0,0,362,363,5,2,0,0,363,364,3,42,21,0,364,365,5,3,0,0,365,367,
  	1,0,0,0,366,362,1,0,0,0,367,370,1,0,0,0,368,366,1,0,0,0,368,369,1,0,0,
  	0,369,55,1,0,0,0,370,368,1,0,0,0,371,372,7,4,0,0,372,57,1,0,0,0,373,374,
  	5,15,0,0,374,59,1,0,0,0,375,376,5,20,0,0,376,377,5,6,0,0,377,382,3,42,
  	21,0,378,379,5,30,0,0,379,381,3,42,21,0,380,378,1,0,0,0,381,384,1,0,0,
  	0,382,380,1,0,0,0,382,383,1,0,0,0,383,385,1,0,0,0,384,382,1,0,0,0,385,
  	386,5,7,0,0,386,61,1,0,0,0,32,66,68,116,139,143,152,186,199,207,218,221,
  	226,230,239,242,248,254,267,288,301,303,312,315,322,330,334,339,344,354,
  	359,368,382
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
    setState(62);
    shaderTypeSpec();
    setState(68);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 31074205290320) != 0) {
      setState(66);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case SrslGrammarParser::MCOMMENT: {
          setState(63);
          multilineComment();
          break;
        }

        case SrslGrammarParser::COMMENT: {
          setState(64);
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
        case SrslGrammarParser::MINUS:
        case SrslGrammarParser::CREMENT:
        case SrslGrammarParser::NOT:
        case SrslGrammarParser::VAR_NAME: {
          setState(65);
          statement();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(70);
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
    setState(71);
    match(SrslGrammarParser::SHADER_TYPE_LIT);
    setState(72);
    match(SrslGrammarParser::SHADER_TYPE);
    setState(73);
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
    setState(75);
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
    setState(77);
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
    setState(116);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(79);
      lvalue();
      setState(80);
      match(SrslGrammarParser::EOL);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(82);
      assignment();
      setState(83);
      match(SrslGrammarParser::EOL);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(85);
      expression(0);
      setState(86);
      match(SrslGrammarParser::EOL);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(88);
      controlFlow();
      setState(89);
      match(SrslGrammarParser::EOL);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(91);
      forLoop();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(92);
      whileLoop();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(93);
      ifStatement();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(94);
      returnStatement();
      setState(95);
      match(SrslGrammarParser::EOL);
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(97);
      functionDeclaration();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(98);
      functionCall();
      setState(99);
      match(SrslGrammarParser::EOL);
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(101);
      structDeclaration();
      setState(102);
      match(SrslGrammarParser::EOL);
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(104);
      samplerDeclaration();
      setState(105);
      match(SrslGrammarParser::EOL);
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(107);
      textureDeclaration();
      setState(108);
      match(SrslGrammarParser::EOL);
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(110);
      shaderInterface();
      setState(111);
      match(SrslGrammarParser::EOL);
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(113);
      constantBufferDeclaration();
      setState(114);
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
    setState(118);
    match(SrslGrammarParser::FOR);
    setState(119);
    match(SrslGrammarParser::PARENO);
    setState(120);
    statement();
    setState(121);
    expression(0);
    setState(122);
    match(SrslGrammarParser::EOL);
    setState(123);
    expression(0);
    setState(124);
    match(SrslGrammarParser::PARENC);
    setState(125);
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
    setState(127);
    match(SrslGrammarParser::WHILE);
    setState(128);
    match(SrslGrammarParser::PARENO);
    setState(129);
    expression(0);
    setState(130);
    match(SrslGrammarParser::PARENC);
    setState(131);
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
    setState(133);
    match(SrslGrammarParser::IF);
    setState(134);
    match(SrslGrammarParser::PARENO);
    setState(135);
    expression(0);
    setState(136);
    match(SrslGrammarParser::PARENC);
    setState(137);
    scope();
    setState(139);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SrslGrammarParser::ELSE) {
      setState(138);
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
    setState(143);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(141);
      elseStatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(142);
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
    setState(145);
    match(SrslGrammarParser::ELSE);
    setState(146);
    match(SrslGrammarParser::IF);
    setState(147);
    match(SrslGrammarParser::PARENO);
    setState(148);
    expression(0);
    setState(149);
    match(SrslGrammarParser::PARENC);
    setState(150);
    scope();
    setState(152);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SrslGrammarParser::ELSE) {
      setState(151);
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
    setState(154);
    match(SrslGrammarParser::ELSE);
    setState(155);
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
    setState(157);
    match(SrslGrammarParser::TEXTURE_TYPES);
    setState(158);
    match(SrslGrammarParser::PARENO);
    setState(159);
    match(SrslGrammarParser::SLOT);
    setState(160);
    match(SrslGrammarParser::ASSIGN);
    setState(161);
    match(SrslGrammarParser::NUMBER);
    setState(162);
    match(SrslGrammarParser::PARENC);
    setState(163);
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
    setState(165);
    match(SrslGrammarParser::SAMPLER_TYPE);
    setState(166);
    match(SrslGrammarParser::PARENO);
    setState(167);
    match(SrslGrammarParser::SLOT);
    setState(168);
    match(SrslGrammarParser::ASSIGN);
    setState(169);
    match(SrslGrammarParser::NUMBER);
    setState(170);
    match(SrslGrammarParser::PARENC);
    setState(171);
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
    setState(173);
    match(SrslGrammarParser::CONSTANT_BUFFER);
    setState(174);
    match(SrslGrammarParser::PARENO);
    setState(175);
    match(SrslGrammarParser::SLOT);
    setState(176);
    match(SrslGrammarParser::ASSIGN);
    setState(177);
    match(SrslGrammarParser::NUMBER);
    setState(178);
    match(SrslGrammarParser::PARENC);
    setState(179);
    match(SrslGrammarParser::VAR_NAME);
    setState(180);
    match(SrslGrammarParser::CBRACKO);
    setState(186);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 17592187093248) != 0) {
      setState(181);
      newVariable();
      setState(182);
      match(SrslGrammarParser::EOL);
      setState(188);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(189);
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
    setState(191);
    _la = _input->LA(1);
    if (!(_la == SrslGrammarParser::SHADER_INPUT

    || _la == SrslGrammarParser::SHADER_OUTPUT)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(192);
    match(SrslGrammarParser::VAR_NAME);
    setState(193);
    match(SrslGrammarParser::CBRACKO);
    setState(199);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 17592187093248) != 0) {
      setState(194);
      newVariable();
      setState(195);
      match(SrslGrammarParser::EOL);
      setState(201);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(202);
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
    setState(207);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SrslGrammarParser::CONST) {
      setState(204);
      match(SrslGrammarParser::CONST);
      setState(209);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(210);
    _la = _input->LA(1);
    if (!(_la == SrslGrammarParser::TYPE

    || _la == SrslGrammarParser::VAR_NAME)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(211);
    match(SrslGrammarParser::VAR_NAME);
    setState(212);
    match(SrslGrammarParser::PARENO);
    setState(221);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 17592187093248) != 0) {
      setState(213);
      newVariable();
      setState(218);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SrslGrammarParser::COMMA) {
        setState(214);
        match(SrslGrammarParser::COMMA);
        setState(215);
        newVariable();
        setState(220);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(223);
    match(SrslGrammarParser::PARENC);
    setState(226);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SrslGrammarParser::COLON) {
      setState(224);
      match(SrslGrammarParser::COLON);
      setState(225);
      match(SrslGrammarParser::VAR_NAME);
    }
    setState(230);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SrslGrammarParser::CBRACKO: {
        setState(228);
        scope();
        break;
      }

      case SrslGrammarParser::EOL: {
        setState(229);
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
    setState(232);
    match(SrslGrammarParser::VAR_NAME);
    setState(233);
    match(SrslGrammarParser::PARENO);
    setState(242);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 31074089435216) != 0) {
      setState(234);
      expression(0);
      setState(239);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SrslGrammarParser::COMMA) {
        setState(235);
        match(SrslGrammarParser::COMMA);
        setState(236);
        expression(0);
        setState(241);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(244);
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
    setState(246);
    match(SrslGrammarParser::RETURN);
    setState(248);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 31074089435216) != 0) {
      setState(247);
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
    setState(250);
    match(SrslGrammarParser::CBRACKO);
    setState(254);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 31074104627024) != 0) {
      setState(251);
      statement();
      setState(256);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(257);
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
    setState(259);
    match(SrslGrammarParser::STRUCT);
    setState(260);
    match(SrslGrammarParser::VAR_NAME);
    setState(261);
    match(SrslGrammarParser::CBRACKO);
    setState(267);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 17592187093248) != 0) {
      setState(262);
      newVariable();
      setState(263);
      match(SrslGrammarParser::EOL);
      setState(269);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(270);
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
  enterRule(_localctx, 40, SrslGrammarParser::RuleAssignment);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(272);
    lvalue();
    setState(273);
    match(SrslGrammarParser::ASSIGN);
    setState(274);
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
  size_t startState = 42;
  enterRecursionRule(_localctx, 42, SrslGrammarParser::RuleExpression, precedence);

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
    setState(288);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SrslGrammarParser::PARENO: {
        setState(277);
        match(SrslGrammarParser::PARENO);
        setState(278);
        expression(0);
        setState(279);
        match(SrslGrammarParser::PARENC);
        break;
      }

      case SrslGrammarParser::CREMENT: {
        setState(281);
        match(SrslGrammarParser::CREMENT);
        setState(282);
        expression(5);
        break;
      }

      case SrslGrammarParser::NOT: {
        setState(283);
        match(SrslGrammarParser::NOT);
        setState(284);
        expression(3);
        break;
      }

      case SrslGrammarParser::MINUS: {
        setState(285);
        match(SrslGrammarParser::MINUS);
        setState(286);
        expression(2);
        break;
      }

      case SrslGrammarParser::CBRACKO:
      case SrslGrammarParser::TYPE:
      case SrslGrammarParser::FLOATING_POINT:
      case SrslGrammarParser::NUMBER:
      case SrslGrammarParser::VAR_NAME: {
        setState(287);
        rvalue();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(303);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(301);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(290);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(291);
          _la = _input->LA(1);
          if (!(_la == SrslGrammarParser::MULTIPLY

          || _la == SrslGrammarParser::DIVIDE)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(292);
          expression(10);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(293);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(294);
          _la = _input->LA(1);
          if (!(_la == SrslGrammarParser::PLUS

          || _la == SrslGrammarParser::MINUS)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(295);
          expression(9);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(296);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(297);
          match(SrslGrammarParser::OPERATION);
          setState(298);
          expression(8);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(299);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(300);
          match(SrslGrammarParser::CREMENT);
          break;
        }

        default:
          break;
        } 
      }
      setState(305);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
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
  enterRule(_localctx, 44, SrslGrammarParser::RuleInitializerList);
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
    setState(306);
    match(SrslGrammarParser::CBRACKO);
    setState(315);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 31074089435216) != 0) {
      setState(307);
      expression(0);
      setState(312);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SrslGrammarParser::COMMA) {
        setState(308);
        match(SrslGrammarParser::COMMA);
        setState(309);
        expression(0);
        setState(314);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(317);
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
  enterRule(_localctx, 46, SrslGrammarParser::RuleLvalue);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(322);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(319);
      newVariable();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(320);
      variable();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(321);
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
  enterRule(_localctx, 48, SrslGrammarParser::RuleRvalue);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(330);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(324);
      variable();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(325);
      constant();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(326);
      functionCall();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(327);
      typeConstructor();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(328);
      memberAccess();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(329);
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
  enterRule(_localctx, 50, SrslGrammarParser::RuleMemberAccess);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(334);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx)) {
    case 1: {
      setState(332);
      variable();
      break;
    }

    case 2: {
      setState(333);
      functionCall();
      break;
    }

    default:
      break;
    }
    setState(336);
    match(SrslGrammarParser::DOT);
    setState(339);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx)) {
    case 1: {
      setState(337);
      variable();
      break;
    }

    case 2: {
      setState(338);
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
  enterRule(_localctx, 52, SrslGrammarParser::RuleNewVariable);
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
    setState(344);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SrslGrammarParser::CONST) {
      setState(341);
      match(SrslGrammarParser::CONST);
      setState(346);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(347);
    _la = _input->LA(1);
    if (!(_la == SrslGrammarParser::TYPE

    || _la == SrslGrammarParser::VAR_NAME)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(348);
    match(SrslGrammarParser::VAR_NAME);
    setState(354);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SrslGrammarParser::SBRACKO) {
      setState(349);
      match(SrslGrammarParser::SBRACKO);
      setState(350);
      match(SrslGrammarParser::NUMBER);
      setState(351);
      match(SrslGrammarParser::SBRACKC);
      setState(356);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(359);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SrslGrammarParser::COLON) {
      setState(357);
      match(SrslGrammarParser::COLON);
      setState(358);
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
  enterRule(_localctx, 54, SrslGrammarParser::RuleVariable);

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
    setState(361);
    match(SrslGrammarParser::VAR_NAME);
    setState(368);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(362);
        match(SrslGrammarParser::SBRACKO);
        setState(363);
        expression(0);
        setState(364);
        match(SrslGrammarParser::SBRACKC); 
      }
      setState(370);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx);
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
  enterRule(_localctx, 56, SrslGrammarParser::RuleConstant);
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
    setState(371);
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
  enterRule(_localctx, 58, SrslGrammarParser::RuleControlFlow);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(373);
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
  enterRule(_localctx, 60, SrslGrammarParser::RuleTypeConstructor);
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
    setState(375);
    match(SrslGrammarParser::TYPE);
    setState(376);
    match(SrslGrammarParser::PARENO);
    setState(377);
    expression(0);
    setState(382);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SrslGrammarParser::COMMA) {
      setState(378);
      match(SrslGrammarParser::COMMA);
      setState(379);
      expression(0);
      setState(384);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(385);
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
    case 21: return expressionSempred(antlrcpp::downCast<ExpressionContext *>(context), predicateIndex);

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
