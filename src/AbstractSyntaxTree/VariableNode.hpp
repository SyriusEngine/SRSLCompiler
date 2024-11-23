#pragma once

#include "BaseNode.hpp"

namespace Srsl{

    class NewVariableNode: public BaseNode{
    public:
        NewVariableNode(const std::string& name, SymbolType type,
                        SharedPtr<SymbolTable> symbolTable, u64 lineNr, u64 charPos);

        ~NewVariableNode() override = default;

        void evaluate() override;
    };
}