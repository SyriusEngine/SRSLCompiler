#pragma once

#include "AbstractNode.hpp"

namespace Srsl{

    class StructDeclarationNode: public AbstractNode{
    public:
        StructDeclarationNode(const std::string& name, uint64 lineNumber);

        ~StructDeclarationNode() override;

        void fillSymbolTable(RCP<SymbolTable> symbolTable) override;

        void generateCode(UP<Exporter>& exporter, const std::string& indent) const override;

    };
}