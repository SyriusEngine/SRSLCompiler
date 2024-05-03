#pragma once

#include "AbstractNode.hpp"

namespace Srsl{

    class ScopeNode: public AbstractNode{
    public:
        ScopeNode(uint64 lineNumber, uint32 scopeID, ScopeNode* parentScope);

        ~ScopeNode() override;

        void construct() override;

        void fillSymbolTable(RCP<SymbolTable> table) override;

        void generateCode(UP<Exporter>& exporter, const std::string& indent) const override;

        void createTestCode(TestCodeGenerator& testGen) override;

        void addChildScope(ScopeNode* scope);

        [[nodiscard]] ScopeNode* getParentScope() const;

        [[nodiscard]] uint32 getLineCount() const;

    private:

        /**
         * @brief Adds a assignment node as a first child, this assignment will set TRUE if the scope is entered
         *        used for generating scope coverage metrics.
         */
        void createScopeFlag(TestCodeGenerator &testGen);

    private:
        const uint32 m_ScopeId; // used for testing generation
        uint32 m_LineCount;

        ScopeNode* m_ParentScope;
        std::vector<ScopeNode*> m_ChildScopes;
    };

}