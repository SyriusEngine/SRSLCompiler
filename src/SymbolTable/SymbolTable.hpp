#pragma once

#include "../Utils/Utils.hpp"
#include "Symbol.hpp"

namespace Srsl{

    class SymbolTable{
    public:
        explicit SymbolTable(const std::string& name);

        ~SymbolTable();

        void addSymbol(const Symbol& symbol);

        bool hasSymbol(const std::string& name);

        const Symbol& operator[](const std::string& name) const;

    private:
        const std::string m_Name;
        std::unordered_map<std::string, Symbol> m_Symbols;

        View<SymbolTable> m_Parent;
        std::unordered_map<std::string, SharedPtr<SymbolTable>> m_Children;
    };


}
