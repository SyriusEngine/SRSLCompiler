#include <iostream>
#include <SrslCompiler/SrslCompiler.hpp>

int main(int argc, char** argv){
    try{
        if (argc > 2){
            using namespace Srsl;

            auto vertexShaderModule = createShaderModuleFromFile(argv[1]);
            vertexShaderModule->exportAstDot("./Dev-vs.dot");
            vertexShaderModule->exportSymbolTableHtml("./Dev-vs.html");

            auto fragmentShaderModule = createShaderModuleFromFile(argv[2]);
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

//            TestConfig vsConfig;
//            vsConfig.ssboName = "VertexShaderTestResults";
//            vsConfig.ssboSlot = 0;
//            TestConfig fsConfig;
//            fsConfig.ssboName = "FragmentShaderTestResults";
//            fsConfig.ssboSlot = 1;
//            shaderProgram->generateTestCode(vsConfig, fsConfig);

            shaderProgram->exportShader(exportGlsl);
            shaderProgram->exportShader(exportHlsl);

        }
        else{
            std::cerr << "Usage: " << argv[0] << " <vertex shader> <fragment shader>" << std::endl;
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