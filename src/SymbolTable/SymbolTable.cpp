#include "SymbolTable.hpp"
#include "SymbolException.hpp"

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
            auto existingSymbol = getSymbol(symbol.name);
            throw SymbolRedefinitionException(existingSymbol, symbol);
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

    View<SymbolTable> SymbolTable::addChild(const std::string &name) {
        auto child = createPtr<SymbolTable>(name);
        child->m_Parent = this;
        auto view = createView<SymbolTable>(child);
        m_Children[name] = std::move(child);
        return view;
    }

    const Symbol& SymbolTable::getSymbol(const std::string &name) {
        if (m_Symbols.find(name) != m_Symbols.end()){
            return m_Symbols[name];
        }
        else if (m_Parent != nullptr) {
            return m_Parent->getSymbol(name);
        }
        else{
            throw SymbolUndefinedException(name, 0, 0);
        }
    }
}
