#pragma once

#include "../Utils.hpp"
#include "../Converter/VariableTypes.hpp"

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
        ST_TEST_CASE        = 0x09,
        ST_SHADER_STORAGE_BUFFER = 0x0A,
    } SYMBOL_TYPE;

    class SymbolTable;

    struct Symbol{
        std::string name;
        std::string semantic;
        TypeDesc type = {};
        SYMBOL_TYPE symbolType          = ST_DEFAULT;
        RCP<SymbolTable> structTable    = nullptr;
        uint32 slot                     = 0;
    };

}