#pragma once

#include "Typedefs.hpp"

namespace PrivateSRSL{

    template<typename... Args>
    void formatAssert(const char* condition, const char* file, const char* function, unsigned int line, const char* message, Args... args){
        uint64_t formatSize = std::snprintf(nullptr, 0, message, args...);
        std::vector<uint8_t> formatBuffer(formatSize + 1);
        std::snprintf(reinterpret_cast<char*>(formatBuffer.data()), formatSize + 1, message, args...);

        std::string msg = "[" + std::string(file) + ":" + std::string(function) + ":" + std::to_string(line) + "]: ";
        msg += "Condition: " + std::string(condition) + " failed with message: " + std::string(reinterpret_cast<char*>(formatBuffer.data()));
        _assert(msg.c_str(), file, line);
    }

    template<typename... Args>
    std::string formatException(const char* file, const char* function, unsigned int line, const char* message, Args... args){
        uint64_t formatSize = std::snprintf(nullptr, 0, message, args...);
        std::vector<uint8_t> formatBuffer(formatSize + 1);
        std::snprintf(reinterpret_cast<char*>(formatBuffer.data()), formatSize + 1, message, args...);

        std::string msg = "[" + std::string(file) + ":" + std::string(function) + ":" + std::to_string(line) + "]: ";
        msg += "Exception: " + std::string(reinterpret_cast<char*>(formatBuffer.data()));
        return msg;
    }
}

#define SRSL_PRECONDITION(condition, message, ...) if (!(condition)) PrivateSRSL::formatAssert(#condition, __FILE__, __FUNCTION__, __LINE__, message, ##__VA_ARGS__);

#define SRSL_POSTCONDITION(condition, message, ...) if (!(condition)) PrivateSRSL::formatAssert(#condition, __FILE__, __FUNCTION__, __LINE__, message, ##__VA_ARGS__);

#define SRSL_ASSERT(condition, message, ...) if (!(condition)) PrivateSRSL::formatAssert(#condition, __FILE__, __FUNCTION__, __LINE__, message, ##__VA_ARGS__);

#define SRSL_THROW_EXCEPTION(message, ...) throw std::runtime_error(PrivateSRSL::formatException(__FILE__, __FUNCTION__, __LINE__, message, ##__VA_ARGS__));