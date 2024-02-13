#include "TextureNode.hpp"

namespace Srsl{

    SamplerNode::SamplerNode(const std::string &name, uint32 slot, uint64 lineNumber)
    : BaseNode(NodeType::Sampler, lineNumber),
    m_Slot(slot),
    m_Name(name){
        m_Value = "[Slot = " + std::to_string(m_Slot) + "] Sampler " + name;

    }

    SamplerNode::~SamplerNode() {

    }

    void SamplerNode::fillSymbolTable(RCP<SymbolTable> symbolTable) {
        m_SymbolTable = symbolTable;
        Symbol symbol;
        symbol.m_Name = m_Name;
        symbol.m_Type = VariableBaseType::Sampler;
        symbol.m_Slot = m_Slot;
        symbol.m_IsConst = true;
        symbolTable->addSymbol(symbol);
    }

    void SamplerNode::exportCode(LanguageWriter *writer, const std::string &indent) const {
        writer->setAppendBuffer(AppendBufferType::AppendSampler);
        switch (writer->getLanguageType()) {
            case LanguageType::GLSL:
                break;
            case LanguageType::HLSL:
                writer->addLine(indent + "SamplerState " + m_Name + " : register(s" + std::to_string(m_Slot) + ");\n", m_LineNumber);
                break;
            case LanguageType::CPP: {
                auto cppWriter = dynamic_cast<CppWriter*>(writer);
                if (!cppWriter){
                    throw std::runtime_error("Invalid language writer!");
                }
                exportCpp(cppWriter, indent);
                break;
            }
            default:
                throw std::runtime_error("Invalid language type");
        }
        writer->setAppendBuffer(AppendBufferType::AppendProgram);
    }

    void SamplerNode::exportCpp(CppWriter *writer, const std::string &indent) const {
        writer->addLine("static SamplerState* " + m_Name + " = nullptr;\n", m_LineNumber);
        writer->m_Samplers.push_back({m_Name, m_Slot});
    }

    TextureNode::TextureNode(const std::string &name, uint32 slot, const std::string &type, uint64 lineNumber)
    : BaseNode(NodeType::Texture, lineNumber),
    m_Slot(slot),
    m_Name(name),
    m_Type(parseTexture(type)){
        m_Value = "[Slot = " + std::to_string(m_Slot) + "] " + type + " " + name;

    }

    TextureNode::~TextureNode() {

    }

    void TextureNode::fillSymbolTable(RCP<SymbolTable> symbolTable) {
        m_SymbolTable = symbolTable;
        Symbol symbol;
        symbol.m_Name = m_Name;
        symbol.m_Type = m_Type;
        symbol.m_Slot = m_Slot;
        symbol.m_IsConst = true;
        symbolTable->addSymbol(symbol);
    }

    void TextureNode::exportCode(LanguageWriter *writer, const std::string &indent) const {
        writer->setAppendBuffer(AppendBufferType::AppendTexture);
        switch (writer->getLanguageType()) {
            case LanguageType::GLSL: {
                writer->addLine(indent + "layout(binding = " + std::to_string(m_Slot) + ") uniform " + getGlslType() + " " + m_Name + ";\n", m_LineNumber);
                break;
            }
            case LanguageType::HLSL:
                writer->addLine(indent + "Texture2D " + m_Name + " : register(t" + std::to_string(m_Slot) + ");\n", m_LineNumber);
                break;
            case LanguageType::CPP: {
                auto cppWriter = dynamic_cast<CppWriter*>(writer);
                if (!cppWriter){
                    throw std::runtime_error("Invalid language writer!");
                }
                exportCpp(cppWriter, indent);
                break;
            }
            default:
                throw std::runtime_error("Invalid language type");
        }
        writer->setAppendBuffer(AppendBufferType::AppendProgram);
    }

    std::string TextureNode::getGlslType() const {
        switch(m_Type){
            case VariableBaseType::Texture1D:
                return "sampler1D";
            case VariableBaseType::Texture2D:
                return "sampler2D";
            case VariableBaseType::Texture3D:
                return "sampler3D";
            case VariableBaseType::TextureCube:
                return "samplerCube";
            default:
                throw std::runtime_error("Invalid texture type for GLSL");
        }
    }

    void TextureNode::exportCpp(CppWriter *writer, const std::string &indent) const {
        writer->addLine("static Texture2D* " + m_Name + " = nullptr;\n", m_LineNumber);
        writer->m_Textures.push_back({m_Name, m_Slot});
    }
}
