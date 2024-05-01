#include "TestCaseNode.hpp"

namespace Srsl{

    TestCaseNode::TestCaseNode(const std::string& testSuiteName, const std::string& testName, uint64 lineNumber):
    AbstractNode(testName, AST_NODE_TEST_CASE, lineNumber),
    m_TestSuiteName(testSuiteName),
    m_TestName(testName),
    m_TestScope(nullptr){

    }

    TestCaseNode::~TestCaseNode() = default;

    void TestCaseNode::construct() {
        AbstractNode::construct();
    }

    void TestCaseNode::fillSymbolTable(RCP<SymbolTable> table) {
        m_SymbolTable = table;

        Symbol symbol;
        symbol.name = m_Value;
        symbol.symbolType = ST_TEST_CASE;
        symbol.structTable = createRCP<SymbolTable>(m_Value);
        table->addChild(symbol.structTable);
        table->addSymbol(symbol);
        for (const auto& child: m_Children){
            child->fillSymbolTable(symbol.structTable);
        }
    }

    void TestCaseNode::generateCode(UP<Exporter> &exporter, const std::string &indent) const {

    }
}