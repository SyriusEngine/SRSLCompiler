#include "Exception.hpp"

namespace Srsl{

    SrslException::SrslException(const std::string &message):
    exception(),
    m_Message(message){}

    SrslException::~SrslException() = default;

    const char *SrslException::what() const noexcept {
        return m_Message.c_str();
    }

    SyntaxError::SyntaxError(const std::string &message, uint64 lineNumber):
    SrslException(message),
    m_LineNumber(lineNumber){

    }

    SyntaxError::~SyntaxError() = default;

    uint64 SyntaxError::getLineNumber() const {
        return m_LineNumber;
    }

    ValidationError::~ValidationError() = default;

    const char *ValidationError::what() const noexcept {
        return m_Message.c_str();
    }

}
