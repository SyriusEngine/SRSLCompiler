#pragma once

// identify operating system and toolchain
#if defined(WIN64) || defined(_WIN64) || defined(WIN32)
#if defined(SRSL_EXPORT_DLL)
#define SRSL_API __declspec(dllexport)
#else
#define SRSL_API __declspec(dllimport)
#endif
#else
#define SRSL_API

#endif

#include <string>
#include <cstdint>
#include <memory>

typedef enum SRSL_LOAD_TYPE{
    SRSL_LOAD_FROM_FILE      = 0x0,
    SRSL_LOAD_FROM_MEMORY    = 0x1
} SRSL_LOAD_TYPE;

typedef enum SRSL_WRITE_TYPE{
    SRSL_WRITE_TO_FILE      = 0x0,
    SRSL_WRITE_TO_MEMORY    = 0x1
} SRSL_WRITE_TYPE;

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

namespace Srsl{

    struct SRSL_API ShaderLimits{
        uint32_t maxVertexAttributes = 16;
        uint32_t maxConstantBufferSize = 16 * 1024;
        uint32_t maxTextureUnits = 16;
        uint32_t maxSamplers = 16;
        uint32_t maxConstantBufferSlots = 32;
    };

    struct SRSL_API VersionDesc{
        uint32_t majorVersion = 0;
        uint32_t minorVersion = 0;
    };

    struct SRSL_API ImportDesc{
        // input configuration
        std::string source;
        SRSL_LOAD_TYPE loadType = SRSL_LOAD_FROM_FILE;
    };

    struct SRSL_API ExportDesc{
        // output configuration
        std::string vertexShaderOut;
        std::string fragmentShaderOut;
        SRSL_WRITE_TYPE writeType = SRSL_WRITE_TO_FILE;

        // export configuration
        bool exportTestCases = false;
        std::string entryPoint = "main";
        SRSL_TARGET_LANGUAGE_TYPE target = SRSL_TARGET_NONE;
        ShaderLimits limits = {};
        VersionDesc version = {};
    };

    class SRSL_API ShaderModule{
    public:
        ShaderModule();

        virtual ~ShaderModule();

        virtual void exportAstDot(const std::string& outputFile) = 0;

        virtual void exportSymbolTableHtml(const std::string& outputFile) = 0;

        virtual void exportShader(const ExportDesc& desc) = 0;

        [[nodiscard]] virtual SRSL_SHADER_TYPE getShaderType() const = 0;
    };

    class SRSL_API ShaderProgram{
    public:
        ShaderProgram();

        virtual ~ShaderProgram();

        virtual void addShaderModule(std::shared_ptr<ShaderModule> shaderModule) = 0;

        virtual void link() = 0;

        virtual void exportShader(const ExportDesc& desc) = 0;

    };

    SRSL_API std::shared_ptr<ShaderModule> createShaderModule(const ImportDesc& desc);

    SRSL_API std::shared_ptr<ShaderProgram> createShaderProgram();

}