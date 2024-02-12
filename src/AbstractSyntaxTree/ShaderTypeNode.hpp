#pragma once

#include "AbstractNode.hpp"

namespace Srsl{

    class ShaderTypeNode : public AbstractNode{
    public:
        ShaderTypeNode(SRSL_SHADER_TYPE type, uint64 lineNumber);

        ~ShaderTypeNode() override = default;

        [[nodiscard]] SRSL_SHADER_TYPE getShaderType() const;

    private:
        const SRSL_SHADER_TYPE m_ShaderType;
    };

}