#include <iostream>
#include <filesystem>
#include <string>
#include <unordered_map>

#include <SrslCompiler/SrslCompiler.hpp>
#include <iomanip>
#include <fstream>

using namespace Srsl;

void compileShader(const std::string& vertexShader, const std::string& fragmentShader){
    auto vertexShaderModule = createShaderModuleFromFile(vertexShader);
    vertexShaderModule->exportAstDot("./Dev-vs.dot");
    vertexShaderModule->exportSymbolTableHtml("./Dev-vs.html");

    auto fragmentShaderModule = createShaderModuleFromFile(fragmentShader);
    fragmentShaderModule->exportAstDot("./Dev-fs.dot");
    fragmentShaderModule->exportSymbolTableHtml("./Dev-fs.html");

    ExportDesc exportGlsl = createGlslDefaultExportDesc();
    exportGlsl.vertexShaderOut = "./Dev-vs.glsl";
    exportGlsl.fragmentShaderOut = "./Dev-fs.glsl";

    ExportDesc exportHlsl = createHlslDefaultExportDesc();
    exportHlsl.vertexShaderOut = "./Dev-vs.hlsl";
    exportHlsl.fragmentShaderOut = "./Dev-fs.hlsl";

    auto shaderProgram = createShaderProgram();
    shaderProgram->addShaderModule(vertexShaderModule);
    shaderProgram->addShaderModule(fragmentShaderModule);
    shaderProgram->link();
    shaderProgram->exportShader(exportGlsl);
    shaderProgram->exportShader(exportHlsl);
}

void discoverShaders(const std::string& shaderDir, std::unordered_map<std::string, bool>& shaderNames){
    for (const auto& entry : std::filesystem::directory_iterator(shaderDir)) {
        if (entry.is_regular_file()) {
            std::string shaderName = entry.path().filename().string();
            // remove file extension
            shaderName = shaderName.substr(0, shaderName.find_last_of('.'));
            shaderName = shaderName.substr(0, shaderName.find_last_of('-'));
            if (shaderName.find("FAIL") != std::string::npos) {
                shaderNames[shaderName] = false;
            } else{
                shaderNames[shaderName] = true;
            }
        }
    }
}

int main(int argc, char** argv){
    if (argc < 2){
        std::cout << "Usage: SrslCompilerBenchmark <path-to-shader-directory>" << std::endl;
        return 1;
    }
    try{
        std::string shaderDirectory = argv[1];
        std::unordered_map<std::string, bool> shaderNames;
        discoverShaders(shaderDirectory, shaderNames);

        std::ofstream resultFile("TestResults.txt");
        resultFile << "--------------------------------------------------------\n";
        resultFile << "|            name            | Expected | Got | Result |\n";
        resultFile << "--------------------------------------------------------\n";
        for (const auto& [shaderName, shouldFail] : shaderNames) {
            std::string vertexShaderPath = shaderDirectory + "/" + shaderName + "-vs.srsl";
            std::string fragmentShaderPath = shaderDirectory + "/" + shaderName + "-fs.srsl";
            bool success = true;
            try{
                compileShader(vertexShaderPath, fragmentShaderPath);
            } catch (const std::exception& e){
                success = false;
            }
            resultFile << "| " << std::setw(26) << shaderName << " | " << std::setw(8) << shouldFail << " | " << std::setw(3) << success << " | " << std::setw(6) << (shouldFail == success ? "PASS" : "FAIL") << " |\n";
        }
        resultFile << "--------------------------------------------------------";
        resultFile.close();
    } catch (const std::exception& e){
        std::cout << "Error: " << e.what() << std::endl;
        return 1;
    }
    return 0;
}