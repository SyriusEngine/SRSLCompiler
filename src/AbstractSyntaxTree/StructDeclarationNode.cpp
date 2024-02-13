#include "StructDeclarationNode.hpp"

namespace Srsl{

    StructDeclarationNode::StructDeclarationNode(const std::string &name, uint64 lineNumber):
    AbstractNode(name, AST_NODE_STRUCT_DECLARATION, lineNumber) {
    }

    StructDeclarationNode::~StructDeclarationNode() {

    }

    void StructDeclarationNode::fillSymbolTable(RCP<SymbolTable> symbolTable) {
        m_SymbolTable = symbolTable;
        Symbol symbol;
        symbol.name = m_Value;

        // a struct has its own symbol table for its members
        symbol.structTable = createRCP<SymbolTable>(m_Value);
        symbolTable->addChild(symbol.structTable);
        symbolTable->addSymbol(symbol);
        for (const auto& child : m_Children){
            child->fillSymbolTable(symbol.structTable);
        }
    }

    void StructDeclarationNode::generateCode(UP<Exporter>& exporter, const std::string &indent) const {
        exporter->addLine(indent + "struct " + m_Value + " {\n");
        std::string newIndent = indent + "\t";
        for (const auto& child : m_Children){
            exporter->addLine(newIndent);
            child->generateCode(exporter, newIndent);
            exporter->addLine(";\n");
        }
        exporter->addLine(indent + "};\n\n");
    }

}
