#pragma once

#include "Utils.hpp"
#include "ShaderModuleImpl.hpp"

namespace Srsl{

    class ShaderProgramImpl: public ShaderProgram{
    public:
        ShaderProgramImpl();

        explicit ShaderProgramImpl(const ShaderLimits& limits);

        ~ShaderProgramImpl() override;

        void addShaderModule(std::shared_ptr<ShaderModule> shaderModule) override;

        void link() override;

        void exportShader(ExportDesc& desc) override;

        void generateTestCode(TestConfig &vertexShaderConfig, TestConfig& fragmentShaderConfig) override;

    private:
        RCP<ShaderModuleImpl> m_VertexShader;
        RCP<ShaderModuleImpl> m_FragmentShader;

    };
}