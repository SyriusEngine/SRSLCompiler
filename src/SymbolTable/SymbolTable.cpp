#include "SymbolTable.hpp"

namespace Srsl{

    SymbolTable::SymbolTable(const std::string &name):
    m_Name(name),
    m_Parent(nullptr),
    m_Symbols(),
    m_Children(){

    }

    SymbolTable::~SymbolTable() = default;

    void SymbolTable::addSymbol(const Symbol &symbol) {
        if (!hasSymbol(symbol.name)){
            m_Symbols[symbol.name] = symbol;
        }
        else{
            throw RedefinitionError(symbol.name, m_Name, 0);
        }

    }

    bool SymbolTable::hasSymbol(const std::string &name) {
        if (m_Symbols.find(name) != m_Symbols.end()){
            return true;
        }
        else if (m_Parent != nullptr){
            return m_Parent->hasSymbol(name);
        }
        else {
            return false;
        }
    }

    const Symbol &SymbolTable::operator[](const std::string &name) const {
        if (m_Symbols.find(name) != m_Symbols.end()){
            return m_Symbols.at(name);
        }
        else if (m_Parent != nullptr){
            return m_Parent->operator[](name);
        }
        else {
            throw UndefinedSymbolError(name, m_Name, 0);
        }
    }
}
