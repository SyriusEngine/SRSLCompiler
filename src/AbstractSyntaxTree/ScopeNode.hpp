#pragma once

#include "BaseNode.hpp"

namespace Srsl{

    class ScopeNode: public BaseNode{
    public:
        ScopeNode(u64 scopeID, SharedPtr<SymbolTable> symbolTable, u64 lineNr, u64 charPos);

        ~ScopeNode() override = default;

        void evaluate() override;

    private:
        u64 m_ScopeID;

    };

}