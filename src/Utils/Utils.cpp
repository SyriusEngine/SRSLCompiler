#include "Utils.hpp"

namespace Srsl{

    std::string shaderTypeToString(SRSL_SHADER_TYPE type){
        switch (type) {
            case SRSL_VERTEX_SHADER: return "Vertex";
            case SRSL_FRAGMENT_SHADER: return "Fragment";
            case SRSL_GEOMETRY_SHADER: return "Geometry";
            default: return "Unknown";
        }
    }

}
