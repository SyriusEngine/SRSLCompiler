#include "VariableNode.hpp"

namespace Srsl{

    NewVariableNode::NewVariableNode(const std::string &name, const std::string &semanticName, const TypeDesc &typeDesc, uint64 lineNumber):
    AbstractNode(name, AST_NODE_CLASS_TYPED, AST_NODE_VARIABLE_DECLARATION, lineNumber, typeDesc),
    m_SemanticName(semanticName){
    }

    NewVariableNode::~NewVariableNode() = default;

    void NewVariableNode::fillSymbolTable(RCP<SymbolTable> symbolTable) {
        m_SymbolTable = symbolTable;
        if (m_SymbolTable->hasSymbol(m_Value)){
            throw RedefinitionError(m_Value, m_SymbolTable->getName(), m_LineNumber);
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
        if (m_Parent->getNodeType() == AST_NODE_CONSTANT_BUFFER_DECLARATION){
            line += m_Parent->getValue() + SRSL_CONCAT_LIT;
        }
        line += m_Value;
        for (auto m_ArraySize : m_Type.arraySizes){
            line += "[" + std::to_string(m_ArraySize) + "]";
        }
        exporter->addLine(line);

    }

    VariableNode::VariableNode(const std::string& name, uint64 lineNumber):
    AbstractNode(name, AST_NODE_CLASS_TYPED, AST_NODE_VARIABLE, lineNumber){

    }

    VariableNode::~VariableNode() = default;

    void VariableNode::fillSymbolTable(RCP<SymbolTable> symbolTable) {
        m_SymbolTable = symbolTable;
        if (!m_SymbolTable->hasSymbol(m_Value)){
            throw UndefinedSymbolError(m_Value, m_SymbolTable->getName(), m_LineNumber);
        }
        AbstractNode::fillSymbolTable(symbolTable);

        auto symbol = m_SymbolTable->getSymbol(m_Value);
        m_Type = symbol.type;
    }

    TypeDesc VariableNode::getEvaluatedType() const {
        auto retVal = m_Type;
        // subtract array accesses
        for (const auto& child : m_Children){
            if (retVal.arraySizes.empty() and retVal.columns > 1 and retVal.rows > 1) {
                retVal.rows = 1;
            }
            else if (retVal.arraySizes.empty() and retVal.columns > 1){
                retVal.columns = 1;
            }
            else{
                retVal.arraySizes.pop_back();
            }
        }
        return retVal;
    }

    void VariableNode::generateCode(UP<Exporter> &exporter, const std::string &indent) const {
        exporter->addLine(m_Value);

        for (const auto& child : m_Children){
            if (child->getNodeType() == AST_NODE_CONSTANT){
                exporter->addLine("[" + child->getValue() + "]");
            }
        }
    }

    TypeConstructorNode::TypeConstructorNode(const TypeDesc &typeDesc, uint64 lineNumber):
    AbstractNode(typeDesc.typeStr, AST_NODE_CLASS_TYPED, AST_NODE_INITIALIZER, lineNumber, typeDesc){
        TypeDesc mT(m_Value);
        m_Type = mT;
    }

    TypeConstructorNode::~TypeConstructorNode() = default;

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
