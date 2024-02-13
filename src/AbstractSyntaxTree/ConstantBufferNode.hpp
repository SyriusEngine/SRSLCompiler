#pragma once

#include "AbstractNode.hpp"

namespace Srsl{

    class ConstantBufferNode: public AbstractNode{
    public:
        ConstantBufferNode(const std::string& name, uint32 slot, uint64 lineNumber);

        ~ConstantBufferNode() override;

        void fillSymbolTable(RCP<SymbolTable> symbolTable) override;

        void generateCode(UP<Exporter>& exporter, const std::string& indent) const override;

    private:
        const uint32 m_Slot;
    };

}

