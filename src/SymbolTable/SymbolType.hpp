#pragma once

#include "../Utils/Utils.hpp"

namespace Srsl{

    typedef enum VARIABLE_TYPE: u32{
        VT_TYPE_NONE            = 0x00,

        // C-style types
        VT_VOID                 = 0x01,
        VT_BOOL                 = 0x02,
        VT_INT                  = 0x03,
        VT_UINT                 = 0x04,
        VT_HALF                 = 0x05,
        VT_FLOAT                = 0x06,
        VT_DOUBLE               = 0x07,

        // shader specific types
        VT_SAMPLER              = 0x10,
        VT_TEXTURE1D            = 0x11,
        VT_TEXTURE2D            = 0x12,
        VT_TEXTURE3D            = 0x13,
        VT_TEXTURE_CUBE         = 0x14,
        VT_TEXTURE1D_ARRAY      = 0x15,
        VT_TEXTURE2D_ARRAY      = 0x16,
        VT_TEXTURE3D_ARRAY      = 0x17,
        VT_TEXTURE_CUBE_ARRAY   = 0x18,

        // helper types
        VT_STRUCT           = 0x20,
        VT_INTRINSIC        = 0x21,
        VT_TEMPLATE         = 0x22,
    } VARIABLE_TYPE;

    typedef enum DIMENSION_TYPE: u32{
        DT_NONE = 0x00,
        DT_VECTOR = 0x01,
        DT_MATRIX = 0x02,
    } DIMENSION_TYPE;

    class SymbolType{
    public:
        SymbolType() = default;

        explicit SymbolType(VARIABLE_TYPE type);

        explicit SymbolType(const std::string& srslStr, bool isConst = false, const std::vector<u32>& arraySizes = {});

        [[nodiscard]] VARIABLE_TYPE getVariableType() const;

        [[nodiscard]] DIMENSION_TYPE getDimensionType() const;

        [[nodiscard]] bool isConst() const;

        [[nodiscard]] const std::vector<u32>& getArraySizes() const;

    private:
        std::string m_Original;
        VARIABLE_TYPE m_VariableType = VT_TYPE_NONE;
        DIMENSION_TYPE m_DimensionType = DT_NONE;
        bool m_IsConst = false;
        std::vector<u32> m_ArraySizes;

    };

}