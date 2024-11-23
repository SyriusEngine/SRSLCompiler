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

    Ptr<SymbolTable>& SymbolTable::addChild(const std::string &name) {
        auto child = createPtr<SymbolTable>(name);
        child->m_Parent = this;
        m_Children[name] = std::move(child);
        return m_Children[name];
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

    void SymbolTable::toHtml(std::ofstream &file) {
        file << "<h2>" << m_Name;
        if (m_Parent != nullptr){
            file << " (Parent: " << m_Parent->m_Name << ")";
        }
        file << "</h2>\n";

        file << "<table border=\"1\">" << std::endl;
        file << "<tr>" << std::endl;
        file << "<th>Name</th>" << std::endl;
        file << "<th>Type</th>" << std::endl;
        file << "<th>Class</th>" << std::endl;
        file << "<th>IsConst</th>" << std::endl;
        file << "<th>Struct</th>" << std::endl;
        file << "</tr>" << std::endl;
        for (const auto& [name, symbol]: m_Symbols){
            file << "<tr>" << std::endl;
            file << "<td>" << symbol.name << "</td>" << std::endl;
            file << "<td>" << symbol.type.getVariableType() << "</td>" << std::endl;
            file << "<td>" << symbolClassToString(symbol.symbolClass) << "</td>" << std::endl;
            file << "<td>" << (symbol.type.isConst() ? "true" : "false") << "</td>" << std::endl;
            file << "<td>" << (symbol.structTable ? "true" : "false") << "</td>" << std::endl;
            file << "</tr>" << std::endl;
        }
        file << "</table>" << std::endl;


        for (const auto& [name, child]: m_Children){
            child->toHtml(file);
        }
    }
}
