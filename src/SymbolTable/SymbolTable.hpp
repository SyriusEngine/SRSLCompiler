#pragma once

#include "../Utils/Utils.hpp"
#include "Symbol.hpp"

namespace Srsl{

    class SymbolTable: public std::enable_shared_from_this<SymbolTable>{
    public:
        explicit SymbolTable(const std::string& name);

        ~SymbolTable();

        void addSymbol(const Symbol& symbol);

        bool hasSymbol(const std::string& name);

        SharedPtr<SymbolTable> addChild(const std::string& name);

        SharedPtr<SymbolTable> getParent() const;

        const Symbol& getSymbol(const std::string& name);

        void toHtml(std::ofstream& file);

    private:
        const std::string m_Name;
        std::unordered_map<std::string, Symbol> m_Symbols;

        WeakPtr<SymbolTable> m_Parent;
        std::unordered_map<std::string, SharedPtr<SymbolTable>> m_Children;
    };


}
