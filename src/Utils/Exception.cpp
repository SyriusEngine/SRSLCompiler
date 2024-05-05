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

    ValidationError::~ValidationError() = default;

}
