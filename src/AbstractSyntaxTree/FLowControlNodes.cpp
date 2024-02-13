#include "FLowControlNodes.hpp"

namespace Srsl{

    FlowControlNode::FlowControlNode(const std::string &value, uint64 lineNumber):
    AbstractNode(value, AST_NODE_CONTROL_FLOW_STATEMENT, lineNumber){

    }

    FlowControlNode::~FlowControlNode() = default;

    void FlowControlNode::generateCode(UP<Exporter>& exporter, const std::string &indent) const {
        if (exporter->getLanguageType() == SRSL_TARGET_CPP and m_Value == "discard"){
            exporter->addLine("throw int(0x87A9);\n");
        }
        else{
            exporter->addLine(m_Value);
        }
    }


    WhileNode::WhileNode(uint64 lineNumber):
    AbstractNode("while", AST_NODE_WHILE_STATEMENT, lineNumber){

    }

    WhileNode::~WhileNode() = default;

    void WhileNode::construct() {
        if (m_Children.size() != 2){
            SRSL_THROW_EXCEPTION("Invalid number of children, expected 2 got %s", m_Children.size());
        }
        
        m_Condition = m_Children[0].get();
        m_Scope = m_Children[1].get();

        AbstractNode::construct();
    }

    void WhileNode::generateCode(UP<Exporter>& exporter, const std::string &indent) const {
        exporter->addLine("while (");
        m_Condition->generateCode(exporter, "");
        exporter->addLine(")");
        m_Scope->generateCode(exporter, indent);
    }


    ForNode::ForNode(uint64 lineNumber):
    AbstractNode("for", AST_NODE_FOR_STATEMENT, lineNumber){
    }

    ForNode::~ForNode() = default;

    void ForNode::construct() {
        if (m_Children.size() != 4){
            SRSL_THROW_EXCEPTION("Invalid number of children, expected 4 got %s", m_Children.size());
        }
        m_LoopVariable = m_Children[0].get();
        m_LoopCondition = dynamic_cast<ExpressionNode*>(m_Children[1].get());
        m_Increment = dynamic_cast<ExpressionNode*>(m_Children[2].get());
        m_Scope = m_Children[3].get();
        if (m_LoopCondition == nullptr or m_Increment == nullptr){
            SRSL_THROW_EXCEPTION("Invalid child type, expected ExpressionNode, got %s", m_Children[1]->getType());
        }
        AbstractNode::construct();
    }

    void ForNode::generateCode(UP<Exporter>& exporter, const std::string &indent) const {
        exporter->addLine("for (");
        m_LoopVariable->generateCode(exporter, "");
        exporter->addLine("; ");
        m_LoopCondition->generateCode(exporter, "");
        exporter->addLine("; ");
        m_Increment->generateCode(exporter, "");
        exporter->addLine(")");
        m_Scope->generateCode(exporter, indent);
    }


    IfNode::IfNode(uint64 lineNumber) :
    AbstractNode("if", AST_NODE_IF_STATEMENT, lineNumber),
    m_Scope(nullptr),
    m_Condition(nullptr),
    m_optional(nullptr){
    }

    IfNode::~IfNode() = default;

    void IfNode::construct() {
        if (m_Children.size() < 2){
            SRSL_THROW_EXCEPTION("Invalid number of children, expected at least 2 got %s", m_Children.size());
        }
        m_Condition = m_Children[0].get();
        m_Scope = m_Children[1].get();
        if (m_Children.size() == 3){
            m_optional = m_Children[2].get();
        }
        AbstractNode::construct();
    }

    void IfNode::generateCode(UP<Exporter>& exporter, const std::string &indent) const {
        exporter->addLine("if (");
        m_Condition->generateCode(exporter, "");
        exporter->addLine(")");
        m_Scope->generateCode(exporter, indent);
        if (m_optional){
            m_optional->generateCode(exporter, indent);
        }
    }

    ElseNode::ElseNode(uint64 lineNumber):
    AbstractNode("else", AST_NODE_ELSE_STATEMENT, lineNumber),
    m_Scope(nullptr){
    }

    ElseNode::~ElseNode() = default;

    void ElseNode::construct() {
        if (m_Children.size() != 1){
            SRSL_THROW_EXCEPTION("Invalid number of children, expected 1 got %s", m_Children.size());
        }
        m_Scope = m_Children[0].get();
        AbstractNode::construct();
    }

    void ElseNode::generateCode(UP<Exporter>& exporter, const std::string &indent) const {
        SRSL_PRECONDITION(m_Scope != nullptr, "Scope is null");

        exporter->addLine(indent + "else");
        m_Scope->generateCode(exporter, indent);
    }


    ElseIfNode::ElseIfNode(uint64 lineNumber):
    AbstractNode("else if", AST_NODE_IF_ELSE_STATEMENT, lineNumber){
    }

    ElseIfNode::~ElseIfNode() = default;

    void ElseIfNode::construct() {
        if (m_Children.size() != 2){
            SRSL_THROW_EXCEPTION("Invalid number of children, expected 2 got %s", m_Children.size());
        }
        m_Condition = m_Children[0].get();
        m_Scope = m_Children[1].get();
        AbstractNode::construct();
    }

    void ElseIfNode::generateCode(UP<Exporter>& exporter, const std::string &indent) const {
        SRSL_PRECONDITION(m_Condition != nullptr, "Condition is null");
        SRSL_PRECONDITION(m_Scope != nullptr, "Scope is null");

        exporter->addLine(indent + "else if (");
        m_Condition->generateCode(exporter, "");
        exporter->addLine(")");
        m_Scope->generateCode(exporter, indent);
    }


    ReturnNode::ReturnNode(uint64 lineNumber):
    AbstractNode("return", AST_NODE_RETURN_STATEMENT, lineNumber){
    }

    ReturnNode::~ReturnNode() = default;

    void ReturnNode::generateCode(UP<Exporter>& exporter, const std::string &indent) const {
        exporter->addLine(indent + "return ");
        m_Children[0]->generateCode(exporter, "");
        exporter->addLine(";\n");
    }

}