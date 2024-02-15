#pragma once

#include "Exporter.hpp"
#include "../SymbolTable/SymbolTable.hpp"

namespace Srsl{

    class HlslExporter : public Exporter{
    public:
        RCP<SymbolTable> m_InputSymbolTable;
        RCP<SymbolTable> m_OutputSymbolTable;

    public:
        HlslExporter(const ExportDesc& desc, SRSL_SHADER_TYPE type, const ShaderLimits& limits);

        ~HlslExporter() override;

        std::string getVariableType(const TypeDesc& type) const override;
    };
}