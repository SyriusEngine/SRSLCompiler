#include "TestAssertionNode.hpp"

namespace Srsl{

    TestAssertionNode::TestAssertionNode(const std::string& op, uint64 lineNumber):
    AbstractNode(op, AST_NODE_CLASS_TYPED, AST_NODE_TEST_ASSERTION, lineNumber),
    m_Operator(op),
    m_Left(nullptr),
    m_Right(nullptr){


    }

    TestAssertionNode::~TestAssertionNode() = default;

    void TestAssertionNode::construct() {
        SRSL_PRECONDITION(m_Children.size() == 2, "TestAssertion must have two children, has %d", m_Children.size());
        m_Left = m_Children[0].get();
        m_Right = m_Children[1].get();

        SRSL_POSTCONDITION(m_Left != nullptr, "Left child is nullptr");
        SRSL_POSTCONDITION(m_Right != nullptr, "Right child is nullptr");
    }

    void TestAssertionNode::generateCode(UP<Exporter> &exporter, const std::string &indent) const {
        exporter->addLine("if (!(");
        m_Left->generateCode(exporter, "");
        exporter->addLine(" " + getTargetOperator() + " ");
        m_Right->generateCode(exporter, "");
        exporter->addLine(")){\n");
        exporter->addLine(indent + "\treturn false;\n");
        exporter->addLine(indent + "}");
    }

    std::string TestAssertionNode::getTargetOperator() const {
        if (m_Operator == "EQ") return "==";
        else if (m_Operator == "NE") return "!=";
        else if (m_Operator == "LT") return "<";
        else if (m_Operator == "LE") return "<=";
        else if (m_Operator == "GT") return ">";
        else if (m_Operator == "GE") return ">=";
        else {
            SRSL_THROW_EXCEPTION("Unknown operator (%s)", m_Operator.c_str());
        }
    }

}
