#include "SymbolType.hpp"

namespace Srsl{

    SymbolType::SymbolType(VARIABLE_TYPE type):
    m_VariableType(type){

    }

    SymbolType::SymbolType(const std::string& srslStr, bool isConst, const std::vector<u32> &arraySizes):
    m_IsConst(isConst),
    m_Original(srslStr){

    }
}
