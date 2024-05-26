#pragma once

#include "Utils/Utils.hpp"

namespace Srsl{
    typedef enum SYMBOL_TYPE{
        ST_DEFAULT          = 0x00,
        ST_VARIABLE         = 0x01,
        ST_FUNCTION         = 0x02,
        ST_STRUCT           = 0x03,
        ST_SHADER_INTERFACE = 0x04,
        ST_CONSTANT_BUFFER  = 0x05,
        ST_TEXTURE          = 0x06,
        ST_SAMPLER          = 0x07,
        ST_VECTOR_SWIZZLE   = 0x08,
    } SYMBOL_TYPE;

    class SymbolTable;

    struct Symbol{
        std::string name;
        std::string semantic;

    };



}
