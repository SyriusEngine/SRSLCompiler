#include "TestCaseNode.hpp"

namespace Srsl{

    TestCaseNode::TestCaseNode(const std::string &name, const std::string &compare, uint64_t lineNumber):
    AbstractNode(name, AST_NODE_TEST_CASE, lineNumber),
    m_Compare(compare),
    m_Actual(nullptr){

    }

    TestCaseNode::~TestCaseNode() = default;

    void TestCaseNode::construct() {
        AbstractNode::construct();
    }

    void TestCaseNode::fillSymbolTable(RCP<SymbolTable> symbolTable) {
        m_SymbolTable = symbolTable;

        // check if such a test name already exists
        if (m_SymbolTable->hasSymbol(m_Value) ){
            auto& symbol = m_SymbolTable->getSymbol(m_Value);
            if (symbol.symbolType == ST_TEST_CASE){
                SRSL_THROW_EXCEPTION("Symbol table already has symbol: %s.", m_Value.c_str());
            }
        }
        else{
            Symbol symbol;
            symbol.symbolType = ST_TEST_CASE;
            symbol.name = m_Value;
            m_SymbolTable->addSymbol(symbol);
        }
        AbstractNode::fillSymbolTable(symbolTable);
    }

    void TestCaseNode::generateCode(UP<Exporter> &exporter, const std::string &indent) const {

    }
}
