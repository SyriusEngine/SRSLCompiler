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

        View<SymbolTable> addChild(const std::string& name);

        const Symbol& getSymbol(const std::string& name);

    private:
        const std::string m_Name;
        std::unordered_map<std::string, Symbol> m_Symbols;

        SymbolTable* m_Parent;
        std::unordered_map<std::string, Ptr<SymbolTable>> m_Children;
    };


}
