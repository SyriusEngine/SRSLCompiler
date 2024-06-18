#pragma once

#include "SymbolType.hpp"

namespace Srsl{

    typedef enum SYMBOL_CLASS{
        SC_DEFAULT          = 0x00,
        SC_VARIABLE         = 0x01,
        SC_FUNCTION         = 0x02,
        SC_STRUCT           = 0x03,
        SC_SHADER_INTERFACE = 0x04,
        SC_CONSTANT_BUFFER  = 0x05,
        SC_TEXTURE          = 0x06,
        SC_SAMPLER          = 0x07,
        SC_VECTOR_SWIZZLE   = 0x08,
    } SYMBOL_CLASS;

    std::string symbolClassToString(SYMBOL_CLASS symbolClass);

    class SymbolTable;

    class Symbol{
    public:
        std::string name;
        std::string semantic;
        SymbolType type;
        SYMBOL_CLASS symbolClass    = SC_DEFAULT;
        View<SymbolTable> structTable;
        u64 lineNr = 0;
        u64 charPos = 0;
    };

    Symbol createSymbolDefault(const std::string& name, const SymbolType& type);
}