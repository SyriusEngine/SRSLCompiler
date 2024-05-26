#include "Exception.hpp"

#include <utility>

namespace Srsl{

    SrslException::SrslException(std::string message):
    exception(),
    m_Message(std::move(message)){}

    SrslException::~SrslException() = default;

    const char *SrslException::what() const noexcept {
        return m_Message.c_str();
    }

    FileNotFoundException::FileNotFoundException(const std::string &filePath):
    SrslException("File not found: " + filePath){

    }

    FileNotFoundException::~FileNotFoundException() = default;

    SyntaxError::SyntaxError(const std::string &message, u64 lineNumber, u64 charPosition):
    SrslException(message),
    m_LineNumber(lineNumber),
    m_CharPosition(charPosition){

    }

    SyntaxError::~SyntaxError() = default;

    u64 SyntaxError::getLineNumber() const {
        return m_LineNumber;
    }

    u64 SyntaxError::getCharPosition() const {
        return m_CharPosition;
    }

    UndefinedSymbolError::UndefinedSymbolError(const std::string &symbolName, const std::string& tableName, u64 lineNumber) :
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

    u64 UndefinedSymbolError::getLineNumber() const {
        return m_LineNumber;
    }

    RedefinitionError::RedefinitionError(const std::string &symbolName, const std::string &tableName, u64 lineNumber):
    SrslException("Redefined symbol: " + symbolName + " at line: " + std::to_string(lineNumber) + " in scope: " + tableName),
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

    u64 RedefinitionError::getLineNumber() const {
        return m_LineNumber;
    }

    ValidationError::~ValidationError() = default;
}
