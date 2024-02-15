#pragma once

#include "AbstractNode.hpp"

namespace Srsl{

    class TestCaseNode: public AbstractNode{
    public:
        TestCaseNode(const std::string& name, const std::string& compare, uint64_t lineNumber);

        ~TestCaseNode() override;

        void construct() override;

        void fillSymbolTable(RCP<SymbolTable> symbolTable) override;

        void generateCode(UP<Exporter>& exporter, const std::string& indent) const override;

    private:
        const std::string m_Compare;
        std::string m_FunctionName;

        std::vector<AbstractNode*> m_TestInputs;
        AbstractNode* m_Actual;
    };
}