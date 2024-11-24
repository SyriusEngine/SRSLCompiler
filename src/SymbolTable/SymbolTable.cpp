#include "SymbolTable.hpp"
#include "SymbolException.hpp"

namespace Srsl{

    SymbolTable::SymbolTable(const std::string &name):
    m_Name(name),
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
        SharedPtr<SymbolTable> parent = m_Parent.lock();
        if (parent != nullptr){
            return parent->hasSymbol(name);
        }
        else {
            return false;
        }
    }

    SharedPtr<SymbolTable> SymbolTable::addChild(const std::string &name) {
        auto child = createPtr<SymbolTable>(name);
        child->m_Parent = shared_from_this();
        m_Children[name] = std::move(child);
        return m_Children[name];
    }

    SharedPtr<SymbolTable> SymbolTable::getParent() const {
        return m_Parent.lock();
    }

    const Symbol& SymbolTable::getSymbol(const std::string &name) {
        if (m_Symbols.find(name) != m_Symbols.end()){
            return m_Symbols[name];
        }
        SharedPtr<SymbolTable> parent = m_Parent.lock();
        if (parent != nullptr) {
            return parent->getSymbol(name);
        }
        else{
            throw SymbolUndefinedException(name, 0, 0);
        }
    }

    void SymbolTable::toHtml(std::ofstream &file) {
        file << "<h2>" << m_Name;
        SharedPtr<SymbolTable> parent = m_Parent.lock();
        if (parent != nullptr){
            file << " (Parent: " << parent->m_Name << ")";
        }
        file << "</h2>\n";

        file << "<table border=\"1\">" << std::endl;
        file << "<tr>" << std::endl;
        file << "<th>Name</th>" << std::endl;
        file << "<th>Type</th>" << std::endl;
        file << "<th>Class</th>" << std::endl;
        file << "<th>Struct</th>" << std::endl;
        file << "</tr>" << std::endl;
        for (const auto& [name, symbol]: m_Symbols){
            file << "<tr>" << std::endl;
            file << "<td>" << symbol.name << "</td>" << std::endl;
            file << "<td>";
            symbol.type.toHtml(file);
            file << "</td>" << std::endl;
            file << "<td>" << symbolClassToString(symbol.symbolClass) << "</td>" << std::endl;
            file << "<td>" << (symbol.structTable ? "true" : "false") << "</td>" << std::endl;
            file << "</tr>" << std::endl;
        }
        file << "</table>" << std::endl;


        for (const auto& [name, child]: m_Children){
            child->toHtml(file);
        }
    }
}
