#include "SrslCompiler/SrslCompiler.hpp"

#include "ShaderModuleImpl.hpp"
#include "ShaderProgramImpl.hpp"

namespace Srsl{

    ShaderModule::ShaderModule() {

    }

    ShaderModule::~ShaderModule() {

    }

    ShaderProgram::ShaderProgram() {

    }

    ShaderProgram::~ShaderProgram() {

    }

    std::shared_ptr<ShaderModule> createShaderModule(const ImportDesc& desc){
        return std::make_shared<ShaderModuleImpl>(desc);
    }

    std::shared_ptr<ShaderProgram> createShaderProgram(){
        return std::make_shared<ShaderProgramImpl>();
    }
}
