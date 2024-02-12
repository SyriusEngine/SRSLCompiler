#include "Nodes.hpp"

namespace Srsl{

    ConstantNode::ConstantNode(const std::string &value, uint64 lineNumber): 
    AbstractNode(value, AST_NODE_CONSTANT, lineNumber) {

    }

    ConstantNode::~ConstantNode() {

    }


    AssignmentNode::AssignmentNode(uint64 lineNumber) :
    AbstractNode("=", AST_NODE_ASSIGNMENT, lineNumber) {

    }

    AssignmentNode::~AssignmentNode() {

    }

    void AssignmentNode::construct() {
        SRSL_PRECONDITION(m_Children.size() == 2, "Invalid number of children, expected 2 got %s", m_Children.size());

        m_Left = m_Children[0].get();
        m_Right = m_Children[1].get();
        m_Left->construct();
        m_Right->construct();
    }

    InitializerListNode::InitializerListNode(uint32 initializerCount, uint64 lineNumber):
    AbstractNode("{ }", AST_NODE_INITIALIZER_LIST, lineNumber){

    }

    InitializerListNode::~InitializerListNode() {

    }

    ExpressionNode::ExpressionNode(const std::string& operation, OperationType opType, uint64 lineNumber):
    AbstractNode(operation, AST_NODE_EXPRESSION, lineNumber),
    m_OperationType(opType){

    }

    ExpressionNode::~ExpressionNode() {

    }

    void ExpressionNode::construct() {
        if (m_Children.size() == 1){
            m_Right = m_Children[0].get();
            m_Right->construct();
        }
        else if (m_Children.size() == 2){
            m_Left = m_Children[0].get();
            m_Right = m_Children[1].get();
            m_Left->construct();
            m_Right->construct();
        }
        else{
            SRSL_THROW_EXCEPTION("Invalid number of children, expected 1 or 2 got %s", m_Children.size());
        }
    }

}
