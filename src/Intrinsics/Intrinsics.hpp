#pragma once

#include "../Utils.hpp"
#include "../SymbolTable/SymbolTable.hpp"
#include "../Converter/VariableTypes.hpp"

namespace Srsl{


    void loadIntrinsicFunctions(RCP<SymbolTable>& table);

}