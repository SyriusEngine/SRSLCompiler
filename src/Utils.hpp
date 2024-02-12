#pragma once

#include "../include/SrslCompiler/SrslCompiler.hpp"

#include <string>
#include <vector>
#include <unordered_map>
#include <memory>
#include <iostream>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <optional>
#include <cassert>

namespace Srsl{

    typedef uint8_t uint8;
    typedef int8_t int8;
    typedef uint16_t uint16;
    typedef int16_t int16;
    typedef uint32_t uint32;
    typedef int32_t int32;
    typedef uint64_t uint64;
    typedef int64_t int64;
    typedef unsigned char ubyte;
    typedef char byte;

    typedef size_t Size;
    typedef uint64 Index;

    template<typename T>
    using UP = std::unique_ptr<T>;

    // RCP = Reference Counting Pointer => because i'm lazy and do not want to type std::shared_pointer every time
    template<typename T>
    using RCP = std::shared_ptr<T>;

    template<typename T, typename... Args>
    inline UP<T> createUP(Args&&... args){
        return std::make_unique<T>(args...);
    }

    template<typename T, typename... Args>
    inline RCP<T> createRCP(Args&&... args){
        return std::make_shared<T>(args...);
    }

    inline std::string shaderTypeToString(SRSL_SHADER_TYPE type){
        switch (type) {
            case SRSL_VERTEX_SHADER: return "Vertex";
            case SRSL_FRAGMENT_SHADER: return "Fragment";
            default: return "Unknown";
        }
    }
}
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

#define SRSL_PRECONDITION(condition, message, ...) \
    if (!(condition)) PrivateSRSL::formatAssert(#condition, __FILE__, __FUNCTION__, __LINE__, message, ##__VA_ARGS__);

#define SRSL_POSTCONDITION(condition, message, ...) \
    if (!(condition)) PrivateSRSL::formatAssert(#condition, __FILE__, __FUNCTION__, __LINE__, message, ##__VA_ARGS__);

#define SRSL_THROW_EXCEPTION(message, ...) \
    throw std::runtime_error(PrivateSRSL::formatException(__FILE__, __FUNCTION__, __LINE__, message, ##__VA_ARGS__));