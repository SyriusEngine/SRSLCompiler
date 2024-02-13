#pragma once

#include "Exporter.hpp"

namespace Srsl{

    class HlslExporter : public Exporter{
    public:
        HlslExporter(const ExportDesc& desc, SRSL_SHADER_TYPE type);

        ~HlslExporter() override;

        std::string getVariableType(const TypeDesc& type) const override;
    };
}