#pragma once

#include "ShaderModule.hpp"
#include "ShaderProgram.hpp"

namespace Srsl{

    SRSL_API std::shared_ptr<ShaderModule> createShaderModuleFromFile(const std::string& fileName);

    SRSL_API std::shared_ptr<ShaderModule> createShaderModuleFromSource(const std::string& source);

    SRSL_API std::shared_ptr<ShaderProgram> createShaderProgram();

    SRSL_API std::shared_ptr<ShaderProgram> createShaderProgram(const ShaderLimits& limits);

    SRSL_API ExportDesc createGlslDefaultExportDesc();

    SRSL_API ExportDesc createHlslDefaultExportDesc();

    SRSL_API ShaderLimits createDefaultShaderLimits();

}