#include "GlslExporter.hpp"

namespace Srsl{

    GlslExporter::GlslExporter(const ExportDesc &desc, SRSL_SHADER_TYPE type) :
    Exporter(desc, type) {
        setAppendBuffer(PROGRAM_SECTION_TOP);
        addLine("#version " + std::to_string(desc.version.majorVersion) + std::to_string(desc.version.minorVersion) + "0\n\n");
        setAppendBuffer(PROGRAM_SECTION_DEFAULT);
    }

    GlslExporter::~GlslExporter() = default;

    std::string GlslExporter::getVariableType(const TypeDesc &type) const {
        if (type.type == VT_VOID){
            return "void";
        }
        else if (type.type == VT_STRUCT){
            return type.typeStr;
        }
        if (type.type <= VT_DOUBLE){
            if (type.rows > 1 or type.columns > 1){
                std::string bst;
                switch (type.type){
                    case VT_BOOL:   bst = "b";  break;
                    case VT_INT:    bst = "i";  break;
                    case VT_UINT:   bst = "u";  break;
                    case VT_FLOAT:  bst = "";   break;
                    case VT_DOUBLE: bst = "d";  break;
                    default:        break;
                }
                if (type.rows == 1){
                    return bst + "vec" + std::to_string(type.columns);
                }
                else {
                    return bst + "mat" + std::to_string(type.rows) + "x" + std::to_string(type.columns);
                }
            }
            else{
                switch (type.type) {
                    case VT_BOOL:    return "bool";
                    case VT_INT:     return "int";
                    case VT_UINT:    return "uint";
                    case VT_HALF:    return "half";
                    case VT_FLOAT:   return "float";
                    case VT_DOUBLE:  return "double";
                    default:
                        SRSL_THROW_EXCEPTION("Unknown GLSL type (%d)", type.type);
                }
            }
        }
        else if (type.type <= VT_TEXTURE_CUBE_ARRAY){
            switch (type.type){
                case VT_TEXTURE1D:          return "sampler1D";
                case VT_TEXTURE1D_ARRAY:    return "sampler1DArray";
                case VT_TEXTURE2D:          return "sampler2D";
                case VT_TEXTURE2D_ARRAY:    return "sampler2DArray";
                case VT_TEXTURE3D:          return "sampler3D";
                case VT_TEXTURE3D_ARRAY:    return "sampler3DArray";
                case VT_TEXTURE_CUBE:       return "samplerCube";
                case VT_TEXTURE_CUBE_ARRAY: return "samplerCubeArray";
                default:
                    SRSL_THROW_EXCEPTION("Unknown GLSL type (%d)", type.type);
            }
        }
        else{
            SRSL_THROW_EXCEPTION("Unknown GLSL type (%d)", type.type);
        };
    }
}
