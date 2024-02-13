#include "TextureNode.hpp"

namespace Srsl{

    SamplerNode::SamplerNode(const std::string &name, uint32 slot, uint64 lineNumber):
    AbstractNode(name, AST_NODE_SAMPLER_DECLARATION, lineNumber),
    m_Slot(slot){
    }

    SamplerNode::~SamplerNode() = default;

    void SamplerNode::fillSymbolTable(RCP<SymbolTable> symbolTable) {
        m_SymbolTable = symbolTable;
        TypeDesc type;
        type.type = VT_SAMPLER;
        type.isConst = true;
        Symbol symbol;
        symbol.name = m_Value;
        symbol.type = type;
        symbol.slot = m_Slot;
        symbolTable->addSymbol(symbol);
    }

    void SamplerNode::generateCode(UP<Exporter>& exporter, const std::string &indent) const {
        exporter->setAppendBuffer(PROGRAM_SECTION_SAMPLER);
        switch (exporter->getLanguageType()) {
            case SRSL_TARGET_GLSL: break;
            case SRSL_TARGET_HLSL:
                exporter->addLine(indent + "SamplerState " + m_Value + " : register(s" + std::to_string(m_Slot) + ");\n");
                break;
//            case LanguageType::CPP: {
//                auto cppexporter = dynamic_cast<Cppexporter*>(exporter);
//                if (!cppexporter){
//                    throw std::runtime_error("Invalid language exporter!");
//                }
//                exportCpp(cppexporter, indent);
//                break;
//            }
            default:
                SRSL_THROW_EXCEPTION("Unsupported language type (%d)", exporter->getLanguageType());
        }
        exporter->setAppendBuffer(PROGRAM_SECTION_DEFAULT);
    }

//    void SamplerNode::exportCpp(Cppexporter *exporter, const std::string &indent) const {
//        exporter->addLine("static SamplerState* " + m_Name + " = nullptr;\n", m_LineNumber);
//        exporter->m_Samplers.push_back({m_Name, m_Slot});
//    }

    TextureNode::TextureNode(const std::string &name, uint32 slot, const TypeDesc& type, uint64 lineNumber):
    AbstractNode(name, AST_NODE_TEXTURE_DECLARATION, lineNumber),
    m_Slot(slot),
    m_Type(type){

    }

    TextureNode::~TextureNode() = default;

    void TextureNode::fillSymbolTable(RCP<SymbolTable> symbolTable) {
        m_SymbolTable = symbolTable;
        Symbol symbol;
        symbol.name = m_Value;
        symbol.type = m_Type;
        symbol.slot = m_Slot;
        symbolTable->addSymbol(symbol);
    }

    void TextureNode::generateCode(UP<Exporter>& exporter, const std::string &indent) const {
        exporter->setAppendBuffer(PROGRAM_SECTION_TEXTURE);
        switch (exporter->getLanguageType()) {
            case SRSL_TARGET_GLSL: {
                exporter->addLine(indent + "layout(binding = " + std::to_string(m_Slot) + ") uniform " + getGlslType() + " " + m_Value + ";\n");
                break;
            }
            case SRSL_TARGET_HLSL:
                exporter->addLine(indent + "Texture2D " + m_Value + " : register(t" + std::to_string(m_Slot) + ");\n");
                break;
//            case SRSL_TARGET_CPP: {
//                auto cppexporter = dynamic_cast<Cppexporter*>(exporter);
//                if (!cppexporter){
//                    throw std::runtime_error("Invalid language exporter!");
//                }
//                exportCpp(cppexporter, indent);
//                break;
//            }
            default:
                SRSL_THROW_EXCEPTION("Unsupported language type (%d)", exporter->getLanguageType());
        }
        exporter->setAppendBuffer(PROGRAM_SECTION_DEFAULT);
    }

    std::string TextureNode::getGlslType() const {
        switch(m_Type.type){
            case VT_TEXTURE1D: return "sampler1D";
            case VT_TEXTURE1D_ARRAY: return "sampler1DArray";
            case VT_TEXTURE2D: return "sampler2D";
            case VT_TEXTURE2D_ARRAY: return "sampler2DArray";
            case VT_TEXTURE3D: return "sampler3D";
            case VT_TEXTURE3D_ARRAY: return "sampler3DArray";
            case VT_TEXTURE_CUBE: return "samplerCube";
            case VT_TEXTURE_CUBE_ARRAY: return "samplerCubeArray";
            default:
                SRSL_THROW_EXCEPTION("Unsupported glsl texture type (%d)", m_Type.type);
        }
    }

//    void TextureNode::exportCpp(Cppexporter *exporter, const std::string &indent) const {
//        exporter->addLine("static Texture2D* " + m_Name + " = nullptr;\n", m_LineNumber);
//        exporter->m_Textures.push_back({m_Name, m_Slot});
//    }
}
