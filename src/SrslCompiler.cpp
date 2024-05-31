#include "SrslCompiler/SrslCompiler.hpp"
#include <filesystem>

#include "ShaderModuleImpl.hpp"
#include "ShaderProgramImpl.hpp"

namespace Srsl{

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

    std::shared_ptr<ShaderModule> createShaderModuleFromFile(const std::string& fileName, const ShaderLimits& limits){
        if (!std::filesystem::exists(fileName)){
            throw FileNotFoundException(fileName);
        }
        std::ifstream file(fileName);
        std::string source;
        std::string line;
        while(std::getline(file, line)){
            source += line + "\n";
        }
        return createShaderModuleFromSource(source, limits);
    }

    std::shared_ptr<ShaderModule> createShaderModuleFromSource(const std::string& source, const ShaderLimits& limits){
        return std::make_shared<ShaderModuleImpl>(source, limits);
    }

    std::shared_ptr<ShaderProgram> createShaderProgram(){
        return std::make_shared<ShaderProgramImpl>();
    }

    uint64_t getAllocatedMemory(){
        return AllocationTracker::getTotalAllocated();
    }

    uint64_t getFreedMemory(){
        return AllocationTracker::getTotalFreed();
    }

    uint64_t getMemoryUsage(){
        return AllocationTracker::getUsage();
    }
}
