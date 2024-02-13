#include "SymbolTable.hpp"

namespace Srsl{

    SymbolTable::SymbolTable(const std::string &name):
    m_Name(name),
    m_Parent(nullptr){

    }

    SymbolTable::~SymbolTable() {

    }

    void SymbolTable::addSymbol(const Symbol &symbol) {
        m_Symbols[symbol.name] = symbol;

    }

    void SymbolTable::addChild(RCP<SymbolTable> symbolTable) {
        m_Children.insert({symbolTable->m_Name, symbolTable});
        symbolTable->m_Parent = this;
    }

    Symbol &SymbolTable::getSymbol(const std::string &name) {
        if (m_Symbols.find(name) != m_Symbols.end()){
            return m_Symbols[name];
        }
        else if (m_Parent != nullptr){
            return m_Parent->getSymbol(name);
        }
        else {
            SRSL_THROW_EXCEPTION("SymbolTable: %s does not contain symbol: %s", m_Name.c_str(), name.c_str());
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

    const std::string &SymbolTable::getName() const {
        return m_Name;
    }

    std::string vectorToString(const std::vector<uint32>& vector){
        std::string result = "[";
        for (const auto& element: vector){
            result += std::to_string(element) + ", ";
        }
        result += "]";
        return result;
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
        file << "<th>IsConst</th>" << std::endl;
        file << "<th>Type</th>" << std::endl;
        file << "<th>slot</th>" << std::endl;
        file << "<th>ArraySizes</th>" << std::endl;
        file << "<th>Rows</th>" << std::endl;
        file << "<th>Columns</th>" << std::endl;
        file << "<th>Struct</th>" << std::endl;
        file << "</tr>" << std::endl;
        for (const auto& [name, symbol]: m_Symbols){
            file << "<tr>" << std::endl;
            file << "<td>" << symbol.name << "</td>" << std::endl;
            file << "<td>" << symbol.type.isConst << "</td>" << std::endl;
            file << "<td>" << variableTypeToString(symbol.type.type) << "</td>" << std::endl;
            file << "<td>" << symbol.slot << "</td>" << std::endl;
            file << "<td>" << vectorToString(symbol.type.arraySizes) << "</td>" << std::endl;
            file << "<td>" << symbol.type.rows << "</td>" << std::endl;
            file << "<td>" << symbol.type.columns << "</td>" << std::endl;
            file << "<td>" << symbol.structTable << "</td>" << std::endl;
            file << "</tr>" << std::endl;
        }
        file << "</table>" << std::endl;
        for (const auto& [name, child]: m_Children){
            child->toHtml(file);
        }
    }

    uint32 SymbolTable::getSize() const {
        uint32 size = 0;
        for (const auto& [name, symbol]: m_Symbols){
            uint32 symbolSize = symbol.type.getSize();
            if (symbol.structTable != nullptr){
                symbolSize += symbol.structTable->getSize();
            }
            size += symbolSize;
        }
        for (const auto& [name, child]: m_Children){
            size += child->getSize();
        }
        return size;
    }
}
