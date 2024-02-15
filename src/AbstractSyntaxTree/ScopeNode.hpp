#pragma once

#include "AbstractNode.hpp"

namespace Srsl{

    class ScopeNode: public AbstractNode{
    public:
        explicit ScopeNode(uint64 lineNumber);

        ~ScopeNode() override;

        void fillSymbolTable(RCP<SymbolTable> table) override;

        void generateCode(UP<Exporter>& exporter, const std::string& indent) const override;

    };

}