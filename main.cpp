#include <iostream>
#include <SrslCompiler/SrslCompiler.hpp>

int main(int argc, char** argv){
    try{
        if (argc > 2){
            using namespace Srsl;

            auto vs = createShaderModuleFromFile(argv[1]);


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