#pragma once

#include "SrslCompilerInclude.hpp"

namespace Srsl{

    class SRSL_API ShaderModule{
    public:
        ShaderModule();

        virtual ~ShaderModule();

        virtual void exportAstDot(const std::string& outputFile) = 0;

        virtual void exportSymbolTableHtml(const std::string& outputFile) = 0;

        [[nodiscard]] virtual SRSL_SHADER_TYPE getShaderType() const = 0;
    };

}