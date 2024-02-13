#include <iostream>
#include <vector>
#include <string>
#include <map>

#include <SrslCompiler/SrslCompiler.hpp>
#include <iomanip>

struct TestData{
    std::string vertexShaderPath;
    std::string fragmentShaderPath;
    bool expectedSuccess;
};

bool testShader(const TestData& data){
    try{
        using namespace Srsl;

        ImportDesc vertexDesc;
        vertexDesc.source = data.vertexShaderPath;
        vertexDesc.loadType = SRSL_LOAD_FROM_FILE;
        auto vertexShaderModule = createShaderModule(vertexDesc);
        vertexShaderModule->exportAstDot("./Dev-vs.dot");
        vertexShaderModule->exportSymbolTableHtml("./Dev-vs.html");

        ImportDesc fragmentDesc;
        fragmentDesc.source = data.fragmentShaderPath;
        fragmentDesc.loadType = SRSL_LOAD_FROM_FILE;
        auto fragmentShaderModule = createShaderModule(fragmentDesc);
        fragmentShaderModule->exportAstDot("./Dev-fs.dot");
        fragmentShaderModule->exportSymbolTableHtml("./Dev-fs.html");


        ExportDesc exportGlsl;
        exportGlsl.vertexShaderOut = "./Dev-vs.glsl";
        exportGlsl.fragmentShaderOut = "./Dev-fs.glsl";
        exportGlsl.writeType = SRSL_WRITE_TO_FILE;
        exportGlsl.target = SRSL_TARGET_GLSL;
        exportGlsl.version.majorVersion = 4;
        exportGlsl.version.minorVersion = 6;

        ExportDesc exportHlsl;
        exportHlsl.vertexShaderOut = "./Dev-vs.hlsl";
        exportHlsl.fragmentShaderOut = "./Dev-fs.hlsl";
        exportHlsl.writeType = SRSL_WRITE_TO_FILE;
        exportHlsl.target = SRSL_TARGET_HLSL;
        exportHlsl.version.majorVersion = 5;
        exportHlsl.version.minorVersion = 0;

        auto shaderProgram = createShaderProgram();
        shaderProgram->addShaderModule(vertexShaderModule);
        shaderProgram->addShaderModule(fragmentShaderModule);
        shaderProgram->link();
        shaderProgram->exportShader(exportGlsl);
        shaderProgram->exportShader(exportHlsl);

    } catch(std::exception& e){
        std::cerr << "Exception: " << e.what() << std::endl;
        return false;
    }
    return true;

}

int main(int argc, char** argv){
    std::map<std::string, TestData> testMap = {
            {"Variables", {"./SRSLShaders/VariableTest-vs.srsl", "./SRSLShaders/VariableTest-fs.srsl", true}},
            {"Swizzle", {"./SRSLShaders/VectorSwizzleTest-vs.srsl", "./SRSLShaders/VariableTest-fs.srsl", true}},
            {"Flow Control", {"./SRSLShaders/FlowControlTest-vs.srsl", "./SRSLShaders/FlowControlTest-fs.srsl", true}},
    };

    std::cout << "Running Tests: \n";
    std::cout << "------------------------------------------------\n";
    std::cout << "|        name        | Expected | Got | Result |\n";
    std::cout << "------------------------------------------------\n";

    try{
        for (const auto& [name, test]: testMap){
            std::cout << "| " << std::setw(18) << name << " | " << std::setw(8) << test.expectedSuccess << " | " << std::setw(3) << testShader(test) << " | " << std::setw(6) << (test.expectedSuccess == testShader(test) ? "Pass" : "FAIL") << " |\n";
        }
    } catch (std::exception& e){
        std::cerr << "Exception: " << e.what() << std::endl;
        return -1;
    } catch (...){
        std::cerr << "Unknown exception" << std::endl;
        return -1;
    }
    std::cout << "------------------------------------------------\n";
    return 0;

}
