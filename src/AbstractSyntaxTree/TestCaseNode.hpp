#pragma once

#include "AbstractNode.hpp"
#include "ScopeNode.hpp"

namespace Srsl{

    class TestCaseNode: public AbstractNode{
    public:
        TestCaseNode(const std::string& testSuiteName, const std::string& testName, uint64 lineNumber);

        ~TestCaseNode() override;

        void construct() override;

        void fillSymbolTable(RCP<SymbolTable> table) override;

        void generateCode(UP<Exporter>& exporter, const std::string& indent) const override;

        [[nodiscard]] std::string getCallableName() const;

        [[nodiscard]] const std::string& getTestSuiteName() const { return m_TestSuiteName; }

        [[nodiscard]] const std::string& getTestName() const { return m_TestName; }

    private:
        const std::string m_TestSuiteName;
        const std::string m_TestName;
    };
}