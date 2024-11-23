#include "SymbolType.hpp"

namespace Srsl{

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
}
