#include "VariableNode.hpp"

namespace Srsl{

    NewVariableNode::NewVariableNode(const std::string& name, SymbolType type,
                                     SharedPtr<SymbolTable> symbolTable, u64 lineNr, u64 charPos):
    BaseNode(name, symbolTable, type, NodeIDGenerator<NewVariableNode>::getID(), AST_NODE_CLASS_TYPED, lineNr, charPos){
        Symbol symbol(name, type);
        symbol.symbolClass = SC_VARIABLE;
        symbol.lineNr = lineNr;
        symbol.charPos = charPos;
        m_SymbolTable->addSymbol(symbol);
    }

    void NewVariableNode::evaluate() {

    }
}
