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

    SymbolType::SymbolType(const std::string& srslStr, bool isConst, const std::vector<u32> &arraySizes):
    m_IsConst(isConst),
    m_Original(srslStr){

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
