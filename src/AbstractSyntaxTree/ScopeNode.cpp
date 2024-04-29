#include "ScopeNode.hpp"
#include "Nodes.hpp"
#include "VariableNode.hpp"
#include "FLowControlNodes.hpp"
#include "MemberAccessNode.hpp"
#include "FunctionNode.hpp"

namespace Srsl{

    ScopeNode::ScopeNode(uint64 lineNumber, uint32 scopeID, ScopeNode* parentScope):
    AbstractNode("", AST_NODE_SCOPE_STATEMENT, lineNumber),
    m_ScopeId(scopeID),
    m_ParentScope(parentScope),
    m_ChildScopes(){
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

            // only add a semicolon if the child is not a scope or a control statement
            auto childType = child->getNodeType();
            if (childType == AST_NODE_FOR_STATEMENT or
                childType == AST_NODE_IF_STATEMENT or
                childType == AST_NODE_ELSE_STATEMENT or
                childType == AST_NODE_WHILE_STATEMENT or
                childType == AST_NODE_SCOPE_STATEMENT or
                childType == AST_NODE_TEST_EVALUATION
                    ){

            }
            else{
                exporter->addLine(";\n");
            }
        }
        exporter->addLine(indent + "}\n");
    }

    void ScopeNode::createTestCode(TestCodeGenerator &testGen) {
        // dont add the main scope to the list of scopes as this scope contains the test driving code
        AbstractNode::createTestCode(testGen);
        if (m_Parent->getValue() != "main"){
            testGen.scopes.emplace_back(this);
            createScopeFlag(testGen);
            // add the line span of this scope to the total line count
            testGen.totalLines += getLineCount();
        }
    }

    void ScopeNode::addChildScope(ScopeNode *scope) {
        m_ChildScopes.push_back(scope);
    }

    ScopeNode *ScopeNode::getParentScope() const {
        return m_ParentScope;
    }

    void ScopeNode::createScopeFlag(TestCodeGenerator &testGen) {
        /*
         * at the beginning of each scope, add the following syntax
         * <ShaderType>Results.srslScopeCoverage[<ScopeId>] = true;
         *
         */
        auto assignment = addChildFront<AssignmentNode>(m_LineNumber);
        // LHS is a member access of the SSBO Scope array
        auto memberAccess = assignment->addChild<MemberAccessNode>(m_LineNumber);
        memberAccess->addChild<VariableNode>(testGen.testSSBOName, m_LineNumber);
        auto scopeCoverageArray = memberAccess->addChild<VariableNode>(SRSL_TEST_DATA_SCOPE_COVERAGE, m_LineNumber);
        scopeCoverageArray->addChild<ConstantNode>(std::to_string(m_ScopeId), m_LineNumber);

        // RHS is a literal TRUE
        assignment->addChild<ConstantNode>("true", m_LineNumber);

        assignment->construct();
        assignment->fillSymbolTable(m_SymbolTable);

        /*
         * To calculate the lcov metric, we first check if the scope already has been visited, if yes, do nothing.
         * if no, add the scope line count to the covered line count parameter (stored in the test SSBO)
         */
        // first check if the scope has been visited
        auto ifStatement = addChildFront<IfNode>(m_LineNumber);
        // first add the condition
        auto comparisonNode = ifStatement->addChild<ExpressionNode>("==", OPERATION_BINARY, m_LineNumber);
        // LHS of the condition
        auto memberAccess2 = comparisonNode->addChild<MemberAccessNode>(m_LineNumber);
        memberAccess2->addChild<VariableNode>(testGen.testSSBOName, m_LineNumber);
        auto scopeCoverageArray2 = memberAccess2->addChild<VariableNode>(SRSL_TEST_DATA_SCOPE_COVERAGE, m_LineNumber);
        scopeCoverageArray2->addChild<ConstantNode>(std::to_string(m_ScopeId), m_LineNumber);
        // RHS is a literal False
        comparisonNode->addChild<ConstantNode>("false", m_LineNumber);

        // then add the body, which increments the covered line count by the line count of the scope
        auto scopeNode = ifStatement->addChild<ScopeNode>(m_LineNumber, m_ScopeId, this);
        // first argument is the SSBO member access
        auto assignment2 = scopeNode->addChild<AssignmentNode>(m_LineNumber);
        // LHS is a member access of the SSBO Scope array
        auto memberAccess3 = assignment2->addChild<MemberAccessNode>(m_LineNumber);
        memberAccess3->addChild<VariableNode>(testGen.testSSBOName, m_LineNumber);
        auto coveredLineCount = memberAccess3->addChild<VariableNode>(SRSL_TEST_DATA_COVERED_LINE_COUNT_LIT, m_LineNumber);

        // RHS is the current value of the covered line count plus the line count of the scope
        auto expressionNode = assignment2->addChild<ExpressionNode>("+", OPERATION_BINARY, m_LineNumber);
        auto memberAccess4 = expressionNode->addChild<MemberAccessNode>(m_LineNumber);
        memberAccess4->addChild<VariableNode>(testGen.testSSBOName, m_LineNumber);
        auto coveredLineCount2 = memberAccess4->addChild<VariableNode>(SRSL_TEST_DATA_COVERED_LINE_COUNT_LIT, m_LineNumber);
        expressionNode->addChild<ConstantNode>(std::to_string(getLineCount()), m_LineNumber);

        ifStatement->construct();
        ifStatement->fillSymbolTable(m_SymbolTable);

    }

    uint32 ScopeNode::getLineCount() const {
        uint32 lineCount = 0;
        for (const auto& child: m_Children){
            auto childType = child->getNodeType();
            if (childType == AST_NODE_FOR_STATEMENT or
                childType == AST_NODE_IF_STATEMENT or
                childType == AST_NODE_ELSE_STATEMENT or
                childType == AST_NODE_WHILE_STATEMENT or
                childType == AST_NODE_SCOPE_STATEMENT or
                childType == AST_NODE_TEST_EVALUATION
                    ){
                // all have a scope and are thus part of the scope tree
            }
            else{
                lineCount++; // we manually add a semicolon to the end of the line inside the scopenode
                // we therefore now that each statement is on a new line
            }
        }
        return lineCount;
    }


}
