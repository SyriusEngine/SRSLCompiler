#include "ScopeNode.hpp"
#include "Nodes.hpp"
#include "VariableNode.hpp"
#include "MemberAccessNode.hpp"

namespace Srsl{

    static uint32 s_ScopeId = 0;

    ScopeNode::ScopeNode(uint64 lineNumber):
    AbstractNode("", AST_NODE_SCOPE_STATEMENT, lineNumber),
    m_ScopeId(s_ScopeId++){
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
        if (m_Parent->getValue() != "main"){
            testGen.scopes.emplace_back(this);
            createScopeFlag(testGen);
        }
        AbstractNode::createTestCode(testGen);
    }

    void ScopeNode::createScopeFlag(TestCodeGenerator &testGen) {
        auto assignment = addChildFront<AssignmentNode>(m_LineNumber);
        // LHS is a member access of the SSBO Scope array
        auto memberAccess = assignment->addChild<MemberAccessNode>(m_LineNumber);
        memberAccess->addChild<VariableNode>(testGen.testSSBOName, m_LineNumber);
        memberAccess->addChild<VariableNode>(SRSL_TEST_DATA_SCOPE_COVERAGE, m_LineNumber);

        // RHS is a literal TRUE
        assignment->addChild<ConstantNode>("true", m_LineNumber);

        assignment->construct();
        assignment->fillSymbolTable(m_SymbolTable);
    }

}
