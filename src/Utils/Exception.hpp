#pragma once

#include "Typedefs.hpp"
#include <exception>

namespace Srsl{

    class SrslException: public std::exception{
    public:
        explicit SrslException(const std::string& message);

        ~SrslException() override;

        [[nodiscard]] const char* what() const noexcept override;

    protected:
        std::string m_Message;
    };

    class SyntaxError: public SrslException{
    public:
        SyntaxError(const std::string& message, uint64 lineNumber);

        ~SyntaxError() override;

        [[nodiscard]] uint64 getLineNumber() const;

    private:
        uint64 m_LineNumber;
    };

    class ValidationError: public SrslException{
    public:
        template<typename... Args>
        explicit ValidationError(const char* message, Args... args): SrslException("") {
            uint64_t formatSize = std::snprintf(nullptr, 0, message, args...);
            std::vector<uint8_t> formatBuffer(formatSize + 1);
            std::snprintf(reinterpret_cast<char*>(formatBuffer.data()), formatSize + 1, message, args...);
            m_Message = reinterpret_cast<char*>(formatBuffer.data());
        }

        ~ValidationError() override;
    };

}