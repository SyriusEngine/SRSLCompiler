#pragma once

#include "PlatformDetection.hpp"

#include <string>
#include <vector>
#include <cstdint>
#include <memory>

typedef enum SRSL_SHADER_TYPE{
    SRSL_SHADER_NONE         = 0x0,
    SRSL_VERTEX_SHADER       = 0x01,
    SRSL_FRAGMENT_SHADER     = 0x02,
    SRSL_GEOMETRY_SHADER     = 0x03,
} SRSL_SHADER_TYPE;

typedef enum SRSL_TARGET_LANGUAGE_TYPE{
    SRSL_TARGET_NONE         = 0x0,
    SRSL_TARGET_GLSL         = 0x01,
    SRSL_TARGET_HLSL         = 0x02,
    SRSL_TARGET_SPIRV        = 0x03,
    SRSL_TARGET_CPP          = 0x04,
} SRSL_TARGET_LANGUAGE_TYPE;

namespace Srsl {

    struct SRSL_API ShaderLimits {
        uint32_t maxVertexAttributes = 16;
        uint32_t maxConstantBufferSize = 16384;
        uint32_t maxTextureUnits = 16;
        uint32_t maxSamplers = 16;
        uint32_t maxConstantBufferSlots = 32;
    };

    struct SRSL_API VersionDesc {
        uint32_t majorVersion = 0;
        uint32_t minorVersion = 0;
    };

    struct SRSL_API TestConfig{
        std::string ssboName = "SRSL_TEST_RESULTS"; // input parameter: Name of the SSBO that will contain the test results
        uint32_t ssboSlot = 0;                      // input parameter: Test results will be written to a SSBO at this slot
        uint32_t ssboSize = 0;                      // output parameter: Size of the SSBO that will contain testing info
        std::vector<std::string> testCaseNames;     // output parameter: contains the names of the test cases in order that they are written to the SSBO by the GPU
        uint32_t testCaseCount = 0;                 // output parameter: Number of test cases
        uint32_t testCaseArraySize = 0;             // output parameter: Size of the array that will contain the test cases
        std::vector<std::string> functionNames;     // output parameter: names of the tested functions
        uint32_t functionCount = 0;                 // output parameter: Number of tested functions
        uint32_t functionArraySize = 0;             // output parameter: Size of the array that will contain the tested functions
        std::vector<std::string> scopes;            // output parameter: This vector will contain the scopes for the vertex shader
        uint32_t scopeCount = 0;                    // output parameter: Number of scopes
        uint32_t scopeArraySize = 0;                // output parameter: Size of the array that will contain the scopes
        uint32_t totalLineCount = 0;                // output parameter: Total number of lines in the shader
    };

    struct SRSL_API ExportDesc{
        // output configuration
        std::string vertexShaderOut;
        std::string fragmentShaderOut;

        // target configuration
        std::string entryPoint = "main";
        SRSL_TARGET_LANGUAGE_TYPE target = SRSL_TARGET_NONE;
        bool writeToFile = true;

        // export configuration
        VersionDesc version = {};
    };
}