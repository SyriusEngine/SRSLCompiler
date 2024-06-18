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

    ValidationError::~ValidationError() = default;
}
