#include "Nodes.hpp"

namespace Srsl{

    ConstantNode::ConstantNode(const std::string &value, uint64 lineNumber): 
    AbstractNode(value, AST_NODE_CLASS_TYPED, AST_NODE_CONSTANT, lineNumber) {
        if (m_Value.find('.') != std::string::npos){
            m_Type.type = VT_FLOAT;
            m_Type.typeStr = "float";
        }
        else if (m_Value == "true" or m_Value == "false"){
            m_Type.type = VT_BOOL;
            m_Type.typeStr = "bool";
        }
        else {
            m_Type.type = VT_INT;
            m_Type.typeStr = "int";
        }
    }

    ConstantNode::~ConstantNode() = default;

    void ConstantNode::generateCode(UP<Exporter> &exporter, const std::string &indent) const {
        exporter->addLine(indent + m_Value);
    }


    AssignmentNode::AssignmentNode(uint64 lineNumber) :
    AbstractNode("=", AST_NODE_CLASS_DEFAULT, AST_NODE_ASSIGNMENT, lineNumber),
    m_Left(nullptr),
    m_Right(nullptr) {

    }

    AssignmentNode::~AssignmentNode() = default;

    void AssignmentNode::construct() {
        SRSL_PRECONDITION(m_Children.size() == 2, "Invalid number of children, expected 2 got %s", m_Children.size());

        m_Left = m_Children[0].get();
        m_Right = m_Children[1].get();

        AbstractNode::construct();
    }

    void AssignmentNode::generateCode(UP<Exporter> &exporter, const std::string &indent) const {
        SRSL_PRECONDITION(m_Left != nullptr, "Left side of assignment is null");
        SRSL_PRECONDITION(m_Right != nullptr, "Right side of assignment is null");
        SRSL_PRECONDITION(m_Parent != nullptr, "Parent of assignment is null")

        m_Left->generateCode(exporter, indent);
        exporter->addLine(" = ");
        m_Right->generateCode(exporter, "");
        // TODO: Dirty fix for global variables
        if (m_Parent->getNodeType() == AST_NODE_SHADER_TYPE){
            exporter->addLine(";\n");
        }

    }

    InitializerListNode::InitializerListNode(uint32 initializerCount, uint64 lineNumber):
    AbstractNode("{ }", AST_NODE_CLASS_TYPED, AST_NODE_INITIALIZER_LIST, lineNumber){

    }

    InitializerListNode::~InitializerListNode() = default;

    void InitializerListNode::generateCode(UP<Exporter> &exporter, const std::string &indent) const {
        exporter->addLine("{");
        for (const auto& child: m_Children){
            child->generateCode(exporter, "");
            if (child != m_Children.back()){
                exporter->addLine(", ");
            }
        }
        exporter->addLine("}");

    }
}
