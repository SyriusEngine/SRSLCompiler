#include "Symbol.hpp"

namespace Srsl{

    std::string symbolClassToString(SYMBOL_CLASS symbolClass){
        switch (symbolClass){
            case SC_DEFAULT:            return "default";
            case SC_VARIABLE:           return "variable";
            case SC_FUNCTION:           return "function";
            case SC_STRUCT:             return "struct";
            case SC_SHADER_INTERFACE:   return "shader interface";
            case SC_CONSTANT_BUFFER:    return "constant buffer";
            case SC_TEXTURE:            return "texture";
            case SC_SAMPLER:            return "sampler";
            case SC_VECTOR_SWIZZLE:     return "vector swizzle";
            default:                    return "unknown";
        }
    }
}