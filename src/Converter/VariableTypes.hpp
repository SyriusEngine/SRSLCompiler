#pragma once

#include "../Utils.hpp"

namespace Srsl{

    typedef enum VariableType{
        // C-style types
        VT_VOID     = 0x00,
        VT_BOOL     = 0x01,
        VT_INT      = 0x02,
        VT_UINT     = 0x03,
        VT_HALF     = 0x04,
        VT_FLOAT    = 0x05,
        VT_DOUBLE   = 0x06,

        // shader specific types
        VT_SAMPLER          = 0x10,
        VT_TEXTURE1D        = 0x11,
        VT_TEXTURE2D        = 0x12,
        VT_TEXTURE3D        = 0x13,
        VT_TEXTURECUBE      = 0x14,
        VT_TEXTURE1DARRAY   = 0x15,
        VT_TEXTURE2DARRAY   = 0x16,
        VT_TEXTURECUBEARRAY = 0x17,

        // helper types
        VT_STRUCT           = 0x20,
        VT_INTRINSIC        = 0x21,
    } VariableType;

    struct TypeDesc{
        VariableType type = VT_VOID;
        uint32 rows = 0;
        uint32 columns = 0;
        std::vector<uint32> arraySizes;
    };

    /**
     * @brief returns the size of a variable type in bytes
     * @param type the type to get the size of
     * @return uint32 the size of the type in bytes
     */
    uint32 getVariableTypeSize(VariableType type);

}