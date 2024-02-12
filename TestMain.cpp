#include <iostream>

int main(int argc, char** argv){
    try{
        if (argc > 2){

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
