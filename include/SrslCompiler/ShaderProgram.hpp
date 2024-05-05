#pragma once

#include "ShaderModule.hpp"

namespace Srsl {

    class SRSL_API ShaderProgram{
    public:
        ShaderProgram();

        explicit ShaderProgram(const ShaderLimits& limits);

        virtual ~ShaderProgram();

        virtual void addShaderModule(std::shared_ptr<ShaderModule> shaderModule) = 0;

        virtual void link() = 0;

        virtual void exportShader(ExportDesc& desc) = 0;

        virtual void generateTestCode(TestConfig &vertexShaderConfig, TestConfig& fragmentShaderConfig) = 0;

    protected:
        ShaderLimits m_Limits;

    };

}