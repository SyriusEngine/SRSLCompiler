#include "SrslCompiler/SrslCompiler.hpp"

#include "ShaderModuleImpl.hpp"
#include "ShaderProgramImpl.hpp"

namespace Srsl{

    std::shared_ptr<ShaderModule> createShaderModuleFromFile(const std::string& fileName){
        std::ifstream file(fileName);
        if(!file.is_open()){
            return nullptr;
        }
        std::string source;
        std::string line;
        while(std::getline(file, line)){
            source += line + "\n";
        }
        return createShaderModuleFromSource(source);
    }

    std::shared_ptr<ShaderModule> createShaderModuleFromSource(const std::string& source){
        return std::make_shared<ShaderModuleImpl>(source);
    }

    std::shared_ptr<ShaderProgram> createShaderProgram(){
        return std::make_shared<ShaderProgramImpl>();
    }

    std::shared_ptr<ShaderProgram> createShaderProgram(const ShaderLimits& limits){
        return std::make_shared<ShaderProgramImpl>(limits);
    }
}
