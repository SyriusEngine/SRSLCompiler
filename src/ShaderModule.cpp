#include "../include/SrslCompiler/ShaderModule.hpp"

namespace Srsl{

    ShaderModule::ShaderModule(const ShaderLimits& shaderLimits):
    m_ShaderType(SRSL_SHADER_NONE),
    m_Limits(shaderLimits){

    }

    ShaderModule::~ShaderModule() = default;

    SRSL_SHADER_TYPE ShaderModule::getShaderType() {
        return m_ShaderType;
    }
}
