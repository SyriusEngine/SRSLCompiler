#include "ScopeNode.hpp"

namespace Srsl{


    ScopeNode::ScopeNode(u64 scopeID, SharedPtr<SymbolTable> symbolTable, u64 lineNr, u64 charPos):
    BaseNode("Scope" + std::to_string(scopeID), symbolTable, SymbolType(), NodeIDGenerator<ScopeNode>::getID(), AST_NODE_CLASS_SCOPE, lineNr, charPos),
    m_ScopeID(scopeID){
    }

    void ScopeNode::evaluate() {

    }

}
