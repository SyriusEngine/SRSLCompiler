#include "AbstractNode.hpp"

namespace Srsl{

    AbstractNode::AbstractNode(const std::string& value, AST_NODE_TYPE type, uint64 lineNumber):
    m_Type(type),
    m_Value(value),
    m_LineNumber(lineNumber),
    m_Parent(nullptr){

    }

    AbstractNode *AbstractNode::getParent() const {
        return m_Parent;
    }

    AST_NODE_TYPE AbstractNode::getType() const {
        return m_Type;
    }

    uint64 AbstractNode::getLineNumber() const {
        return m_LineNumber;
    }

    const std::string &AbstractNode::getValue() const {
        return m_Value;
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
}
