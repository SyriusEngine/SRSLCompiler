#include "../include/SrslCompiler/ShaderProgram.hpp"

namespace Srsl{

    ShaderProgram::ShaderProgram():
    m_Limits(){

    }

    ShaderProgram::ShaderProgram(const ShaderLimits &limits):
    m_Limits(limits){

    }

    ShaderProgram::~ShaderProgram() = default;

}
