#pragma once

#include "Utils/Utils.hpp"
#include "ShaderModuleImpl.hpp"

namespace Srsl{

    class ShaderProgramImpl: public ShaderProgram{
    public:
        ShaderProgramImpl();

        ~ShaderProgramImpl() override;

        void addShaderModule(std::shared_ptr<ShaderModule> shaderModule) override;

        void link() override;

        void exportShader(const ProgramExportDesc& programExportDesc) override;

    private:
        RCP<ShaderModuleImpl> m_VertexShader;
        RCP<ShaderModuleImpl> m_FragmentShader;

    };
}