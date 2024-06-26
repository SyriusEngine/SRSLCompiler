#include "VariableTypes.hpp"

namespace Srsl{

    uint32 getVariableTypeSize(VariableType type){
        switch (type) {
            case VT_VOID:   return 0;
            case VT_BOOL:   return 4;   // on GPU's bools are stored as 4 byte integers
            case VT_INT:    return 4;
            case VT_UINT:   return 4;
            case VT_HALF:   return 2;
            case VT_FLOAT:  return 4;
            case VT_DOUBLE: return 8;
            case VT_SAMPLER: return 4;
            case VT_TEXTURE1D: return 4;
            case VT_TEXTURE2D: return 4;
            case VT_TEXTURE3D: return 4;
            case VT_TEXTURE_CUBE: return 4;
            case VT_TEXTURE1D_ARRAY: return 4;
            case VT_TEXTURE2D_ARRAY: return 4;
            case VT_TEXTURE3D_ARRAY:    return 4;
            case VT_TEXTURE_CUBE_ARRAY: return 4;
            default: return 0;
        }
    }

    std::string variableTypeToString(VariableType type){
        switch (type) {
            case VT_VOID:               return "void";
            case VT_BOOL:               return "bool";
            case VT_INT:                return "int";
            case VT_UINT:               return "uint";
            case VT_HALF:               return "half";
            case VT_FLOAT:              return "float";
            case VT_DOUBLE:             return "double";
            case VT_SAMPLER:            return "sampler";
            case VT_TEXTURE1D:          return "texture1D";
            case VT_TEXTURE2D:          return "texture2D";
            case VT_TEXTURE3D:          return "texture3D";
            case VT_TEXTURE_CUBE:        return "textureCube";
            case VT_TEXTURE1D_ARRAY:     return "texture1DArray";
            case VT_TEXTURE2D_ARRAY:     return "texture2DArray";
            case VT_TEXTURE3D_ARRAY:     return "texture3DArray";
            case VT_TEXTURE_CUBE_ARRAY:   return "textureCubeArray";
            case VT_INTRINSIC:          return "intrinsic";
            case VT_STRUCT:             return "struct";
            default: return "unknown";
        }
    }

    TypeDesc::TypeDesc(const std::string &typeStr, bool isConst, const std::vector<uint32>& arraySizes):
    typeStr(typeStr),
    isConst(isConst),
    arraySizes(arraySizes){
        std::string dimensions;
        if (typeStr.find("void") != std::string::npos){
            type = VT_VOID;
            dimensions = "";
        }
        else if (typeStr.find("bool") != std::string::npos){
            type = VT_BOOL;
            dimensions = typeStr.substr(4);
        }
        else if (typeStr.find("uint") != std::string::npos){
            type = VT_UINT;
            dimensions = typeStr.substr(4);
        }
        else if (typeStr.find("int") != std::string::npos){
            type = VT_INT;
            dimensions = typeStr.substr(3);
        }
        else if (typeStr.find("half") != std::string::npos){
            type = VT_HALF;
            dimensions = typeStr.substr(4);
        }
        else if (typeStr.find("float") != std::string::npos){
            type = VT_FLOAT;
            dimensions = typeStr.substr(5);
        }
        else if (typeStr.find("double") != std::string::npos){
            type = VT_DOUBLE;
            dimensions = typeStr.substr(6);
        }
        else if (typeStr.find("Texture1D") != std::string::npos){
            type = VT_TEXTURE1D;
        }
        else if (typeStr.find("Texture2D") != std::string::npos){
            type = VT_TEXTURE2D;
        }
        else if (typeStr.find("Texture3D") != std::string::npos){
            type = VT_TEXTURE3D;
        }
        else if (typeStr.find("TextureCube") != std::string::npos){
            type = VT_TEXTURE_CUBE;
        }
        else if (typeStr.find("Texture1DArray") != std::string::npos){
            type = VT_TEXTURE1D_ARRAY;
        }
        else if (typeStr.find("Texture2DArray") != std::string::npos){
            type = VT_TEXTURE2D_ARRAY;
        }
        else if (typeStr.find("Texture3DArray") != std::string::npos){
            type = VT_TEXTURE3D_ARRAY;
        }
        else if (typeStr.find("TextureCubeArray") != std::string::npos){
            type = VT_TEXTURE_CUBE_ARRAY;
        }
        else if (typeStr.find("sampler") != std::string::npos){
            type = VT_SAMPLER;
        }
        else {
            type = VT_STRUCT;
        }

        if (!dimensions.empty()){
            if (dimensions.find('x') != std::string::npos){
                rows = std::stoi(dimensions.substr(0, dimensions.find('x')));
                columns = std::stoi(dimensions.substr(dimensions.find('x') + 1));
            }
            else {
                rows = 1;
                columns = std::stoi(dimensions);
            }
        }
    }

    uint32 TypeDesc::getSize() const {
        auto size = getVariableTypeSize(type);
        size *= rows * columns;
        for (const auto& arraySize : arraySizes){
            size *= arraySize;
        }
        return size;
    }

    bool TypeDesc::operator==(const TypeDesc &other) const {
        return type == other.type && rows == other.rows && columns == other.columns;
    }

    bool TypeDesc::operator!=(const TypeDesc &other) const {
        return (type != other.type || rows != other.rows || columns != other.columns);
    }

    bool TypeDesc::equalVectorType(const TypeDesc &other) const {
        return rows == other.rows && columns == other.columns;
    }


}
