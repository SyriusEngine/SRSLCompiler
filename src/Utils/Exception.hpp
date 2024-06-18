#pragma once

#include "Typedefs.hpp"
#include <exception>

namespace Srsl{

    class SrslException: public std::exception{
    public:
        explicit SrslException(std::string  message);

        ~SrslException() override;

        [[nodiscard]] const char* what() const noexcept override;

    protected:
        std::string m_Message;
    };

    class FileNotFoundException: public SrslException{
    public:
        explicit FileNotFoundException(const std::string& filePath);

        ~FileNotFoundException() override;
    };

    class SyntaxError: public SrslException{
    public:
        SyntaxError(const std::string& message, u64 lineNumber, u64 charPosition);

        ~SyntaxError() override;

        [[nodiscard]] u64 getLineNumber() const;

        [[nodiscard]] u64 getCharPosition() const;

    private:
        u64 m_LineNumber;
        u64 m_CharPosition;
    };

    class ValidationError: public SrslException{
    public:
        template<typename... Args>
        explicit ValidationError(const char* message, Args... args): SrslException("") {
            u64 formatSize = std::snprintf(nullptr, 0, message, args...);
            std::vector<uint8_t> formatBuffer(formatSize + 1);
            std::snprintf(reinterpret_cast<char*>(formatBuffer.data()), formatSize + 1, message, args...);
            m_Message = reinterpret_cast<char*>(formatBuffer.data());
        }

        ~ValidationError() override;
    };

}