#include "ShaderProgramImpl.hpp"

namespace Srsl{

    ShaderProgramImpl::ShaderProgramImpl() {

    }

    ShaderProgramImpl::~ShaderProgramImpl() {

    }

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
        if (m_VertexShader != nullptr and m_FragmentShader != nullptr) {

        }
        else {
            SRSL_THROW_EXCEPTION("Vertex and fragment shaders are not set.");
        }

    }

    void ShaderProgramImpl::exportShader(ExportDesc &desc) {
        if (m_VertexShader != nullptr){
            m_VertexShader->exportShader(desc);
        }
        if (m_FragmentShader != nullptr){
            m_FragmentShader->exportShader(desc);
        }
    }
}
