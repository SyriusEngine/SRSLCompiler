#pragma once

#include "AbstractNode.hpp"

namespace Srsl{

    class ScopeNode: public AbstractNode{
    public:
        explicit ScopeNode(uint64 lineNumber);

        ~ScopeNode() override;

        void fillSymbolTable(RCP<SymbolTable> table) override;

        void generateCode(UP<Exporter>& exporter, const std::string& indent) const override;

        void createTestCode(TestCodeGenerator& testGen) override;

        inline uint32 getScopeId() const{ return m_ScopeId; }

    public:
        const uint32 m_ScopeId; // used for testing purposes

    };

}