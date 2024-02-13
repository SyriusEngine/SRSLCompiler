#include "FLowControlNodes.hpp"

namespace Srsl{

    FlowControlNode::FlowControlNode(const std::string &value, uint64 lineNumber):
    BaseNode(NodeType::FLowControl, lineNumber){
        m_Value = value;
    }

    FlowControlNode::~FlowControlNode() {

    }

    void FlowControlNode::exportCode(LanguageWriter *writer, const std::string &indent) const {
        if (writer->getLanguageType() == LanguageType::CPP and m_Value == "discard"){
            writer->addLine(indent + "throw int(0x87A9);\n", m_LineNumber);
        }
        else{
            writer->addLine(indent + m_Value + ";\n", m_LineNumber);
        }
    }


    WhileNode::WhileNode(uint64 lineNumber) :
    BaseNode(NodeType::WhileLoop, lineNumber){
        m_Value = "While";
    }

    WhileNode::~WhileNode() {

    }

    void WhileNode::construct() {
        if (m_Children.size() != 2){
            throw std::runtime_error("[WhileNode]: Incorrect number of children!");
        }
        m_Condition = m_Children[0].get();
        m_Scope = m_Children[1].get();
    }

    void WhileNode::exportCode(LanguageWriter *writer, const std::string &indent) const {
        writer->addLine(indent + "while (", m_LineNumber);
        m_Condition->exportCode(writer, "");
        writer->addLine(")", m_LineNumber);
        m_Scope->exportCode(writer, indent);
    }


    ForNode::ForNode(uint64 lineNumber):
    BaseNode(NodeType::ForLoop, lineNumber){
        m_Value = "For";

    }

    ForNode::~ForNode() {

    }

    void ForNode::construct() {
        if (m_Children.size() != 4){
            throw std::runtime_error("[ForNode]: Incorrect number of children!");
        }
        m_LoopVariable = m_Children[0].get();
        m_LoopCondition = dynamic_cast<ExpressionNode*>(m_Children[1].get());
        m_Increment = dynamic_cast<ExpressionNode*>(m_Children[2].get());
        m_Scope = m_Children[3].get();
        if (m_LoopCondition == nullptr or m_Increment == nullptr){
            throw std::runtime_error("[ForNode]: Invalid child configuration");
        }
        BaseNode::construct();
    }

    void ForNode::exportCode(LanguageWriter *writer, const std::string &indent) const {
        writer->addLine(indent + "for (", m_LineNumber);
        m_LoopVariable->exportCode(writer, "");
        writer->addLine("; ", m_LineNumber);
        m_LoopCondition->exportCode(writer, "");
        writer->addLine("; ", m_LineNumber);
        m_Increment->exportCode(writer, "");
        writer->addLine(")", m_LineNumber);
        m_Scope->exportCode(writer, indent);
    }


    IfNode::IfNode(uint64 lineNumber) :
    BaseNode(NodeType::IfStatement, lineNumber),
    m_Scope(nullptr),
    m_Condition(nullptr),
    m_optional(nullptr){
        m_Value = "If";
    }

    IfNode::~IfNode() {

    }

    void IfNode::construct() {
        if (m_Children.size() < 2){
            throw std::runtime_error("[IfNode]: Incorrect number of children!");
        }
        m_Condition = m_Children[0].get();
        m_Scope = m_Children[1].get();
        if (m_Children.size() == 3){
            m_optional = m_Children[2].get();
        }
        BaseNode::construct();
    }

    void IfNode::exportCode(LanguageWriter *writer, const std::string &indent) const {
        writer->addLine(indent + "if (", m_LineNumber);
        m_Condition->exportCode(writer, "");
        writer->addLine(")", m_LineNumber);
        m_Scope->exportCode(writer, indent);
        if (m_optional){
            m_optional->exportCode(writer, indent);
        }
    }

    ElseNode::ElseNode(uint64 lineNumber):
    BaseNode(NodeType::ElseStatement, lineNumber){
        m_Value = "Else";
    }

    ElseNode::~ElseNode() {

    }

    void ElseNode::construct() {
        if (m_Children.size() != 1){
            throw std::runtime_error("[ElseNode]: Incorrect number of children!");
        }
        m_Scope = m_Children[0].get();
        BaseNode::construct();
    }

    void ElseNode::exportCode(LanguageWriter *writer, const std::string &indent) const {
        writer->addLine(indent + "else", m_LineNumber);
        m_Scope->exportCode(writer, indent);
    }


    ElseIfNode::ElseIfNode(uint64 lineNumber):
    BaseNode(NodeType::ElseIfStatement, lineNumber){
        m_Value = "ElseIf";
    }

    ElseIfNode::~ElseIfNode() {

    }

    void ElseIfNode::construct() {
        if (m_Children.size() != 2){
            throw std::runtime_error("[ElseIfNode]: Incorrect number of children!");
        }
        m_Condition = m_Children[0].get();
        m_Scope = m_Children[1].get();
        BaseNode::construct();
    }

    void ElseIfNode::exportCode(LanguageWriter *writer, const std::string &indent) const {
        writer->addLine(indent + "else if (", m_LineNumber);
        m_Condition->exportCode(writer, "");
        writer->addLine(")", m_LineNumber);
        m_Scope->exportCode(writer, indent);
    }


    ReturnNode::ReturnNode(uint64 lineNumber):
    BaseNode(NodeType::ReturnStatement, lineNumber){
        m_Value = "Return";
    }

    ReturnNode::~ReturnNode() {

    }

    void ReturnNode::exportCode(LanguageWriter *writer, const std::string &indent) const {
        writer->addLine(indent + "return ", m_LineNumber);
        m_Children[0]->exportCode(writer, "");
        writer->addLine(";\n", m_LineNumber);
    }

}