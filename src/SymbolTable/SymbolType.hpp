#pragma once

#include "../Utils/Utils.hpp"

namespace Srsl{

    typedef enum SYMBOL_TYPE{
        ST_TYPE_NONE            = 0x00,

        // C-style types
        ST_VOID                 = 0x01,
        ST_BOOL                 = 0x02,
        ST_INT                  = 0x03,
        ST_UINT                 = 0x04,
        ST_HALF                 = 0x05,
        ST_FLOAT                = 0x06,
        ST_DOUBLE               = 0x07,

        // shader specific types
        ST_SAMPLER              = 0x10,
        ST_TEXTURE1D            = 0x11,
        ST_TEXTURE2D            = 0x12,
        ST_TEXTURE3D            = 0x13,
        ST_TEXTURE_CUBE         = 0x14,
        ST_TEXTURE1D_ARRAY      = 0x15,
        ST_TEXTURE2D_ARRAY      = 0x16,
        ST_TEXTURE3D_ARRAY      = 0x17,
        ST_TEXTURE_CUBE_ARRAY   = 0x18,

        // helper types
        VT_STRUCT           = 0x20,
        VT_INTRINSIC        = 0x21,
    } SYMBOL_TYPE;

    typedef enum DIMENSION_TYPE: u32{
        DT_NONE = 0x00,
        DT_VECTOR = 0x01,
        DT_MATRIX = 0x02,
    } DIMENSION_TYPE;

    class SymbolType{
    public:
        SymbolType();

        explicit SymbolType(const std::string& srslStr, bool isConst = false, const std::vector<u32>& arraySizes = {});

    private:
        SYMBOL_TYPE m_Type;
        DIMENSION_TYPE m_DimensionType;
        bool m_IsConst;
        std::vector<u32> m_ArraySizes;

    };


}