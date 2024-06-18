#pragma once

#include "Utils/Utils.hpp"

namespace Srsl{

    class ProgramInfo{
    public:
        ProgramInfo() = default;

        ~ProgramInfo() = default;

        SRSL_SHADER_TYPE shaderType = SRSL_SHADER_NONE;
        u64 scopeCount = 0;
        u64 variableCount = 0;
        u64 functionCount = 0;
    };

}