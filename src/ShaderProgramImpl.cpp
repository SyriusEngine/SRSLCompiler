#include "ShaderProgramImpl.hpp"

namespace Srsl{

    ShaderProgramImpl::ShaderProgramImpl():
    ShaderProgram(){

    }

    ShaderProgramImpl::~ShaderProgramImpl() = default;

    void ShaderProgramImpl::addShaderModule(std::shared_ptr<ShaderModule> shaderModule) {
        switch (shaderModule->getShaderType()) {
            case SRSL_VERTEX_SHADER:
                m_VertexShader = std::dynamic_pointer_cast<ShaderModuleImpl>(shaderModule);
                break;
            case SRSL_FRAGMENT_SHADER:
                m_FragmentShader = std::dynamic_pointer_cast<ShaderModuleImpl>(shaderModule);
                break;
            default:
                SRSL_THROW_EXCEPTION("Shader type (%d) not supported", shaderModule->getShaderType());
        }
    }

    void ShaderProgramImpl::link() {
    }

    void ShaderProgramImpl::exportShader(const ProgramExportDesc& programExportDesc) {

    }

}
