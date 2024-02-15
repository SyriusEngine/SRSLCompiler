#include "Exporter.hpp"

namespace Srsl{

    Exporter::Exporter(const ExportDesc &desc, SRSL_SHADER_TYPE type, const ShaderLimits& limits):
    m_ShaderType(type),
    m_Limits(limits),
    m_Desc(desc),
    m_Target(desc.target),
    m_CurrentBuffer(nullptr),
    m_Sections(){
        m_Sections[PROGRAM_SECTION_DEFAULT] = std::vector<std::string>();
        m_CurrentBuffer = &m_Sections[PROGRAM_SECTION_DEFAULT];

    }

    Exporter::~Exporter() = default;

    void Exporter::addLine(const std::string &line) {
        m_CurrentBuffer->push_back(line);

    }

    void Exporter::setAppendBuffer(PROGRAM_SECTION_TYPE type) {
        m_CurrentBuffer = &m_Sections[type];
    }

    void Exporter::getShaderCode(std::string &buffer) const {
        for (const auto& [section, lines]: m_Sections){
            if (lines.empty()){
                continue;
            }
            for (const auto& line: lines){
                buffer += line;
            }
            buffer += "\n";
        }
    }
}