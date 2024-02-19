#include "ScopeNode.hpp"

namespace Srsl{

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
            auto childType = child->getNodeType();
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
