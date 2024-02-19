#include <iostream>
#include <vector>
#include <string>
#include <map>

#include <SrslCompiler/SrslCompiler.hpp>
#include <iomanip>
#include <fstream>

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

        ShaderLimits limits;
        limits.maxVertexAttributes = 16;
        limits.maxConstantBufferSize = 16384;
        limits.maxTextureUnits = 16;
        limits.maxSamplers = 16;
        limits.maxConstantBufferSlots = 32;


        auto shaderProgram = createShaderProgram(limits);
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

void testAll(const std::map<std::string, TestData>& testMap){
    std::ofstream resultFile("TestResults.txt");

    resultFile << "--------------------------------------------------------\n";
    resultFile << "|            name            | Expected | Got | Result |\n";
    resultFile << "--------------------------------------------------------\n";

    for (const auto& [name, test]: testMap){
        std::cout << "Testing: " << name << std::endl;
        resultFile << "| " << std::setw(26) << name << " | " << std::setw(8) << test.expectedSuccess << " | " << std::setw(3) << testShader(test) << " | " << std::setw(6) << (test.expectedSuccess == testShader(test) ? "Pass" : "FAIL") << " |\n";
    }

    resultFile << "--------------------------------------------------------\n";
    resultFile.close();
}

int main(int argc, char** argv){
    std::map<std::string, TestData> testMap = {
            {"Variables", {"./SRSLShaders/VariableTest-vs.srsl", "./SRSLShaders/VariableTest-fs.srsl", true}},
            {"Swizzle", {"./SRSLShaders/VectorSwizzleTest-vs.srsl", "./SRSLShaders/VariableTest-fs.srsl", true}},
            {"FlowControl", {"./SRSLShaders/FlowControlTest-vs.srsl", "./SRSLShaders/FlowControlTest-fs.srsl", true}},
            {"ConstantBuffer", {"./SRSLShaders/ConstantBufferTest-vs.srsl", "./SRSLShaders/VariableTest-fs.srsl", true}},
            {"Functions", {"./SRSLShaders/FunctionTest-vs.srsl", "./SRSLShaders/FunctionTest-fs.srsl", true}},
            {"CBSlotTooLarge", {"./SRSLShaders/CBLargeSlot-vs.srsl", "./SRSLShaders/VariableTest-fs.srsl", false}},
            {"CBSlotTaken", {"./SRSLShaders/CBSlotAlreadyTaken-vs.srsl", "./SRSLShaders/VariableTest-fs.srsl", false}},
            {"ComparisonFail", {"./SRSLShaders/ComparisonTestFail-vs.srsl", "./SRSLShaders/VariableTest-fs.srsl", false}},
            {"VectorComparison", {"./SRSLShaders/VectorComparisonTest-vs.srsl", "./SRSLShaders/VariableTest-fs.srsl", true}},
    };

    try{
        if (argc < 2){
            testAll(testMap);
        }
        for (int i = 1; i < argc; i++){
            if (testMap.find(argv[i]) != testMap.end()){
                testShader(testMap[argv[i]]);
            }
        }

    } catch (std::exception& e){
        std::cerr << "Exception: " << e.what() << std::endl;
        return -1;
    } catch (...){
        std::cerr << "Unknown exception" << std::endl;
        return -1;
    }
    return 0;

}
