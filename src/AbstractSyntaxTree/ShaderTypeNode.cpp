#include "ShaderTypeNode.hpp"

namespace Srsl{

    ShaderTypeNode::ShaderTypeNode(SRSL_SHADER_TYPE type, uint64 lineNumber) :
    AbstractNode(shaderTypeToString(type), AST_NODE_CLASS_DEFAULT, AST_NODE_SHADER_TYPE, lineNumber),
    m_ShaderType(type) {

    }

    SRSL_SHADER_TYPE ShaderTypeNode::getShaderType() const {
        return m_ShaderType;
    }

    void ShaderTypeNode::generateCode(UP<Exporter> &exporter, const std::string &indent) const {
        for (const auto& child : m_Children){
            child->generateCode(exporter, indent);
        }
    }
}