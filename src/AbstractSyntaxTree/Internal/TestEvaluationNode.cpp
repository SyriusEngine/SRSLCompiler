#include "TestEvaluationNode.hpp"

namespace Srsl{

    TestEvaluationNode::TestEvaluationNode(const std::string &ssboName, uint32 ssboSlot, ProgramInfo& programInfo):
    AbstractNode(ssboName, AST_NODE_TEST_EVALUATION, programInfo.mainFunction->getLineNumber()),
    m_SSBOName(ssboName),
    m_SSBOBindingSlot(ssboSlot),
    m_TestDataSSBO(nullptr),
    m_ProgramInfo(programInfo),
    m_TestCasesArraySize(0),
    m_FunctionArraySize(0),
    m_ScopeArraySize(0){
        createSSBODeclaration();

        // remove the main function from the list of functions, since we don't want to run it as a test
        m_ProgramInfo.functions.erase(std::remove_if(m_ProgramInfo.functions.begin(), m_ProgramInfo.functions.end(), [](const auto& function){
            return function->getValue() == "main";
        }), m_ProgramInfo.functions.end());
        m_ProgramInfo.functionCount--;

        // same for the corresponding scope
        m_ProgramInfo.scopes.erase(std::remove_if(m_ProgramInfo.scopes.begin(), m_ProgramInfo.scopes.end(), [](const auto& scope){
            return scope->getParent()->getValue() == "main";
        }), m_ProgramInfo.scopes.end());
        m_ProgramInfo.scopeCount--;



        SRSL_POSTCONDITION(m_TestDataSSBO != nullptr, "TestEvaluationNode::TestEvaluationNode: m_TestDataSSBO is (%d)", m_TestDataSSBO);
    }

    TestEvaluationNode::~TestEvaluationNode() = default;

    void TestEvaluationNode::generateCode(UP<Exporter> &exporter, const std::string &indent) const {
        m_TestDataSSBO->generateCode(exporter, "");

        switch (exporter->getLanguageType()) {
            case SRSL_TARGET_GLSL:  generateGlsl(exporter, indent); break;
            case SRSL_TARGET_HLSL:  SRSL_THROW_EXCEPTION("HLSL not supported yet"); break;
            default: SRSL_THROW_EXCEPTION("Unsupported language type (%d)", exporter->getLanguageType());
        }
    }

    void TestEvaluationNode::createSSBODeclaration() {
        auto ssbo = addChild<ShaderStorageBufferNode>(m_SSBOName, m_SSBOBindingSlot, 0);
        m_TestDataSSBO = dynamic_cast<ShaderStorageBufferNode*>(ssbo);

        TypeDesc uintDesc;
        uintDesc.type = VT_UINT;
        m_TestDataSSBO->addChild<NewVariableNode>(SRSL_TEST_DATA_TEST_COUNT_LIT, "", uintDesc, 0);
        m_TestDataSSBO->addChild<NewVariableNode>(SRSL_TEST_DATA_TEST_PASSED_LIT, "", uintDesc, 0);
        m_TestDataSSBO->addChild<NewVariableNode>(SRSL_TEST_DATA_TEST_FAILED_LIT, "", uintDesc, 0);
        m_TestDataSSBO->addChild<NewVariableNode>(SRSL_TEST_DATA_FUNCTION_COUNT_LIT, "", uintDesc, 0);
        m_TestDataSSBO->addChild<NewVariableNode>(SRSL_TEST_DATA_SCOPE_COUNT_LIT, "", uintDesc, 0);

        uintDesc.arraySizes.push_back(3); // pad header to 8 uints
        m_TestDataSSBO->addChild<NewVariableNode>(SRSL_TEST_DATA_PADDING_LIT, "", uintDesc, 0);

        // now add an array of uint32 to store the test results
        // make sure to pad the array to 16 bytes
        // a uint is 4 bytes on GPUs, so we need to pad the array to the next multiple of 16
        m_TestCasesArraySize = (m_ProgramInfo.testCases.size() + 3) & ~3;
        m_FunctionArraySize = (m_ProgramInfo.functionCount + 3) & ~3;
        m_ScopeArraySize = (m_ProgramInfo.scopeCount + 3) & ~3;

        TypeDesc boolArrayDesc;
        boolArrayDesc.type = VT_BOOL;
        boolArrayDesc.arraySizes.push_back(m_TestCasesArraySize);
        m_TestDataSSBO->addChild<NewVariableNode>(SRSL_TEST_DATA_TEST_RESULTS, "", boolArrayDesc, 0);

        boolArrayDesc.arraySizes.clear();
        boolArrayDesc.arraySizes.push_back(m_FunctionArraySize);
        m_TestDataSSBO->addChild<NewVariableNode>(SRSL_TEST_DATA_FUNCTION_COVERAGE, "", boolArrayDesc, 0);

        TypeDesc uintArrayDesc;
        uintArrayDesc.type = VT_UINT;
        uintArrayDesc.arraySizes.push_back(m_ScopeArraySize);
        m_TestDataSSBO->addChild<NewVariableNode>(SRSL_TEST_DATA_SCOPE_COVERAGE, "", uintArrayDesc, 0);
    }

    void TestEvaluationNode::generateGlsl(UP<Exporter> &exporter, const std::string &indent) const {
        exporter->addLine( m_SSBOName + "." + SRSL_TEST_DATA_TEST_COUNT_LIT + " = " + std::to_string(m_ProgramInfo.testCaseCount) + ";\n");
        exporter->addLine(indent + m_SSBOName + "." + SRSL_TEST_DATA_TEST_PASSED_LIT + " = 0;\n");
        exporter->addLine(indent + m_SSBOName + "." + SRSL_TEST_DATA_TEST_FAILED_LIT + "= 0;\n");
        exporter->addLine(indent + m_SSBOName + "." + SRSL_TEST_DATA_FUNCTION_COUNT_LIT + " = " + std::to_string(m_ProgramInfo.functionCount) + ";\n");
        exporter->addLine(indent + m_SSBOName + "." + SRSL_TEST_DATA_SCOPE_COUNT_LIT  + " = " + std::to_string(m_ProgramInfo.scopeCount) + ";\n");

        for (uint32 i = 0; i < m_ProgramInfo.testCases.size(); i++){
            exporter->addLine(indent + m_SSBOName + "." + SRSL_TEST_DATA_TEST_RESULTS + "[" + std::to_string(i) + "] = ");
            exporter->addLine(m_ProgramInfo.testCases[i]->getValue() + "();\n"); // call the test case function
            exporter->addLine(indent + m_SSBOName + "." + SRSL_TEST_DATA_TEST_PASSED_LIT + " += " + m_SSBOName + "." + SRSL_TEST_DATA_TEST_RESULTS + "[" + std::to_string(i) + "] == true ? 1 : 0;\n");
            exporter->addLine(indent + m_SSBOName + "." + SRSL_TEST_DATA_TEST_FAILED_LIT + " += " + m_SSBOName + "." + SRSL_TEST_DATA_TEST_RESULTS + "[" + std::to_string(i) + "] == false ? 1 : 0;\n");
        }
    }

    void TestEvaluationNode::configureTestConfig(TestConfig &desc) const {
        desc.ssboSize = sizeof(uint32) * 8; // header
        desc.ssboSize += sizeof(uint32) * m_TestCasesArraySize;
        desc.ssboSize += sizeof(uint32) * m_ScopeArraySize;
        desc.ssboSize += sizeof(uint32) * m_FunctionArraySize;

        desc.testCaseCount = m_ProgramInfo.testCaseCount;
        desc.testCaseArraySize = m_TestCasesArraySize;
        for (const auto& testCase: m_ProgramInfo.testCases){
            desc.testCaseNames.push_back(testCase->getValue());
        }

        desc.functionCount = m_ProgramInfo.functionCount;
        desc.functionArraySize = m_FunctionArraySize;
        for (const auto& function: m_ProgramInfo.functions){
            desc.functionNames.push_back(function->getValue());
        }

        desc.scopeCount = m_ProgramInfo.scopeCount;
        desc.scopeArraySize = m_ScopeArraySize;
        for (const auto& scope: m_ProgramInfo.scopes){
            desc.scopes.push_back(scope->getValue());
        }
    }
}