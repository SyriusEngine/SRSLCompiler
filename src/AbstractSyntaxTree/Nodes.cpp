#include "Nodes.hpp"

namespace Srsl{

    ConstantNode::ConstantNode(const std::string &value, uint64 lineNumber): 
    AbstractNode(value, AST_NODE_CONSTANT, lineNumber) {

    }

    ConstantNode::~ConstantNode() {

    }

    void ConstantNode::generateCode(UP<Exporter> &exporter, const std::string &indent) const {
        exporter->addLine(indent + m_Value);
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

        AbstractNode::construct();
    }

    void AssignmentNode::generateCode(UP<Exporter> &exporter, const std::string &indent) const {
        m_Left->generateCode(exporter, indent);
        exporter->addLine(" = ");
        m_Right->generateCode(exporter, "");

    }

    InitializerListNode::InitializerListNode(uint32 initializerCount, uint64 lineNumber):
    AbstractNode("{ }", AST_NODE_INITIALIZER_LIST, lineNumber){

    }

    InitializerListNode::~InitializerListNode() {

    }

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

    ExpressionNode::ExpressionNode(const std::string& operation, OperationType opType, uint64 lineNumber):
    AbstractNode(operation, AST_NODE_EXPRESSION, lineNumber),
    m_OperationType(opType){

    }

    ExpressionNode::~ExpressionNode() {

    }

    void ExpressionNode::construct() {
        if (m_Children.size() == 1){
            m_Right = m_Children[0].get();
        }
        else if (m_Children.size() == 2){
            m_Left = m_Children[0].get();
            m_Right = m_Children[1].get();
        }
        else{
            SRSL_THROW_EXCEPTION("Invalid number of children, expected 1 or 2 got %s", m_Children.size());
        }

        AbstractNode::construct();
    }

    void ExpressionNode::generateCode(std::unique_ptr<Exporter> &exporter, const std::string &indent) const {
        bool addParentheses = m_Parent->getType() == AST_NODE_EXPRESSION;
        if (addParentheses){
            exporter->addLine("(");
        }

        switch (m_OperationType) {
            case OPERATION_UNARY:
                exporter->addLine(m_Value);
                m_Right->generateCode(exporter, "");
                break;
            case OPERATION_BINARY:
                m_Left->generateCode(exporter, indent);
                exporter->addLine(" " + m_Value + " ");
                m_Right->generateCode(exporter, indent);
                break;
        }
        if (addParentheses){
            exporter->addLine(")");
        }

    }

    ScopeNode::ScopeNode(uint64 lineNumber):
    AbstractNode("", AST_NODE_SCOPE_STATEMENT, lineNumber){
        std::stringstream ss;
        ss << "Scope_" << this;
        m_Value = ss.str();

    }

    ScopeNode::~ScopeNode() = default;

    void ScopeNode::fillSymbolTable(RCP<SymbolTable> table) {
        m_SymbolTable = table;
        auto localTable = createRCP<SymbolTable>(m_Value);
        table->addChild(localTable);
        for (const auto& child: m_Children){
            child->fillSymbolTable(localTable);
        }
    }

    void ScopeNode::generateCode(UP<Exporter> &exporter, const std::string &indent) const {
        auto newIndent = indent + "\t";
        exporter->addLine("{\n");
        for (const auto& child: m_Children){
            exporter->addLine(newIndent);
            child->generateCode(exporter, newIndent);
            auto childType = child->getType();
            if (childType == AST_NODE_FOR_STATEMENT or
                childType == AST_NODE_IF_STATEMENT or
                childType == AST_NODE_ELSE_STATEMENT or
                childType == AST_NODE_WHILE_STATEMENT or
                childType == AST_NODE_SCOPE_STATEMENT
            ){

            }
            else{
                exporter->addLine(";\n");
            }
        }
        exporter->addLine(indent + "}\n");
    }
}
