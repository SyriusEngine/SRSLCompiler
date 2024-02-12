#include <iostream>
#include <SrslCompiler/SrslCompiler.hpp>

int main(int argc, char** argv){
    try{
        if (argc > 2){
            using namespace Srsl;

            ImportDesc vertexDesc;
            vertexDesc.source = argv[1];
            vertexDesc.loadType = SRSL_LOAD_FROM_FILE;
            auto vertexShaderModule = createShaderModule(vertexDesc);
            vertexShaderModule->exportAstDot("./Dev-vs.dot");
            vertexShaderModule->exportSymbolTableHtml("./Dev-vs.html");

            ImportDesc fragmentDesc;
            fragmentDesc.source = argv[2];
            fragmentDesc.loadType = SRSL_LOAD_FROM_FILE;
            auto fragmentShaderModule = createShaderModule(fragmentDesc);
            fragmentShaderModule->exportAstDot("./Dev-fs.dot");
            fragmentShaderModule->exportSymbolTableHtml("./Dev-fs.html");


            ExportDesc exportGlsl;
            exportGlsl.vertexShaderOut = "./Dev-vs.glsl";
            exportGlsl.fragmentShaderOut = "./Dev-fs.glsl";
            exportGlsl.writeType = SRSL_WRITE_TO_FILE;
            exportGlsl.target = SRSL_TARGET_GLSL;

            ExportDesc exportHlsl;
            exportHlsl.vertexShaderOut = "./Dev-vs.hlsl";
            exportHlsl.fragmentShaderOut = "./Dev-fs.hlsl";
            exportHlsl.writeType = SRSL_WRITE_TO_FILE;
            exportHlsl.target = SRSL_TARGET_HLSL;

            auto shaderProgram = createShaderProgram();
            shaderProgram->addShaderModule(vertexShaderModule);
            shaderProgram->addShaderModule(fragmentShaderModule);
            shaderProgram->link();
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