#include "TestCaseNode.hpp"

namespace Srsl{

    TestCaseNode::TestCaseNode(const std::string& testSuiteName, const std::string& testName, uint64 lineNumber):
    AbstractNode(testName, AST_NODE_CLASS_SCOPE, AST_NODE_TEST_CASE, lineNumber),
    m_TestSuiteName(testSuiteName),
    m_TestName(testName){
        m_Type.type = VT_BOOL;
    }

    TestCaseNode::~TestCaseNode() = default;

    void TestCaseNode::construct() {
        AbstractNode::construct();
    }

    void TestCaseNode::fillSymbolTable(RCP<SymbolTable> table) {
        m_SymbolTable = table;

        Symbol symbol;
        symbol.name = m_Value + "_test_case";
        symbol.symbolType = ST_TEST_CASE;
        symbol.structTable = createRCP<SymbolTable>(m_Value);
        table->addChild(symbol.structTable);
        table->addSymbol(symbol);
        for (const auto& child: m_Children){
            child->fillSymbolTable(symbol.structTable);
        }
    }

    void TestCaseNode::generateCode(UP<Exporter> &exporter, const std::string &indent) const {
        /*
         * The test case node will be generated as a function declaration that returns a boolean value.
         * The last statement is a return true; statement.
         */
        exporter->addLine(indent + exporter->getVariableType(m_Type) + " " + m_Value + "(){\n");
        auto newIndent = indent + "\t";
        for (const auto& child: m_Children){
            exporter->addLine(newIndent);
            child->generateCode(exporter, newIndent);
            exporter->addLine(";\n");
        }
        exporter->addLine(newIndent + "return true;\n");
        exporter->addLine(indent + "}\n\n");
    }

}