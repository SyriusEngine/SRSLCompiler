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

    void NewVariableNode::generateCode(UP<Exporter> &exporter, const std::string &indent) const {
        std::string line;
        if (m_Type.isConst){
            line += "const ";
        }
        line += exporter->getVariableType(m_Type) + " ";
        if (m_Parent->getType() == AST_NODE_CONSTANT_BUFFER_DECLARATION){
            line += m_Parent->getValue() + SRSL_CONCAT_LIT;
        }
        line += m_Value;
        for (auto m_ArraySize : m_Type.arraySizes){
            line += "[" + std::to_string(m_ArraySize) + "]";
        }
        exporter->addLine(line);

    }

    VariableNode::VariableNode(const std::string& name, uint64 lineNumber):
    AbstractNode(name, AST_NODE_VARIABLE, lineNumber){

    }

    VariableNode::~VariableNode() {

    }

    void VariableNode::fillSymbolTable(RCP<SymbolTable> symbolTable) {
        m_SymbolTable = symbolTable;
        if (!m_SymbolTable->hasSymbol(m_Value)){
            SRSL_THROW_EXCEPTION("Variable (%s) not found at (line %d)", m_Value.c_str(), m_LineNumber);
        }
        AbstractNode::fillSymbolTable(symbolTable);
    }

    void VariableNode::generateCode(UP<Exporter> &exporter, const std::string &indent) const {
        exporter->addLine(m_Value);

        for (const auto& child : m_Children){
            if (child->getType() == AST_NODE_CONSTANT){
                exporter->addLine("[" + child->getValue() + "]");
            }
        }

    }

    TypeConstructorNode::TypeConstructorNode(const TypeDesc &typeDesc, uint64 lineNumber):
    AbstractNode(typeDesc.typeStr, AST_NODE_INITIALIZER, lineNumber),
    m_Type(typeDesc) {

    }

    TypeConstructorNode::~TypeConstructorNode() {

    }

    void TypeConstructorNode::generateCode(std::unique_ptr<Exporter> &exporter, const std::string &indent) const {
        exporter->addLine(indent + exporter->getVariableType(m_Type) + "(");
        for (const auto& child : m_Children){
            child->generateCode(exporter, "");
            if (child != m_Children.back()){
                exporter->addLine(", ");
            }
        }
        exporter->addLine(indent + ")");

    }
}
