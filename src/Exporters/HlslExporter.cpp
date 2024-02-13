#include "HlslExporter.hpp"

namespace Srsl{

    HlslExporter::HlslExporter(const ExportDesc &desc, SRSL_SHADER_TYPE type) :
    Exporter(desc, type),
    m_InputSymbolTable(nullptr),
    m_OutputSymbolTable(nullptr){

    }

    HlslExporter::~HlslExporter() = default;

    std::string HlslExporter::getVariableType(const TypeDesc &type) const {
        if (type.type == VT_VOID){
            return "void";
        }
        else if (type.type <= VT_DOUBLE){
            std::string bst;
            switch (type.type) {
                case VT_BOOL:    bst = "bool"; break;
                case VT_INT:     bst = "int"; break;
                case VT_UINT:    bst = "uint"; break;
                case VT_HALF:    bst = "half"; break;
                case VT_FLOAT:   bst = "float"; break;
                case VT_DOUBLE:  bst = "double"; break;
                default:
                    throw std::runtime_error("Unknown type");
            }
            if (type.rows == 1){
                if (type.columns == 1){
                    return bst;
                }
                else{
                    return bst + std::to_string(type.columns);
                }
            }
            else{
                return bst + std::to_string(type.rows) + "x" + std::to_string(type.columns);
            }
        }
        switch (type.type) {
            case VT_SAMPLER:            return "SamplerState";
            case VT_TEXTURE1D:          return "sampler1D";
            case VT_TEXTURE1D_ARRAY:    return "sampler1DArray";
            case VT_TEXTURE2D:          return "sampler2D";
            case VT_TEXTURE2D_ARRAY:    return "sampler2DArray";
            case VT_TEXTURE3D:          return "sampler3D";
            case VT_TEXTURE3D_ARRAY:    return "sampler3DArray";
            case VT_TEXTURE_CUBE:       return "samplerCUBE";
            case VT_TEXTURE_CUBE_ARRAY: return "samplerCUBEArray";
            default: break;

        }
        if (type.type == VT_STRUCT){
            return type.typeStr;
        }
        else{
            SRSL_THROW_EXCEPTION("Unknown HLSL type (%d)", type.type);
        }
    }
}