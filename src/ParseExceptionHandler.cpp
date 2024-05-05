#include "ParseExceptionHandler.hpp"

namespace Srsl{

    void SrslErrorListener::syntaxError(antlr4::Recognizer *recognizer, antlr4::Token *offendingSymbol, size_t line,
                                        size_t charPositionInLine, const std::string &msg, std::exception_ptr e) {
        std::string excMsg = "Syntax error occurred at line: " + std::to_string(line) + ", position: " + std::to_string(charPositionInLine) + "\n";
        if (offendingSymbol != nullptr){
            excMsg += "Unexpected token: " + offendingSymbol->getText() + "\n";
        }
        excMsg += "Details: " + msg;
        if (e != nullptr) {
            try {
                std::rethrow_exception(e);
            } catch (const std::exception &ex) {
                excMsg +=  " (" + std::string(ex.what()) + ")";
            }
        }
        throw SyntaxError(excMsg, line, charPositionInLine);
    }

    void SrslErrorListener::reportAmbiguity(antlr4::Parser *recognizer, const antlr4::dfa::DFA &dfa, size_t startIndex,
                                            size_t stopIndex, bool exact, const antlrcpp::BitSet &ambigAlts,
                                            antlr4::atn::ATNConfigSet *configs) {

    }

    void SrslErrorListener::reportAttemptingFullContext(antlr4::Parser *recognizer, const antlr4::dfa::DFA &dfa,
                                                        size_t startIndex, size_t stopIndex,
                                                        const antlrcpp::BitSet &conflictingAlts,
                                                        antlr4::atn::ATNConfigSet *configs) {

    }

    void SrslErrorListener::reportContextSensitivity(antlr4::Parser *recognizer, const antlr4::dfa::DFA &dfa,
                                                     size_t startIndex, size_t stopIndex, size_t prediction,
                                                     antlr4::atn::ATNConfigSet *configs) {

    }
}
