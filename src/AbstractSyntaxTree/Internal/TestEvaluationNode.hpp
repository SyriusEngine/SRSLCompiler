#pragma once

#include "../AbstractNode.hpp"
#include "../ShaderStorageBufferNode.hpp"
#include "../../ProgramInfo.hpp"

namespace Srsl{

    class TestEvaluationNode: public AbstractNode{
    public:
        TestEvaluationNode(const TestDataBufferDesc& bufferDesc, ProgramInfo& programInfo);

        ~TestEvaluationNode() override;

        void generateCode(UP<Exporter>& exporter, const std::string& indent) const override;

        void configureTestConfig(TestParameters &desc) const;

    private:

        void createSSBODeclaration();

        void generateGlsl(UP<Exporter>& exporter, const std::string& indent) const;

    private:
        std::string m_SSBOName;
        uint32 m_SSBOBindingSlot;
        ProgramInfo m_ProgramInfo;

        ShaderStorageBufferNode* m_TestDataSSBO;

        uint32 m_TestCasesArraySize;
        uint32 m_FunctionArraySize;
        uint32 m_ScopeArraySize;

    };

}