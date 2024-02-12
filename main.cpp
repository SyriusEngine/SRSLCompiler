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


            ExportDesc exportDesc;
            exportDesc.vertexShaderOut = "./Dev-vs.glsl";
            exportDesc.fragmentShaderOut = "./Dev-fs.glsl";
            exportDesc.writeType = SRSL_WRITE_TO_FILE;

            auto shaderProgram = createShaderProgram();
            shaderProgram->addShaderModule(vertexShaderModule);
            shaderProgram->addShaderModule(fragmentShaderModule);
            shaderProgram->link();
            shaderProgram->exportShader(exportDesc);




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