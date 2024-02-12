#include "VariableTypes.hpp"

namespace Srsl{

    uint32 getVariableTypeSize(VariableType type){
        switch (type) {
            case VT_VOID:   return 0;
            case VT_BOOL:   return 4;   // on GPU's bools are stored as 4 byte integers
            case VT_INT:    return 4;
            case VT_UINT:   return 4;
            case VT_HALF:   return 2;
            case VT_FLOAT:  return 4;
            case VT_DOUBLE: return 8;
            case VT_SAMPLER: return 4;
            case VT_TEXTURE1D: return 4;
            case VT_TEXTURE2D: return 4;
            case VT_TEXTURE3D: return 4;
            case VT_TEXTURECUBE: return 4;
            case VT_TEXTURE1DARRAY: return 4;
            case VT_TEXTURE2DARRAY: return 4;
            case VT_TEXTURECUBEARRAY: return 4;
            default: return 0;
        }
    }

}
