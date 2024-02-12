#pragma once

#include "Symbol.hpp"

namespace Srsl{

    class SymbolTable{
    public:
        explicit SymbolTable(const std::string& name);

        ~SymbolTable();

        void addSymbol(const Symbol& symbol);

        RCP<SymbolTable> addChild(const std::string& name);

        Symbol& getSymbol(const std::string& name);

        bool hasSymbol(const std::string& name);

        [[nodiscard]] const std::string& getName() const;

        void toHtml(std::ofstream& file);

        [[nodiscard]] uint32 getSize() const;

    private:
        const std::string m_Name;
        std::unordered_map<std::string, Symbol> m_Symbols;

        SymbolTable* m_Parent;
        std::unordered_map<std::string, RCP<SymbolTable>> m_Children;


    };

}