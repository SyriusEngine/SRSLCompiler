#include "ShaderTypeNode.hpp"

namespace Srsl{

    ShaderTypeNode::ShaderTypeNode(SRSL_SHADER_TYPE type, uint64 lineNumber) :
    AbstractNode(AST_NODE_SHADER_TYPE, lineNumber),
    m_ShaderType(type) {
        switch (m_ShaderType) {
            case SRSL_VERTEX_SHADER: m_Value = "Vertex Shader"; break;
            case SRSL_FRAGMENT_SHADER: m_Value = "Fragment Shader"; break;
            case SRSL_GEOMETRY_SHADER: m_Value = "Geometry Shader"; break;
            case SRSL_SHADER_NONE:      break;
            default:
                SRSL_THROW_EXCEPTION("Unknown shader type: %i", m_ShaderType);
        }

    }

    SRSL_SHADER_TYPE ShaderTypeNode::getShaderType() const {
        return m_ShaderType;
    }
}