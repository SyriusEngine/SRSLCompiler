#include "Utils.hpp"
#include <random>

namespace Srsl{

    std::string shaderTypeToString(SRSL_SHADER_TYPE type){
        switch (type) {
            case SRSL_VERTEX_SHADER: return "Vertex";
            case SRSL_FRAGMENT_SHADER: return "Fragment";
            default: return "Unknown";
        }
    }

    u64 generateID(){
        static std::random_device rd;
        static std::mt19937_64 gen(rd());
        static std::uniform_int_distribution<u64> dis(0, 0xFFFFFFFFFFFFFFFF);
        return dis(gen);
    }
}
