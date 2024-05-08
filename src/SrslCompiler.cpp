#include "SrslCompiler/SrslCompiler.hpp"
#include <filesystem>

#include "ShaderModuleImpl.hpp"
#include "ShaderProgramImpl.hpp"

namespace Srsl{

    std::shared_ptr<ShaderModule> createShaderModuleFromFile(const std::string& fileName){
        SRSL_PRECONDITION(std::filesystem::exists(fileName), "File %s does not exist", fileName.c_str());

        std::ifstream file(fileName);
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

    ExportDesc createGlslDefaultExportDesc(){
        ExportDesc exportGlsl;
        exportGlsl.target = SRSL_TARGET_GLSL;
        exportGlsl.version.majorVersion = 4;
        exportGlsl.version.minorVersion = 6;
        return exportGlsl;
    }

    ExportDesc createHlslDefaultExportDesc(){
        ExportDesc exportHlsl;
        exportHlsl.target = SRSL_TARGET_HLSL;
        exportHlsl.version.majorVersion = 5;
        exportHlsl.version.minorVersion = 0;
        return exportHlsl;
    }

    ShaderLimits createDefaultShaderLimits(){
        ShaderLimits limits;
        return limits;
    }
}
