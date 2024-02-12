#pragma once

#include "Utils.hpp"
#include "TreeWalker.hpp"
#include "ParseExceptionHandler.hpp"

namespace Srsl{

    class ShaderModuleImpl: public ShaderModule{
    public:
        explicit ShaderModuleImpl(const ImportDesc& desc);

        ~ShaderModuleImpl() override;

        void exportAstDot(const std::string& outputFile) override;

        void exportSymbolTableHtml(const std::string& outputFile) override;

        void exportShader(const ExportDesc& desc) override;

        [[nodiscard]] SRSL_SHADER_TYPE getShaderType() const override;

    private:
        SRSL_SHADER_TYPE m_ShaderType;
        UP<AbstractNode> m_Program;
        RCP<SymbolTable> m_SymbolTable;
    };
}