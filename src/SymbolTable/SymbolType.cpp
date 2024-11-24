#include "SymbolType.hpp"

namespace Srsl{

    std::string variableTypeToString(VARIABLE_TYPE type){
        switch (type) {
            case VT_TYPE_NONE:          return "none";
            case VT_VOID:               return "void";
            case VT_BOOL:               return "bool";
            case VT_INT:                return "int";
            case VT_UINT:               return "uint";
            case VT_HALF:               return "half";
            case VT_FLOAT:              return "float";
            case VT_DOUBLE:             return "double";
            case VT_SAMPLER:            return "sampler";
            case VT_TEXTURE1D:          return "texture 1D";
            case VT_TEXTURE2D:          return "texture 2D";
            case VT_TEXTURE3D:          return "texture 3D";
            case VT_TEXTURE_CUBE:       return "texture cube";
            case VT_TEXTURE1D_ARRAY:    return "texture 1D array";
            case VT_TEXTURE2D_ARRAY:    return "texture 2D array";
            case VT_TEXTURE3D_ARRAY:    return "texture 3D array";
            case VT_TEXTURE_CUBE_ARRAY: return "texture cube array";
            case VT_STRUCT:             return "struct";
            case VT_INTRINSIC:          return "intrinsic";
            case VT_TEMPLATE:           return "template";
            default:                    return "unknown";
        }
    }

    std::string dimensionTypeToString(DIMENSION_TYPE type){
        switch (type) {
            case DT_NONE:   return "none";
            case DT_VECTOR: return "vector";
            case DT_MATRIX: return "matrix";
            default:        return "unknown";
        }
    }

    SymbolType::SymbolType(VARIABLE_TYPE type):
    m_VariableType(type){

    }

    static std::unordered_map<std::string, VARIABLE_TYPE> s_TypeMapping = {
        {"void", VT_VOID},
        {"bool", VT_BOOL},
        {"int", VT_INT},
        {"uint", VT_UINT},
        {"half", VT_HALF},
        {"float", VT_FLOAT},
        {"double", VT_DOUBLE},
        {"sampler", VT_SAMPLER},
        {"Texture1D", VT_TEXTURE1D},
        {"Texture2D", VT_TEXTURE2D},
        {"Texture3D", VT_TEXTURE3D},
        {"TextureCube", VT_TEXTURE_CUBE},
        {"Texture1DArray", VT_TEXTURE1D_ARRAY},
        {"Texture2DArray", VT_TEXTURE2D_ARRAY},
        {"Texture3DArray", VT_TEXTURE3D_ARRAY},
        {"TextureCubeArray", VT_TEXTURE_CUBE_ARRAY},
        {"struct", VT_STRUCT},
        {"intrinsic", VT_INTRINSIC},
        {"template", VT_TEMPLATE}
    };

    SymbolType::SymbolType(const std::string& srslStr, bool isConst, const std::vector<u32> &arraySizes):
    m_IsConst(isConst),
    m_Original(srslStr),
    m_ArraySizes(arraySizes){
        std::string dimensions;
        for (const auto& [typeStr, type]: s_TypeMapping){
            if (srslStr.compare(0, typeStr.size(), typeStr) == 0){
                m_VariableType = type;
                dimensions = srslStr.substr(typeStr.size());
                break;
            }
        }

        if (!dimensions.empty()){
            if (dimensions.find('x') != std::string::npos){
                m_DimensionType = DT_MATRIX;
                m_ArraySizes.push_back(std::stoi(dimensions.substr(0, dimensions.find('x'))));
                m_ArraySizes.push_back(std::stoi(dimensions.substr(dimensions.find('x') + 1)));
            }
            else {
                m_DimensionType = DT_VECTOR;
                m_ArraySizes.push_back(std::stoi(dimensions));
            }
        }
        else {
            m_DimensionType = DT_NONE;
        }
    }

    VARIABLE_TYPE SymbolType::getVariableType() const {
        return m_VariableType;
    }

    DIMENSION_TYPE SymbolType::getDimensionType() const {
        return m_DimensionType;
    }

    bool SymbolType::isConst() const {
        return m_IsConst;
    }

    const std::vector<u32> &SymbolType::getArraySizes() const {
        return m_ArraySizes;
    }

    void SymbolType::toHtml(std::ofstream &file) const {
        file << "<div>";
        file << "Original: " << m_Original << "<br>";
        file << "Variable Type: " << variableTypeToString(m_VariableType) << "<br>";
        file << "Dimension Type: " << dimensionTypeToString(m_DimensionType) << "<br>";
        file << "Const?: " << (m_IsConst ? "true" : "false") << "<br>";
        file << "Array Sizes: [";
        for (const auto& size: m_ArraySizes){
            file << size << ", ";
        }
        file << "]</div>";
    }
}
