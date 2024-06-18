#pragma once

#include "Symbol.hpp"

namespace Srsl{

    class SymbolRedefinitionException: public SrslException{
    public:
        explicit SymbolRedefinitionException(const Symbol& existingSymbol, const Symbol& newSymbol);

        ~SymbolRedefinitionException() override;

    private:
        Symbol m_ExistingSymbol;
        Symbol m_NewSymbol;
    };

    class SymbolUndefinedException: public SrslException{
    public:
        explicit SymbolUndefinedException(const std::string& name, u64 lineNr, u64 charPos);

        ~SymbolUndefinedException() override;

    private:
        std::string m_Name;
        u64 m_LineNr;
        u64 m_CharPos;
    };

}