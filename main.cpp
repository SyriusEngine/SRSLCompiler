#include <iostream>
#include <SrslCompiler/SrslCompiler.hpp>
#include <chrono>

int main(int argc, char** argv){
    using namespace Srsl;
    try{
        if (argc > 2){
            auto start = std::chrono::high_resolution_clock::now();
            auto vs = createShaderModuleFromFile(argv[1]);
            auto stop = std::chrono::high_resolution_clock::now();
            std::cout << "Vertex Shader Parse: " << std::chrono::duration_cast<std::chrono::milliseconds>(stop - start).count() << "ms" << std::endl;

            start = std::chrono::high_resolution_clock::now();
            auto fs = createShaderModuleFromFile(argv[2]);
            stop = std::chrono::high_resolution_clock::now();
            std::cout << "Fragment Shader Parse: " << std::chrono::duration_cast<std::chrono::milliseconds>(stop - start).count() << "ms" << std::endl;


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
    std::cout << "Total Allocated: " << getAllocatedMemory() << " bytes" << std::endl;
    std::cout << "Total Freed    : " << getFreedMemory() << " bytes" << std::endl;
    std::cout << "Lost Memory    : " << getMemoryUsage() << " bytes" << std::endl;

    return 0;

}