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
        SyntaxError(const std::string& message, uint64 lineNumber, uint64 charPosition);

        ~SyntaxError() override;

        [[nodiscard]] uint64 getLineNumber() const;

        [[nodiscard]] uint64 getCharPosition() const;

    private:
        uint64 m_LineNumber;
        uint64 m_CharPosition;
    };

    class UndefinedSymbolError: public SrslException{
    public:
        UndefinedSymbolError(const std::string& symbolName, const std::string& tableName, uint64 lineNumber);

        ~UndefinedSymbolError() override;

        [[nodiscard]] const std::string& getSymbolName() const;

        [[nodiscard]] const std::string& getTableName() const;

        [[nodiscard]] uint64 getLineNumber() const;

    private:
        std::string m_SymbolName;
        std::string m_TableName;
        uint64 m_LineNumber;
    };

    class RedefinitionError: public SrslException{
    public:
        RedefinitionError(const std::string& symbolName, const std::string& tableName, uint64 lineNumber);

        ~RedefinitionError() override;

        [[nodiscard]] const std::string& getSymbolName() const;

        [[nodiscard]] const std::string& getTableName() const;

        [[nodiscard]] uint64 getLineNumber() const;

    private:
        std::string m_SymbolName;
        std::string m_TableName;
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