#pragma once

#include "Exception.hpp"
#include "Typedefs.hpp"
#include "Macros.hpp"
#include "Memory.hpp"
#include "SmartPtr.hpp"

namespace Srsl{

    std::string shaderTypeToString(SRSL_SHADER_TYPE type);

    u64 generateID();

}