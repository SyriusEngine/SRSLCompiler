#pragma once

#include "BaseNode.hpp"

namespace Srsl {

    class ShaderTypeNode : public BaseNode {
    public:
        ShaderTypeNode(SRSL_SHADER_TYPE shaderType, SharedPtr<SymbolTable> symbolTable, u64 lineNr, u64 charPos);

        ~ShaderTypeNode() override = default;

    private:
        const SRSL_SHADER_TYPE m_ShaderType;
    };
}