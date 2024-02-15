#include "SrslCompiler/SrslCompiler.hpp"

#include "ShaderModuleImpl.hpp"
#include "ShaderProgramImpl.hpp"

namespace Srsl{

    ShaderModule::ShaderModule() = default;

    ShaderModule::~ShaderModule() = default;

    ShaderProgram::ShaderProgram():
    m_Limits(){

    }

    ShaderProgram::ShaderProgram(const ShaderLimits &limits):
    m_Limits(limits){

    }

    ShaderProgram::~ShaderProgram() = default;


    std::shared_ptr<ShaderModule> createShaderModule(const ImportDesc& desc){
        return std::make_shared<ShaderModuleImpl>(desc);
    }

    std::shared_ptr<ShaderProgram> createShaderProgram(){
        return std::make_shared<ShaderProgramImpl>();
    }
}
