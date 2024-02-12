#include "VariableNode.hpp"

namespace Srsl{

    NewVariableNode::NewVariableNode(const std::string &name, const std::string &semanticName, const TypeDesc &typeDesc, uint64 lineNumber):
    AbstractNode(name, AST_NODE_VARIABLE, lineNumber),
    m_SemanticName(semanticName),
    m_Type(typeDesc) {

    }

    NewVariableNode::~NewVariableNode() {

    }

    void NewVariableNode::fillSymbolTable(RCP<SymbolTable> symbolTable) {
        m_SymbolTable = symbolTable;
        if (m_SymbolTable->hasSymbol(m_Value)){
            SRSL_THROW_EXCEPTION("Redefinition of symbol (%s) at line %d", m_Value.c_str(), m_LineNumber);
        }

        Symbol symbol;
        symbol.name = m_Value;
        symbol.type = m_Type;
        symbol.semantic = m_SemanticName;

        // for structs, these already have a symbol table defined, get the pointer to that table and add it to the new symbol
        if (m_Type.type == VT_STRUCT){
            auto& symbolOfStruct = symbolTable->getSymbol(m_Type.typeStr);
            symbol.structTable = symbolOfStruct.structTable;
        }
        symbolTable->addSymbol(symbol);

        AbstractNode::fillSymbolTable(symbolTable);
    }
}
