#pragma once

#include "SrslCompilerInclude.hpp"

namespace Srsl{

    class SRSL_API ShaderModule{
    public:
        explicit ShaderModule(const ShaderLimits& shaderLimits);

        virtual ~ShaderModule();

        virtual void exportShader(const ExportDesc& exportDesc) = 0;

        virtual void exportAstDot(const std::string& outputFile) = 0;

        virtual void exportSymbolTableHtml(const std::string& outputFile) = 0;

        [[nodiscard]] SRSL_SHADER_TYPE getShaderType();

    protected:
        SRSL_SHADER_TYPE m_ShaderType;
        ShaderLimits m_Limits;
    };

}