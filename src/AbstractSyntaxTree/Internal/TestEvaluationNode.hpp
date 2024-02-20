#pragma once

#include "../AbstractNode.hpp"
#include "../TestCaseNode.hpp"

#define SRSL_TEST_DATA_TEST_COUNT_LIT std::string("srslTestCount")
#define SRSL_TEST_DATA_TEST_PASSED_LIT std::string("srslTestPassed")
#define SRSL_TEST_DATA_TEST_FAILED_LIT std::string("srslTestFailed")
#define SRSL_TEST_DATA_TEST_SKIPPED_LIT std::string("srslTestSkipped")
#define SRSL_TEST_DATA_TEST_RESULTS std::string("srslTestResults")

namespace Srsl{

    class TestEvaluationNode: public AbstractNode{
    public:
        TestEvaluationNode(const std::vector<TestCaseNode*>& testCases, uint32 ssboSlot, uint64 lineNumber);

        ~TestEvaluationNode() override;

        void generateCode(UP<Exporter>& exporter, const std::string& indent) const override;

        [[nodiscard]] uint32 getTestDataArraySize() const { return m_TestDataArraySize; }

    private:

        void createTestSSBO();

        void generateGlsl(UP<Exporter>& exporter, const std::string& indent) const;

    private:
        const std::vector<TestCaseNode*> m_TestCases;
        AbstractNode* m_TestDataSSBO;
        const uint32 m_TestDataSSBOSlot;

        uint32 m_TestDataArraySize;

    };
}