#pragma once

#include "Utils/Utils.hpp"
#include "TreeWalker.hpp"
#include "ParseExceptionHandler.hpp"

namespace Srsl{

    class ShaderModuleImpl: public ShaderModule{
    public:
        explicit ShaderModuleImpl(const std::string& source, const ShaderLimits& shaderLimits);

        ~ShaderModuleImpl() override;

        void exportAstDot(const std::string& outputFile) override;

        void exportSymbolTableHtml(const std::string& outputFile) override;

        void exportShader(const ExportDesc& exportDesc) override;

    private:
    };
}