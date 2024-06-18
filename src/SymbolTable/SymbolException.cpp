#include "SymbolException.hpp"

namespace Srsl{

    SymbolRedefinitionException::SymbolRedefinitionException(const Symbol &existingSymbol, const Symbol &newSymbol):
    SrslException("Symbol (" + symbolClassToString(newSymbol.symbolClass) + ") " + newSymbol.name + " at line " +
        std::to_string(newSymbol.lineNr) + ":" + std::to_string(newSymbol.charPos) + " was already defined at line " +
        std::to_string(existingSymbol.lineNr) + ":" + std::to_string(existingSymbol.charPos) + " as Symbol " +
        symbolClassToString(existingSymbol.symbolClass) + " " + existingSymbol.name + "."),
    m_ExistingSymbol(existingSymbol),
    m_NewSymbol(newSymbol){

    }

    SymbolRedefinitionException::~SymbolRedefinitionException() = default;

    SymbolUndefinedException::SymbolUndefinedException(const std::string &name, u64 lineNr, u64 charPos):
    SrslException("Undefined symbol " + name + " at line " + std::to_string(lineNr) + ":" + std::to_string(charPos)),
    m_Name(name),
    m_LineNr(lineNr),
    m_CharPos(charPos){

    }

    SymbolUndefinedException::~SymbolUndefinedException() = default;
}