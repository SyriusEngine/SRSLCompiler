#pragma once

#include "../AbstractNode.hpp"
#include "../TestCaseNode.hpp"

#define SRSL_TEST_DATA_TEST_COUNT_LIT std::string("srslTestCount")
#define SRSL_TEST_DATA_TEST_PASSED_LIT std::string("srslTestPassed")
#define SRSL_TEST_DATA_TEST_FAILED_LIT std::string("srslTestFailed")
#define SRSL_TEST_DATA_SCOPE_COUNT_LIT std::string("srslScopeCount")
#define SRSL_TEST_DATA_FUNCTION_COUNT_LIT std::string("srslFunctionCount")
#define SRSL_TEST_DATA_PADDING_LIT std::string("srslPadding")
#define SRSL_TEST_DATA_TEST_RESULTS std::string("srslTestResults")

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

    };
}