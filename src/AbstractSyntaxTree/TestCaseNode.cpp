#include "TestCaseNode.hpp"
#include "FunctionNode.hpp"
#include "ExpressionNode.hpp"

namespace Srsl{

    TestCaseNode::TestCaseNode(const std::string &name, const std::string &compare, uint64_t lineNumber):
    AbstractNode(name, AST_NODE_TEST_CASE, lineNumber),
    m_Compare(compare),
    m_Actual(nullptr){

    }

    TestCaseNode::~TestCaseNode() = default;

    void TestCaseNode::construct() {
        SRSL_PRECONDITION(m_Children.size() >= 1, "Invalid number of children, expected at least 1 got %s", m_Children.size());

        m_TestInputs.reserve(m_Children.size() - 1);
        for (uint32 i = 0; i < m_Children.size() - 1; ++i) {
            m_TestInputs.push_back(m_Children[i].get());
        }
        m_Actual = m_Children.back().get();
        m_FunctionName = m_Parent->getValue();

        AbstractNode::construct();

        SRSL_POSTCONDITION(m_Actual != nullptr, "Actual value is null (%p).", m_Actual);
        SRSL_POSTCONDITION(!m_FunctionName.empty(), "Function name is empty.");
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
        auto actualType = m_Actual->getType();
        m_Type.type = VT_BOOL;
        m_Type.arraySizes = actualType.arraySizes;
        m_Type.rows = actualType.rows;
        m_Type.columns = actualType.columns;


        AbstractNode::fillSymbolTable(symbolTable);
    }

    void TestCaseNode::generateCode(UP<Exporter> &exporter, const std::string &indent) const {
        for (const auto& child: m_Children){
            child->generateCode(exporter, indent);
        }
    }

    void TestCaseNode::createTestCode(TestCodeGenerator& testGen) {
        testGen.testCases.push_back(this);
        /**
         * A test case node will transform itself during the createTestCode phase to a expression node that
         * has a function call as the left child, and the actual value as the right child and the operator as the
         * value of the expression node.
         */

        // store the function call arguments in a new vector
        std::vector<UP<AbstractNode>> arguments(m_Children.size() - 1);
        for (uint32 i = 0; i < m_Children.size() - 1; ++i) {
            arguments[i] = std::move(m_Children[i]);
        }
        UP<AbstractNode> actual = std::move(m_Children.back());

        // clear memory
        m_Children.clear();

        // create a new expression node
        auto expNode = addChild<ExpressionNode>(m_Compare, OPERATION_BINARY, m_LineNumber);

        // create the function call node
        auto functionCallNode = expNode->addChild<FunctionCallNode>(m_FunctionName, m_LineNumber);
        for (auto& arg: arguments){
            functionCallNode->addExistingChild(std::move(arg));
        }

        // add the actual value as the right child
        expNode->addExistingChild(std::move(actual));

        // finally, construct the expression node
        expNode->construct();
        expNode->fillSymbolTable(m_SymbolTable);
    }
}
