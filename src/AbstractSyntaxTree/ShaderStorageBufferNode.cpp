#include "ShaderStorageBufferNode.hpp"

namespace Srsl{

    ShaderStorageBufferNode::ShaderStorageBufferNode(const std::string& name, uint32 slot, uint64 lineNumber):
    AbstractNode(name, AST_NODE_CLASS_TYPED, AST_NODE_SHADER_STORAGE_BUFFER, lineNumber),
    m_Slot(slot){
        m_Type.type = VT_STRUCT;
    }

    ShaderStorageBufferNode::~ShaderStorageBufferNode() = default;

    void ShaderStorageBufferNode::fillSymbolTable(RCP<SymbolTable> symbolTable) {
        m_SymbolTable = symbolTable;
        Symbol symbol;
        symbol.name = m_Value;
        symbol.slot = m_Slot;
        symbol.symbolType = ST_SHADER_STORAGE_BUFFER;
        symbol.structTable = createRCP<SymbolTable>(m_Value);
        symbolTable->addChild(symbol.structTable);
        symbolTable->addSymbol(symbol);
        for (auto& child : m_Children){
            child->fillSymbolTable(symbol.structTable);
        }
    }

    void ShaderStorageBufferNode::generateCode(UP<Exporter>& exporter, const std::string& indent) const {
        exporter->setAppendBuffer(PROGRAM_SECTION_SHADER_STORAGE_BUFFER);
        switch (exporter->getLanguageType()) {
            case SRSL_TARGET_GLSL:  generateGlsl(exporter, indent); break;
            case SRSL_TARGET_HLSL:  generateHlsl(exporter, indent); break;
            default: SRSL_THROW_EXCEPTION("Unsupported language type (%d)", exporter->getLanguageType());
        }
        exporter->setAppendBuffer(PROGRAM_SECTION_DEFAULT);
    }

    void ShaderStorageBufferNode::generateGlsl(UP<Exporter> &exporter, const std::string &indent) const {
        exporter->addLine("layout(std430, binding = " + std::to_string(m_Slot) + ") buffer " + SRSL_TYPE_DECL + m_Value + " {\n");
        for (auto& child : m_Children){
            exporter->addLine(indent + "\t");
            child->generateCode(exporter, "\t");
            exporter->addLine(";\n");
        }
        exporter->addLine("} " + m_Value + ";\n");

    }

    void ShaderStorageBufferNode::generateHlsl(UP<Exporter> &exporter, const std::string &indent) const {
        exporter->addLine("struct " + SRSL_TYPE_DECL + m_Value + " {\n");
        for (auto& child : m_Children){
            exporter->addLine(indent + "\t");
            child->generateCode(exporter, "\t");
            exporter->addLine(";\n");
        }
        exporter->addLine("};\n\n");

        exporter->addLine("RWStructuredBuffer<" + SRSL_TYPE_DECL + m_Value + "> " + m_Value + " : register(u" + std::to_string(m_Slot) + ");\n");
    }

}
