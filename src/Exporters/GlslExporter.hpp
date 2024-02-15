#pragma once

#include "Exporter.hpp"

namespace Srsl{

    class GlslExporter : public Exporter{
    public:
        GlslExporter(const ExportDesc& desc, SRSL_SHADER_TYPE type, const ShaderLimits& limits);

        ~GlslExporter() override;

        std::string getVariableType(const TypeDesc& type) const override;

    private:

    };

}