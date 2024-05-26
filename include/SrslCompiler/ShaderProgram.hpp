#pragma once

#include "ShaderModule.hpp"

namespace Srsl {

    class SRSL_API ShaderProgram{
    public:
        ShaderProgram();

        virtual ~ShaderProgram();

        virtual void addShaderModule(std::shared_ptr<ShaderModule> shaderModule) = 0;

        virtual void link() = 0;

        virtual void exportShader(const ProgramExportDesc& programExportDesc) = 0;

    };

}