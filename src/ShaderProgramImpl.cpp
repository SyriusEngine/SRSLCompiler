#include "ShaderProgramImpl.hpp"

namespace Srsl{

    ShaderProgramImpl::ShaderProgramImpl():
    ShaderProgram(){

    }

    ShaderProgramImpl::ShaderProgramImpl(const ShaderLimits &limits) :
    ShaderProgram(limits) {

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
        if (m_VertexShader != nullptr and m_FragmentShader != nullptr) {
            Executor validator(m_Limits);
            m_VertexShader->validate(validator);
            m_FragmentShader->validate(validator);

        }
        else {
            SRSL_THROW_EXCEPTION("Vertex shader (%p) and fragment shader (%p) are not set.", m_VertexShader.get(), m_FragmentShader.get());
        }

    }

    void ShaderProgramImpl::exportShader(ExportDesc &desc) {
        if (m_VertexShader != nullptr){
            m_VertexShader->exportShader(desc, m_Limits);
        }
        if (m_FragmentShader != nullptr){
            m_FragmentShader->exportShader(desc, m_Limits);
        }
    }
}
