#include "ShaderTypeNode.hpp"

namespace Srsl{

    ShaderTypeNode::ShaderTypeNode(SRSL_SHADER_TYPE shaderType, SharedPtr<SymbolTable> symbolTable, u64 lineNr, u64 charPos):
    BaseNode(shaderTypeToString(shaderType), symbolTable, SymbolType(),
             NodeIDGenerator<ShaderTypeNode>::getID(), AST_NODE_CLASS_DEFAULT, lineNr, charPos),
    m_ShaderType(shaderType){

    }

}
