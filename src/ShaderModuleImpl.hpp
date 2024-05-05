#pragma once

#include "Utils/Utils.hpp"
#include "TreeWalker.hpp"
#include "ParseExceptionHandler.hpp"

#include "Exporters/GlslExporter.hpp"
#include "Exporters/HlslExporter.hpp"

#include "Intrinsics/FunctionIntrinsics.hpp"
#include "Intrinsics/Intrinsics.hpp"
#include "Intrinsics/VariableIntrinsics.hpp"


namespace Srsl{

    class ShaderModuleImpl: public ShaderModule{
    public:
        explicit ShaderModuleImpl(const std::string& source);

        ~ShaderModuleImpl() override;

        void exportAstDot(const std::string& outputFile) override;

        void exportSymbolTableHtml(const std::string& outputFile) override;

        void exportShader(ExportDesc& desc, const ShaderLimits& limits);

        [[nodiscard]] SRSL_SHADER_TYPE getShaderType() const override;

        void validate(Validator& validator);

        void generateTestCode(TestConfig &desc);

    private:
        ProgramInfo m_ProgramInfo;
        UP<AbstractNode> m_Program;
        RCP<SymbolTable> m_SymbolTable;
    };
}