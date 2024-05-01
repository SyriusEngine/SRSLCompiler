#include "AbstractNode.hpp"
#include "FunctionNode.hpp"

namespace Srsl{

    AbstractNode::AbstractNode(const std::string& value, AST_NODE_TYPE type, uint64 lineNumber):
    m_NodeType(type),
    m_Value(value),
    m_LineNumber(lineNumber),
    m_Type(),
    m_Parent(nullptr){
    }

    AbstractNode::AbstractNode(const std::string &value, AST_NODE_TYPE type, uint64 lineNumber, const TypeDesc &typeDesc):
    m_NodeType(type),
    m_Value(value),
    m_LineNumber(lineNumber),
    m_Type(typeDesc),
    m_Parent(nullptr){
    }

    AbstractNode* AbstractNode::addExistingChild(UP<AbstractNode>&& child){
        child->m_Parent = this;
        m_Children.push_back(std::move(child));
        return m_Children.back().get();
    }

    AbstractNode *AbstractNode::getParent() const {
        return m_Parent;
    }

    AST_NODE_TYPE AbstractNode::getNodeType() const {
        return m_NodeType;
    }

    uint64 AbstractNode::getLineNumber() const {
        return m_LineNumber;
    }

    const std::string &AbstractNode::getValue() const {
        return m_Value;
    }

    const TypeDesc &AbstractNode::getType() const {
        return m_Type;
    }

    RCP<SymbolTable> AbstractNode::getSymbolTable() const {
        return m_SymbolTable;
    }

    void AbstractNode::toDot(std::ofstream &stream) const {
        stream << "\tnode" << this << " [label=\"" << m_Value << "\"];" << std::endl;
        for(const auto& child: m_Children){
            stream << "\tnode" << this << " -> " << "node" << child.get() << ";" << std::endl;
            child->toDot(stream);
        }

    }

    void AbstractNode::construct() {
        for (const auto& child: m_Children){
            child->construct();
        }
    }

    void AbstractNode::fillSymbolTable(RCP<SymbolTable> table){
        m_SymbolTable = table;
        for (const auto& child: m_Children){
            child->fillSymbolTable(table);
        }
    }

    void AbstractNode::validate(Validator& ctx) {
        for (const auto& child: m_Children){
            child->validate(ctx);
        }
    }

    void AbstractNode::optimize() {
        for (const auto& child: m_Children){
            child->optimize();
        }
    }

    void AbstractNode::createTestCode(TestCodeGenerator& testGen) {
        for (const auto& child: m_Children){
            child->createTestCode(testGen);
        }
    }

    TypeDesc AbstractNode::getEvaluatedType() const {
        return m_Type;
    }

}
