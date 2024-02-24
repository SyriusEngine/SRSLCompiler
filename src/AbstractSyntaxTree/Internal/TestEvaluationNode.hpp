#pragma once

#include "../AbstractNode.hpp"
#include "../TestCaseNode.hpp"

namespace Srsl{

    struct TestEvaluationNodeDesc{
        std::string ssboName;
        uint32 ssboSlot;
        uint32 scopeCount;
        uint32 functionCount;
    };

    class TestEvaluationNode: public AbstractNode{
    public:
        TestEvaluationNode(const std::vector<TestCaseNode*>& testCases, const TestEvaluationNodeDesc& desc, uint64 lineNumber);

        ~TestEvaluationNode() override;

        void generateCode(UP<Exporter>& exporter, const std::string& indent) const override;

        [[nodiscard]] uint32 getTestDataArraySize() const { return m_TestDataArraySize; }

        [[nodiscard]] uint32 getFunctionArraySize() const { return m_FunctionArraySize; }

        [[nodiscard]] uint32 getScopeArraySize() const { return m_ScopeArraySize; }

    private:

        void createTestSSBO();

        void generateGlsl(UP<Exporter>& exporter, const std::string& indent) const;

    private:
        const std::vector<TestCaseNode*> m_TestCases;
        AbstractNode* m_TestDataSSBO;
        std::string m_TestDataSSBOName;
        const uint32 m_TestDataSSBOSlot;
        const uint32 m_ScopeCount;
        const uint32 m_FunctionCount;

        uint32 m_TestDataArraySize;
        uint32 m_FunctionArraySize;
        uint32 m_ScopeArraySize;

    };
}