#include "ConstantBufferNode.hpp"

namespace Srsl{

    ConstantBufferNode::ConstantBufferNode(const std::string &name, uint32 slot, uint64 lineNumber):
    AbstractNode(name, AST_NODE_CONSTANT_BUFFER_DECLARATION, lineNumber),
    m_Slot(slot){
    }

    ConstantBufferNode::~ConstantBufferNode() = default;

    void ConstantBufferNode::fillSymbolTable(RCP<SymbolTable> symbolTable) {
        m_SymbolTable = symbolTable;
        Symbol symbol;
        symbol.name = m_Value;
        symbol.slot = m_Slot;
        symbol.type.isConst = true;
        symbol.symbolType = ST_CONSTANT_BUFFER;
        symbol.structTable = createRCP<SymbolTable>(m_Value);
        symbolTable->addChild(symbol.structTable);
        symbolTable->addSymbol(symbol);
        for (auto& child : m_Children){
            child->fillSymbolTable(symbol.structTable);
        }
    }

    void ConstantBufferNode::generateCode(UP<Exporter> &exporter, const std::string &indent) const {
        exporter->setAppendBuffer(PROGRAM_SECTION_CONSTANT_BUFFER);
        std::string extra;
        switch (exporter->getLanguageType()) {
            case SRSL_TARGET_GLSL: {
                exporter->addLine(indent + "layout(std140, binding = " + std::to_string(m_Slot) + ") uniform " + m_Value + " {\n");
                break;
            }
            case SRSL_TARGET_HLSL: {
                exporter->addLine(indent + "cbuffer " + m_Value + " : register(b" + std::to_string(m_Slot) + "){\n");
                break;
            }
            case SRSL_TARGET_CPP: {
                exporter->addLine(indent + "struct " + SRSL_TYPE_DECL + m_Value + "{\n");
                extra = "static " + SRSL_TYPE_DECL + m_Value + "* " + m_Value + " = nullptr;\n";
//                auto cppWriter = dynamic_cast<CppWriter*>(exporter);
//                cppWriter->m_ConstantBuffers.push_back({m_Name, m_Slot});
                break;
            }
            default:
                SRSL_THROW_EXCEPTION("Unsupported language type (%d)", exporter->getLanguageType());
        }
        uint32 lineNr = m_LineNumber + 1;
        for (auto& child : m_Children){
            exporter->addLine(indent + "\t");
            child->generateCode(exporter, "\t");
            exporter->addLine(";\n");
        }
        lineNr += 2;
        exporter->addLine(indent + "};\n\n");
        exporter->addLine(extra);
        exporter->setAppendBuffer(PROGRAM_SECTION_DEFAULT);
    }

}
