#pragma once

#include "AbstractNode.hpp"

namespace Srsl{

    class ShaderStorageBufferNode: public AbstractNode{
    public:
        ShaderStorageBufferNode(const std::string& name, uint32 slot, uint64 lineNumber);

        ~ShaderStorageBufferNode() override;

        void fillSymbolTable(RCP<SymbolTable> symbolTable) override;

        void generateCode(UP<Exporter>& exporter, const std::string& indent) const override;

    private:

        void generateGlsl(UP<Exporter>& exporter, const std::string& indent) const;

        void generateHlsl(UP<Exporter>& exporter, const std::string& indent) const;

    private:
        const uint32 m_Slot;

    };
}