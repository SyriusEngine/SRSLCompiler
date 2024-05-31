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

    class Symbol{
    public:
        std::string name;
        std::string semantic;
        SymbolType type;

    };


}