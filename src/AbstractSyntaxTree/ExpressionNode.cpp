#include "ExpressionNode.hpp"

namespace Srsl{

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

    void ExpressionNode::fillSymbolTable(RCP<SymbolTable> symbolTable) {
        SRSL_PRECONDITION(m_Children.size() == 1 || m_Children.size() == 2, "Invalid number of children, expected 1 or 2 got %s", m_Children.size());

        m_SymbolTable = symbolTable;
        AbstractNode::fillSymbolTable(symbolTable);

        // determine the type of the expression
        determineType();
    }

    void ExpressionNode::generateCode(std::unique_ptr<Exporter> &exporter, const std::string &indent) const {
        SRSL_PRECONDITION(m_Right != nullptr, "Right node is null.");

        bool addParentheses = m_Parent->getNodeType() == AST_NODE_EXPRESSION;
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

    void ExpressionNode::determineType() {
        SRSL_PRECONDITION(m_Right != nullptr, "Right node is null.");

        m_Type = m_Right->getType();

        if (m_Children.size() == 2){
            auto leftType = m_Left->getType();
            auto rightType = m_Right->getType();

            // the type check depends on the operation
            if (m_Value == "==" or
                m_Value == "!=" or
                m_Value == "<" or
                m_Value == ">" or
                m_Value == "<=" or
                m_Value == ">="){
                if (leftType != rightType) {
                    SRSL_THROW_EXCEPTION("Comparison expression %s (type: %s) %s %s (type: %s) has incompatible types",
                                         m_Left->getValue().c_str(),
                                         leftType.typeStr.c_str(),
                                         m_Value.c_str(),
                                         m_Right->getValue().c_str(),
                                         rightType.typeStr.c_str());
                }
            }
        }
    }
}
