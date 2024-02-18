#include "TestEvaluationNode.hpp"
#include "../VariableNode.hpp"
#include "../ShaderStorageBufferNode.hpp"

namespace Srsl{
    TestEvaluationNode::TestEvaluationNode(const std::vector<TestCaseNode*> &testCases, uint32 ssboSlot, uint64 lineNumber):
    AbstractNode("TEST_EVALUATOR", AST_NODE_TEST_EVALUATION, lineNumber),
    m_TestCases(testCases),
    m_TestDataSSBO(nullptr),
    m_TestDataSSBOSlot(ssboSlot){
        createTestSSBO();

        SRSL_POSTCONDITION(m_TestDataSSBO != nullptr, "TestEvaluationNode::TestEvaluationNode: m_TestDataSSBO is nullptr");
    }

    TestEvaluationNode::~TestEvaluationNode() {

    }

    void TestEvaluationNode::generateCode(UP<Exporter> &exporter, const std::string &indent) const {
        m_TestDataSSBO->generateCode(exporter, "");

        switch (exporter->getLanguageType()) {
            case SRSL_TARGET_GLSL:  generateGlsl(exporter, indent); break;
            case SRSL_TARGET_HLSL:  SRSL_THROW_EXCEPTION("HLSL not supported yet"); break;
            default: SRSL_THROW_EXCEPTION("Unsupported language type (%d)", exporter->getLanguageType());
        }
    }

    void TestEvaluationNode::createTestSSBO() {
        m_TestDataSSBO = addChild<ShaderStorageBufferNode>(SRSL_TEST_SSBO_DATA, m_TestDataSSBOSlot, 0);

        TypeDesc uintDesc;
        uintDesc.type = VT_UINT;
        m_TestDataSSBO->addChild<NewVariableNode>(SRSL_TEST_DATA_TEST_COUNT_LIT, "", uintDesc, 0);
        m_TestDataSSBO->addChild<NewVariableNode>(SRSL_TEST_DATA_TEST_PASSED_LIT, "", uintDesc, 0);
        m_TestDataSSBO->addChild<NewVariableNode>(SRSL_TEST_DATA_TEST_FAILED_LIT, "", uintDesc, 0);
        m_TestDataSSBO->addChild<NewVariableNode>(SRSL_TEST_DATA_TEST_SKIPPED_LIT, "", uintDesc, 0);

        // now add an array of uint32 to store the test results
        // make sure to pad the array to 16 bytes
        // a uint is 4 bytes on GPUs, so we need to pad the array to the next multiple of 16
        uint32 arraySize = (m_TestCases.size() + 3) & ~3;
        TypeDesc boolArrayDesc;
        boolArrayDesc.type = VT_BOOL;
        boolArrayDesc.arraySizes.push_back(arraySize);

        m_TestDataSSBO->addChild<NewVariableNode>(SRSL_TEST_DATA_TEST_RESULTS, "", boolArrayDesc, 0);
    }

    void TestEvaluationNode::generateGlsl(UP<Exporter> &exporter, const std::string &indent) const {
        // set all SSBO values to 0
        exporter->addLine(SRSL_TEST_DATA_TEST_COUNT_LIT + " = " + std::to_string(m_TestCases.size()) +";\n");
        exporter->addLine(indent + SRSL_TEST_DATA_TEST_PASSED_LIT + " = 0;\n");
        exporter->addLine(indent + SRSL_TEST_DATA_TEST_FAILED_LIT + " = 0;\n");

        for (uint32 i = 0; i < m_TestCases.size(); ++i){
            exporter->addLine(indent + SRSL_TEST_DATA_TEST_RESULTS + "[" + std::to_string(i) + "] = ");
            m_TestCases[i]->generateCode(exporter, "");
            exporter->addLine(";\n");

            exporter->addLine(indent + SRSL_TEST_DATA_TEST_PASSED_LIT + " += " + SRSL_TEST_DATA_TEST_RESULTS + "[" + std::to_string(i) + "] == true ? 1 : 0;\n");
            exporter->addLine(indent + SRSL_TEST_DATA_TEST_FAILED_LIT + " += " + SRSL_TEST_DATA_TEST_RESULTS + "[" + std::to_string(i) + "] == false ? 1 : 0;\n");
        }

        exporter->addLine(indent + SRSL_TEST_DATA_TEST_SKIPPED_LIT + " = 0"); // the parent ScopeNode will add the semicolon and newline character
    }
}
