#include "SymbolType.hpp"

namespace Srsl{

    SymbolType::SymbolType():
    m_Type(ST_TYPE_NONE),
    m_IsConst(false),
    m_DimensionType(DT_NONE),
    m_ArraySizes() {


    }

    SymbolType::SymbolType(const std::string& srslStr, bool isConst, const std::vector<u32> &arraySizes):
    m_Type(ST_TYPE_NONE),
    m_IsConst(false),
    m_DimensionType(DT_NONE),
    m_ArraySizes() {

    }
}
