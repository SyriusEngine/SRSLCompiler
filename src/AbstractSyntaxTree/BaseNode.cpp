#include "BaseNode.hpp"

namespace Srsl{

    BaseNode::~BaseNode() = default;

    NodeID BaseNode::getID() const {
        return m_ID;
    }

    NodeType BaseNode::getNodeType() const {
        return m_NodeType;
    }

    AST_NODE_CLASS BaseNode::getClass() const {
        return m_Class;
    }

    u64 BaseNode::getLineNr() const {
        return m_LineNr;
    }

    u64 BaseNode::getCharPos() const {
        return m_CharPos;
    }

    const std::string& BaseNode::getValue() const {
        return m_Value;
    }

    const SymbolType& BaseNode::getType() const {
        return m_Type;
    }

    const BaseNode *BaseNode::getParent() const {
        return m_Parent;
    }

    void BaseNode::toDot(std::ofstream &stream) const {
        if (m_Parent == nullptr){
            stream << "digraph AST {" << std::endl;
        }
        stream << "\tnode" << m_ID << " [label=\"" << m_Value << "\"];" << std::endl;
        for (const auto& child : m_Children){
            child->toDot(stream);
            stream << "\tnode" << m_ID << " -> node" << child->getID() << ";" << std::endl;
        }
        if (m_Parent == nullptr){
            stream << "}" << std::endl;
        }
    }

    BaseNode::BaseNode(const std::string &value, View<SymbolTable> symbolTable, SymbolType type, NodeType nodeType, AST_NODE_CLASS nodeClass, u64 lineNr, u64 charPos):
    m_Value(value),
    m_SymbolTable(symbolTable),
    m_Type(std::move(type)),
    m_NodeType(nodeType),
    m_Class(nodeClass),
    m_LineNr(lineNr),
    m_CharPos(charPos),
    m_Parent(nullptr),
    m_ID(generateID()) {

    }

}
