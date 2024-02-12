#include "AbstractNode.hpp"

namespace Srsl{

    AbstractNode::AbstractNode(AST_NODE_TYPE type, uint64 lineNumber):
    m_Type(type),
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
}
