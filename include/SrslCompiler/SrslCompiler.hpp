#pragma once

#include "ShaderModule.hpp"
#include "ShaderProgram.hpp"

namespace Srsl{

    SRSL_API ExportDesc createGlslDefaultExportDesc();

    SRSL_API ExportDesc createHlslDefaultExportDesc();

    SRSL_API ShaderLimits createDefaultShaderLimits();

    SRSL_API std::shared_ptr<ShaderModule> createShaderModuleFromFile(const std::string& fileName, const ShaderLimits& limits = createDefaultShaderLimits());

    SRSL_API std::shared_ptr<ShaderModule> createShaderModuleFromSource(const std::string& source, const ShaderLimits& limits = createDefaultShaderLimits());

    SRSL_API std::shared_ptr<ShaderProgram> createShaderProgram();

}