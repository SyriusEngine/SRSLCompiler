#include "Exception.hpp"

namespace Srsl{

    SrslException::SrslException(const std::string &message):
    exception(),
    m_Message(message){}

    SrslException::~SrslException() = default;

    const char *SrslException::what() const noexcept {
        return m_Message.c_str();
    }

    SyntaxError::SyntaxError(const std::string &message, uint64 lineNumber, uint64 charPosition):
    SrslException(message),
    m_LineNumber(lineNumber),
    m_CharPosition(charPosition){

    }

    SyntaxError::~SyntaxError() = default;

    uint64 SyntaxError::getLineNumber() const {
        return m_LineNumber;
    }

    uint64 SyntaxError::getCharPosition() const {
        return m_CharPosition;
    }

    UndefinedSymbolError::UndefinedSymbolError(const std::string &symbolName, const std::string& tableName, uint64 lineNumber) :
    SrslException("Undefined symbol: " + symbolName + " at line: " + std::to_string(lineNumber) + " in scope: " + tableName),
    m_SymbolName(symbolName),
    m_TableName(tableName),
    m_LineNumber(lineNumber){

    }

    UndefinedSymbolError::~UndefinedSymbolError() = default;

    const std::string &UndefinedSymbolError::getSymbolName() const {
        return m_SymbolName;
    }

    const std::string &UndefinedSymbolError::getTableName() const {
        return m_TableName;
    }

    uint64 UndefinedSymbolError::getLineNumber() const {
        return m_LineNumber;
    }

    RedefinitionError::RedefinitionError(const std::string &symbolName, const std::string &tableName, uint64 lineNumber):
    SrslException("Undefined symbol: " + symbolName + " at line: " + std::to_string(lineNumber) + " in scope: " + tableName),
    m_SymbolName(symbolName),
    m_TableName(tableName),
    m_LineNumber(lineNumber){

    }

    RedefinitionError::~RedefinitionError() = default;

    const std::string &RedefinitionError::getSymbolName() const {
        return m_SymbolName;
    }

    const std::string &RedefinitionError::getTableName() const {
        return m_TableName;
    }

    uint64 RedefinitionError::getLineNumber() const {
        return m_LineNumber;
    }

    ValidationError::~ValidationError() = default;
}
