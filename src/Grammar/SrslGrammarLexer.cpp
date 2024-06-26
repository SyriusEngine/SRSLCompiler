
// Generated from SrslGrammar.g4 by ANTLR 4.11.1


#include "SrslGrammarLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct SrslGrammarLexerStaticData final {
  SrslGrammarLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  SrslGrammarLexerStaticData(const SrslGrammarLexerStaticData&) = delete;
  SrslGrammarLexerStaticData(SrslGrammarLexerStaticData&&) = delete;
  SrslGrammarLexerStaticData& operator=(const SrslGrammarLexerStaticData&) = delete;
  SrslGrammarLexerStaticData& operator=(SrslGrammarLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag srslgrammarlexerLexerOnceFlag;
SrslGrammarLexerStaticData *srslgrammarlexerLexerStaticData = nullptr;

void srslgrammarlexerLexerInitialize() {
  assert(srslgrammarlexerLexerStaticData == nullptr);
  auto staticData = std::make_unique<SrslGrammarLexerStaticData>(
    std::vector<std::string>{
      "WS", "SBRACKO", "SBRACKC", "CBRACKO", "CBRACKC", "PARENO", "PARENC", 
      "CONST", "FOR", "WHILE", "IF", "ELSE", "ELSEIF", "RETURN", "CONTROL_FLOW", 
      "STRUCT", "SHADER_INPUT", "SHADER_OUTPUT", "TEST", "TYPE", "TEXTURE_TYPES", 
      "SAMPLER_TYPE", "CONSTANT_BUFFER", "SLOT", "COMMENT", "MCOMMENT", 
      "SHADER_TYPE_LIT", "SHADER_TYPE", "EOL", "COMMA", "COLON", "FLOATING_POINT", 
      "NUMBER", "ASSIGN", "DOT", "AT", "PLUS", "MINUS", "MULTIPLY", "DIVIDE", 
      "OPERATION", "CREMENT", "NOT", "VAR_NAME"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
  	4,0,44,603,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,
  	7,35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,
  	7,42,2,43,7,43,1,0,4,0,91,8,0,11,0,12,0,92,1,0,1,0,1,1,1,1,1,2,1,2,1,
  	3,1,3,1,4,1,4,1,5,1,5,1,6,1,6,1,7,1,7,1,7,1,7,1,7,1,7,1,8,1,8,1,8,1,8,
  	1,9,1,9,1,9,1,9,1,9,1,9,1,10,1,10,1,10,1,11,1,11,1,11,1,11,1,11,1,12,
  	1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,13,1,13,1,13,1,13,1,13,1,13,1,13,
  	1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,
  	1,14,1,14,1,14,1,14,1,14,1,14,3,14,168,8,14,1,15,1,15,1,15,1,15,1,15,
  	1,15,1,15,1,16,1,16,1,16,1,16,1,16,1,16,1,17,1,17,1,17,1,17,1,17,1,17,
  	1,17,1,18,1,18,1,18,1,18,1,18,1,19,1,19,1,19,1,19,1,19,1,19,1,19,1,19,
  	1,19,1,19,3,19,205,8,19,1,19,1,19,3,19,209,8,19,1,19,1,19,1,19,1,19,1,
  	19,3,19,216,8,19,1,19,1,19,3,19,220,8,19,1,19,1,19,1,19,1,19,1,19,1,19,
  	3,19,228,8,19,1,19,1,19,3,19,232,8,19,1,19,1,19,1,19,1,19,1,19,1,19,3,
  	19,240,8,19,1,19,1,19,3,19,244,8,19,1,19,1,19,1,19,1,19,1,19,1,19,1,19,
  	3,19,253,8,19,1,19,1,19,3,19,257,8,19,1,19,1,19,1,19,1,19,1,19,1,19,1,
  	19,1,19,3,19,267,8,19,1,19,1,19,3,19,271,8,19,3,19,273,8,19,1,20,1,20,
  	1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,
  	1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,
  	1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,
  	1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,
  	1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,
  	1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,
  	1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,3,20,371,8,20,1,21,
  	1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,22,1,22,1,22,1,22,1,22,1,22,1,22,
  	1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,23,1,23,1,23,1,23,1,23,1,24,
  	1,24,1,24,1,24,5,24,405,8,24,10,24,12,24,408,9,24,1,24,1,24,1,25,1,25,
  	1,25,1,25,5,25,416,8,25,10,25,12,25,419,9,25,1,25,1,25,5,25,423,8,25,
  	10,25,12,25,426,9,25,1,25,5,25,429,8,25,10,25,12,25,432,9,25,1,25,3,25,
  	435,8,25,1,25,1,25,1,25,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,
  	1,26,1,26,1,26,1,26,1,26,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,
  	1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,
  	1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,
  	1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,
  	1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,3,27,516,8,27,
  	1,28,1,28,1,29,1,29,1,30,1,30,1,31,1,31,5,31,526,8,31,10,31,12,31,529,
  	9,31,3,31,531,8,31,1,31,1,31,1,31,5,31,536,8,31,10,31,12,31,539,9,31,
  	1,31,3,31,542,8,31,1,32,1,32,1,32,5,32,547,8,32,10,32,12,32,550,9,32,
  	3,32,552,8,32,1,33,1,33,1,34,1,34,1,35,1,35,1,36,1,36,1,37,1,37,1,38,
  	1,38,1,39,1,39,1,40,1,40,1,40,1,40,1,40,1,40,1,40,1,40,1,40,1,40,1,40,
  	1,40,1,40,1,40,1,40,1,40,1,40,1,40,1,40,3,40,587,8,40,1,41,1,41,1,41,
  	1,41,3,41,593,8,41,1,42,1,42,1,43,1,43,5,43,599,8,43,10,43,12,43,602,
  	9,43,0,0,44,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,23,12,
  	25,13,27,14,29,15,31,16,33,17,35,18,37,19,39,20,41,21,43,22,45,23,47,
  	24,49,25,51,26,53,27,55,28,57,29,59,30,61,31,63,32,65,33,67,34,69,35,
  	71,36,73,37,75,38,77,39,79,40,81,41,83,42,85,43,87,44,1,0,9,3,0,9,10,
  	13,13,32,32,1,0,49,52,1,0,10,10,1,0,49,57,1,0,48,57,2,0,60,60,62,62,3,
  	0,38,38,94,94,124,124,3,0,65,90,95,95,97,122,4,0,48,57,65,90,95,95,97,
  	122,657,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,
  	11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,
  	0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,
  	0,0,33,1,0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,0,39,1,0,0,0,0,41,1,0,0,0,0,
  	43,1,0,0,0,0,45,1,0,0,0,0,47,1,0,0,0,0,49,1,0,0,0,0,51,1,0,0,0,0,53,1,
  	0,0,0,0,55,1,0,0,0,0,57,1,0,0,0,0,59,1,0,0,0,0,61,1,0,0,0,0,63,1,0,0,
  	0,0,65,1,0,0,0,0,67,1,0,0,0,0,69,1,0,0,0,0,71,1,0,0,0,0,73,1,0,0,0,0,
  	75,1,0,0,0,0,77,1,0,0,0,0,79,1,0,0,0,0,81,1,0,0,0,0,83,1,0,0,0,0,85,1,
  	0,0,0,0,87,1,0,0,0,1,90,1,0,0,0,3,96,1,0,0,0,5,98,1,0,0,0,7,100,1,0,0,
  	0,9,102,1,0,0,0,11,104,1,0,0,0,13,106,1,0,0,0,15,108,1,0,0,0,17,114,1,
  	0,0,0,19,118,1,0,0,0,21,124,1,0,0,0,23,127,1,0,0,0,25,132,1,0,0,0,27,
  	140,1,0,0,0,29,167,1,0,0,0,31,169,1,0,0,0,33,176,1,0,0,0,35,182,1,0,0,
  	0,37,189,1,0,0,0,39,272,1,0,0,0,41,370,1,0,0,0,43,372,1,0,0,0,45,380,
  	1,0,0,0,47,395,1,0,0,0,49,400,1,0,0,0,51,411,1,0,0,0,53,439,1,0,0,0,55,
  	515,1,0,0,0,57,517,1,0,0,0,59,519,1,0,0,0,61,521,1,0,0,0,63,530,1,0,0,
  	0,65,551,1,0,0,0,67,553,1,0,0,0,69,555,1,0,0,0,71,557,1,0,0,0,73,559,
  	1,0,0,0,75,561,1,0,0,0,77,563,1,0,0,0,79,565,1,0,0,0,81,586,1,0,0,0,83,
  	592,1,0,0,0,85,594,1,0,0,0,87,596,1,0,0,0,89,91,7,0,0,0,90,89,1,0,0,0,
  	91,92,1,0,0,0,92,90,1,0,0,0,92,93,1,0,0,0,93,94,1,0,0,0,94,95,6,0,0,0,
  	95,2,1,0,0,0,96,97,5,91,0,0,97,4,1,0,0,0,98,99,5,93,0,0,99,6,1,0,0,0,
  	100,101,5,123,0,0,101,8,1,0,0,0,102,103,5,125,0,0,103,10,1,0,0,0,104,
  	105,5,40,0,0,105,12,1,0,0,0,106,107,5,41,0,0,107,14,1,0,0,0,108,109,5,
  	99,0,0,109,110,5,111,0,0,110,111,5,110,0,0,111,112,5,115,0,0,112,113,
  	5,116,0,0,113,16,1,0,0,0,114,115,5,102,0,0,115,116,5,111,0,0,116,117,
  	5,114,0,0,117,18,1,0,0,0,118,119,5,119,0,0,119,120,5,104,0,0,120,121,
  	5,105,0,0,121,122,5,108,0,0,122,123,5,101,0,0,123,20,1,0,0,0,124,125,
  	5,105,0,0,125,126,5,102,0,0,126,22,1,0,0,0,127,128,5,101,0,0,128,129,
  	5,108,0,0,129,130,5,115,0,0,130,131,5,101,0,0,131,24,1,0,0,0,132,133,
  	5,101,0,0,133,134,5,108,0,0,134,135,5,115,0,0,135,136,5,101,0,0,136,137,
  	5,32,0,0,137,138,5,105,0,0,138,139,5,102,0,0,139,26,1,0,0,0,140,141,5,
  	114,0,0,141,142,5,101,0,0,142,143,5,116,0,0,143,144,5,117,0,0,144,145,
  	5,114,0,0,145,146,5,110,0,0,146,28,1,0,0,0,147,148,5,99,0,0,148,149,5,
  	111,0,0,149,150,5,110,0,0,150,151,5,116,0,0,151,152,5,105,0,0,152,153,
  	5,110,0,0,153,154,5,117,0,0,154,168,5,101,0,0,155,156,5,98,0,0,156,157,
  	5,114,0,0,157,158,5,101,0,0,158,159,5,97,0,0,159,168,5,107,0,0,160,161,
  	5,100,0,0,161,162,5,105,0,0,162,163,5,115,0,0,163,164,5,99,0,0,164,165,
  	5,97,0,0,165,166,5,114,0,0,166,168,5,100,0,0,167,147,1,0,0,0,167,155,
  	1,0,0,0,167,160,1,0,0,0,168,30,1,0,0,0,169,170,5,115,0,0,170,171,5,116,
  	0,0,171,172,5,114,0,0,172,173,5,117,0,0,173,174,5,99,0,0,174,175,5,116,
  	0,0,175,32,1,0,0,0,176,177,5,73,0,0,177,178,5,110,0,0,178,179,5,112,0,
  	0,179,180,5,117,0,0,180,181,5,116,0,0,181,34,1,0,0,0,182,183,5,79,0,0,
  	183,184,5,117,0,0,184,185,5,116,0,0,185,186,5,112,0,0,186,187,5,117,0,
  	0,187,188,5,116,0,0,188,36,1,0,0,0,189,190,5,116,0,0,190,191,5,101,0,
  	0,191,192,5,115,0,0,192,193,5,116,0,0,193,38,1,0,0,0,194,195,5,118,0,
  	0,195,196,5,111,0,0,196,197,5,105,0,0,197,273,5,100,0,0,198,199,5,98,
  	0,0,199,200,5,111,0,0,200,201,5,111,0,0,201,202,5,108,0,0,202,204,1,0,
  	0,0,203,205,7,1,0,0,204,203,1,0,0,0,204,205,1,0,0,0,205,208,1,0,0,0,206,
  	207,5,120,0,0,207,209,7,1,0,0,208,206,1,0,0,0,208,209,1,0,0,0,209,273,
  	1,0,0,0,210,211,5,105,0,0,211,212,5,110,0,0,212,213,5,116,0,0,213,215,
  	1,0,0,0,214,216,7,1,0,0,215,214,1,0,0,0,215,216,1,0,0,0,216,219,1,0,0,
  	0,217,218,5,120,0,0,218,220,7,1,0,0,219,217,1,0,0,0,219,220,1,0,0,0,220,
  	273,1,0,0,0,221,222,5,117,0,0,222,223,5,105,0,0,223,224,5,110,0,0,224,
  	225,5,116,0,0,225,227,1,0,0,0,226,228,7,1,0,0,227,226,1,0,0,0,227,228,
  	1,0,0,0,228,231,1,0,0,0,229,230,5,120,0,0,230,232,7,1,0,0,231,229,1,0,
  	0,0,231,232,1,0,0,0,232,273,1,0,0,0,233,234,5,104,0,0,234,235,5,97,0,
  	0,235,236,5,108,0,0,236,237,5,102,0,0,237,239,1,0,0,0,238,240,7,1,0,0,
  	239,238,1,0,0,0,239,240,1,0,0,0,240,243,1,0,0,0,241,242,5,120,0,0,242,
  	244,7,1,0,0,243,241,1,0,0,0,243,244,1,0,0,0,244,273,1,0,0,0,245,246,5,
  	102,0,0,246,247,5,108,0,0,247,248,5,111,0,0,248,249,5,97,0,0,249,250,
  	5,116,0,0,250,252,1,0,0,0,251,253,7,1,0,0,252,251,1,0,0,0,252,253,1,0,
  	0,0,253,256,1,0,0,0,254,255,5,120,0,0,255,257,7,1,0,0,256,254,1,0,0,0,
  	256,257,1,0,0,0,257,273,1,0,0,0,258,259,5,100,0,0,259,260,5,111,0,0,260,
  	261,5,117,0,0,261,262,5,98,0,0,262,263,5,108,0,0,263,264,5,101,0,0,264,
  	266,1,0,0,0,265,267,7,1,0,0,266,265,1,0,0,0,266,267,1,0,0,0,267,270,1,
  	0,0,0,268,269,5,120,0,0,269,271,7,1,0,0,270,268,1,0,0,0,270,271,1,0,0,
  	0,271,273,1,0,0,0,272,194,1,0,0,0,272,198,1,0,0,0,272,210,1,0,0,0,272,
  	221,1,0,0,0,272,233,1,0,0,0,272,245,1,0,0,0,272,258,1,0,0,0,273,40,1,
  	0,0,0,274,275,5,84,0,0,275,276,5,101,0,0,276,277,5,120,0,0,277,278,5,
  	116,0,0,278,279,5,117,0,0,279,280,5,114,0,0,280,281,5,101,0,0,281,282,
  	5,49,0,0,282,371,5,68,0,0,283,284,5,84,0,0,284,285,5,101,0,0,285,286,
  	5,120,0,0,286,287,5,116,0,0,287,288,5,117,0,0,288,289,5,114,0,0,289,290,
  	5,101,0,0,290,291,5,50,0,0,291,371,5,68,0,0,292,293,5,84,0,0,293,294,
  	5,101,0,0,294,295,5,120,0,0,295,296,5,116,0,0,296,297,5,117,0,0,297,298,
  	5,114,0,0,298,299,5,101,0,0,299,300,5,51,0,0,300,371,5,68,0,0,301,302,
  	5,84,0,0,302,303,5,101,0,0,303,304,5,120,0,0,304,305,5,116,0,0,305,306,
  	5,117,0,0,306,307,5,114,0,0,307,308,5,101,0,0,308,309,5,67,0,0,309,310,
  	5,117,0,0,310,311,5,98,0,0,311,371,5,101,0,0,312,313,5,84,0,0,313,314,
  	5,101,0,0,314,315,5,120,0,0,315,316,5,116,0,0,316,317,5,117,0,0,317,318,
  	5,114,0,0,318,319,5,101,0,0,319,320,5,49,0,0,320,321,5,68,0,0,321,322,
  	5,65,0,0,322,323,5,114,0,0,323,324,5,114,0,0,324,325,5,97,0,0,325,371,
  	5,121,0,0,326,327,5,84,0,0,327,328,5,101,0,0,328,329,5,120,0,0,329,330,
  	5,116,0,0,330,331,5,117,0,0,331,332,5,114,0,0,332,333,5,101,0,0,333,334,
  	5,50,0,0,334,335,5,68,0,0,335,336,5,65,0,0,336,337,5,114,0,0,337,338,
  	5,114,0,0,338,339,5,97,0,0,339,371,5,121,0,0,340,341,5,84,0,0,341,342,
  	5,101,0,0,342,343,5,120,0,0,343,344,5,116,0,0,344,345,5,117,0,0,345,346,
  	5,114,0,0,346,347,5,101,0,0,347,348,5,51,0,0,348,349,5,68,0,0,349,350,
  	5,65,0,0,350,351,5,114,0,0,351,352,5,114,0,0,352,353,5,97,0,0,353,371,
  	5,121,0,0,354,355,5,84,0,0,355,356,5,101,0,0,356,357,5,120,0,0,357,358,
  	5,116,0,0,358,359,5,117,0,0,359,360,5,114,0,0,360,361,5,101,0,0,361,362,
  	5,67,0,0,362,363,5,117,0,0,363,364,5,98,0,0,364,365,5,101,0,0,365,366,
  	5,65,0,0,366,367,5,114,0,0,367,368,5,114,0,0,368,369,5,97,0,0,369,371,
  	5,121,0,0,370,274,1,0,0,0,370,283,1,0,0,0,370,292,1,0,0,0,370,301,1,0,
  	0,0,370,312,1,0,0,0,370,326,1,0,0,0,370,340,1,0,0,0,370,354,1,0,0,0,371,
  	42,1,0,0,0,372,373,5,83,0,0,373,374,5,97,0,0,374,375,5,109,0,0,375,376,
  	5,112,0,0,376,377,5,108,0,0,377,378,5,101,0,0,378,379,5,114,0,0,379,44,
  	1,0,0,0,380,381,5,67,0,0,381,382,5,111,0,0,382,383,5,110,0,0,383,384,
  	5,115,0,0,384,385,5,116,0,0,385,386,5,97,0,0,386,387,5,110,0,0,387,388,
  	5,116,0,0,388,389,5,66,0,0,389,390,5,117,0,0,390,391,5,102,0,0,391,392,
  	5,102,0,0,392,393,5,101,0,0,393,394,5,114,0,0,394,46,1,0,0,0,395,396,
  	5,115,0,0,396,397,5,108,0,0,397,398,5,111,0,0,398,399,5,116,0,0,399,48,
  	1,0,0,0,400,401,5,47,0,0,401,402,5,47,0,0,402,406,1,0,0,0,403,405,8,2,
  	0,0,404,403,1,0,0,0,405,408,1,0,0,0,406,404,1,0,0,0,406,407,1,0,0,0,407,
  	409,1,0,0,0,408,406,1,0,0,0,409,410,7,2,0,0,410,50,1,0,0,0,411,412,5,
  	47,0,0,412,413,5,42,0,0,413,424,1,0,0,0,414,416,8,2,0,0,415,414,1,0,0,
  	0,416,419,1,0,0,0,417,415,1,0,0,0,417,418,1,0,0,0,418,420,1,0,0,0,419,
  	417,1,0,0,0,420,421,7,2,0,0,421,423,5,42,0,0,422,417,1,0,0,0,423,426,
  	1,0,0,0,424,422,1,0,0,0,424,425,1,0,0,0,425,434,1,0,0,0,426,424,1,0,0,
  	0,427,429,8,2,0,0,428,427,1,0,0,0,429,432,1,0,0,0,430,428,1,0,0,0,430,
  	431,1,0,0,0,431,433,1,0,0,0,432,430,1,0,0,0,433,435,7,2,0,0,434,430,1,
  	0,0,0,434,435,1,0,0,0,435,436,1,0,0,0,436,437,5,42,0,0,437,438,5,47,0,
  	0,438,52,1,0,0,0,439,440,5,83,0,0,440,441,5,104,0,0,441,442,5,97,0,0,
  	442,443,5,100,0,0,443,444,5,101,0,0,444,445,5,114,0,0,445,446,5,84,0,
  	0,446,447,5,121,0,0,447,448,5,112,0,0,448,449,5,101,0,0,449,450,5,32,
  	0,0,450,451,5,61,0,0,451,452,5,32,0,0,452,54,1,0,0,0,453,454,5,86,0,0,
  	454,455,5,101,0,0,455,456,5,114,0,0,456,457,5,116,0,0,457,458,5,101,0,
  	0,458,516,5,120,0,0,459,460,5,70,0,0,460,461,5,114,0,0,461,462,5,97,0,
  	0,462,463,5,103,0,0,463,464,5,109,0,0,464,465,5,101,0,0,465,466,5,110,
  	0,0,466,516,5,116,0,0,467,468,5,71,0,0,468,469,5,101,0,0,469,470,5,111,
  	0,0,470,471,5,109,0,0,471,472,5,101,0,0,472,473,5,116,0,0,473,474,5,114,
  	0,0,474,516,5,121,0,0,475,476,5,84,0,0,476,477,5,101,0,0,477,478,5,115,
  	0,0,478,479,5,115,0,0,479,480,5,101,0,0,480,481,5,108,0,0,481,482,5,97,
  	0,0,482,483,5,116,0,0,483,484,5,105,0,0,484,485,5,111,0,0,485,486,5,110,
  	0,0,486,487,5,67,0,0,487,488,5,111,0,0,488,489,5,110,0,0,489,490,5,116,
  	0,0,490,491,5,114,0,0,491,492,5,111,0,0,492,516,5,108,0,0,493,494,5,84,
  	0,0,494,495,5,101,0,0,495,496,5,115,0,0,496,497,5,115,0,0,497,498,5,101,
  	0,0,498,499,5,108,0,0,499,500,5,97,0,0,500,501,5,116,0,0,501,502,5,105,
  	0,0,502,503,5,111,0,0,503,504,5,110,0,0,504,505,5,69,0,0,505,506,5,118,
  	0,0,506,507,5,97,0,0,507,508,5,108,0,0,508,509,5,117,0,0,509,510,5,116,
  	0,0,510,511,5,97,0,0,511,512,5,116,0,0,512,513,5,105,0,0,513,514,5,111,
  	0,0,514,516,5,110,0,0,515,453,1,0,0,0,515,459,1,0,0,0,515,467,1,0,0,0,
  	515,475,1,0,0,0,515,493,1,0,0,0,516,56,1,0,0,0,517,518,5,59,0,0,518,58,
  	1,0,0,0,519,520,5,44,0,0,520,60,1,0,0,0,521,522,5,58,0,0,522,62,1,0,0,
  	0,523,527,7,3,0,0,524,526,7,4,0,0,525,524,1,0,0,0,526,529,1,0,0,0,527,
  	525,1,0,0,0,527,528,1,0,0,0,528,531,1,0,0,0,529,527,1,0,0,0,530,523,1,
  	0,0,0,530,531,1,0,0,0,531,532,1,0,0,0,532,533,7,4,0,0,533,537,5,46,0,
  	0,534,536,7,4,0,0,535,534,1,0,0,0,536,539,1,0,0,0,537,535,1,0,0,0,537,
  	538,1,0,0,0,538,541,1,0,0,0,539,537,1,0,0,0,540,542,5,102,0,0,541,540,
  	1,0,0,0,541,542,1,0,0,0,542,64,1,0,0,0,543,552,5,48,0,0,544,548,7,3,0,
  	0,545,547,7,4,0,0,546,545,1,0,0,0,547,550,1,0,0,0,548,546,1,0,0,0,548,
  	549,1,0,0,0,549,552,1,0,0,0,550,548,1,0,0,0,551,543,1,0,0,0,551,544,1,
  	0,0,0,552,66,1,0,0,0,553,554,5,61,0,0,554,68,1,0,0,0,555,556,5,46,0,0,
  	556,70,1,0,0,0,557,558,5,64,0,0,558,72,1,0,0,0,559,560,5,43,0,0,560,74,
  	1,0,0,0,561,562,5,45,0,0,562,76,1,0,0,0,563,564,5,42,0,0,564,78,1,0,0,
  	0,565,566,5,47,0,0,566,80,1,0,0,0,567,587,5,37,0,0,568,569,5,61,0,0,569,
  	587,5,61,0,0,570,571,5,33,0,0,571,587,5,61,0,0,572,587,7,5,0,0,573,574,
  	5,62,0,0,574,587,5,61,0,0,575,576,5,60,0,0,576,587,5,61,0,0,577,578,5,
  	38,0,0,578,587,5,38,0,0,579,580,5,124,0,0,580,587,5,124,0,0,581,582,5,
  	60,0,0,582,587,5,60,0,0,583,584,5,62,0,0,584,587,5,62,0,0,585,587,7,6,
  	0,0,586,567,1,0,0,0,586,568,1,0,0,0,586,570,1,0,0,0,586,572,1,0,0,0,586,
  	573,1,0,0,0,586,575,1,0,0,0,586,577,1,0,0,0,586,579,1,0,0,0,586,581,1,
  	0,0,0,586,583,1,0,0,0,586,585,1,0,0,0,587,82,1,0,0,0,588,589,5,43,0,0,
  	589,593,5,43,0,0,590,591,5,45,0,0,591,593,5,45,0,0,592,588,1,0,0,0,592,
  	590,1,0,0,0,593,84,1,0,0,0,594,595,5,33,0,0,595,86,1,0,0,0,596,600,7,
  	7,0,0,597,599,7,8,0,0,598,597,1,0,0,0,599,602,1,0,0,0,600,598,1,0,0,0,
  	600,601,1,0,0,0,601,88,1,0,0,0,602,600,1,0,0,0,32,0,92,167,204,208,215,
  	219,227,231,239,243,252,256,266,270,272,370,406,417,424,430,434,515,527,
  	530,537,541,548,551,586,592,600,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  srslgrammarlexerLexerStaticData = staticData.release();
}

}

SrslGrammarLexer::SrslGrammarLexer(CharStream *input) : Lexer(input) {
  SrslGrammarLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *srslgrammarlexerLexerStaticData->atn, srslgrammarlexerLexerStaticData->decisionToDFA, srslgrammarlexerLexerStaticData->sharedContextCache);
}

SrslGrammarLexer::~SrslGrammarLexer() {
  delete _interpreter;
}

std::string SrslGrammarLexer::getGrammarFileName() const {
  return "SrslGrammar.g4";
}

const std::vector<std::string>& SrslGrammarLexer::getRuleNames() const {
  return srslgrammarlexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& SrslGrammarLexer::getChannelNames() const {
  return srslgrammarlexerLexerStaticData->channelNames;
}

const std::vector<std::string>& SrslGrammarLexer::getModeNames() const {
  return srslgrammarlexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& SrslGrammarLexer::getVocabulary() const {
  return srslgrammarlexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView SrslGrammarLexer::getSerializedATN() const {
  return srslgrammarlexerLexerStaticData->serializedATN;
}

const atn::ATN& SrslGrammarLexer::getATN() const {
  return *srslgrammarlexerLexerStaticData->atn;
}




void SrslGrammarLexer::initialize() {
  ::antlr4::internal::call_once(srslgrammarlexerLexerOnceFlag, srslgrammarlexerLexerInitialize);
}
