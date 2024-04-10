#include "TestCodeGenerator.hpp"

namespace Srsl{

    TestCodeGenerator::TestCodeGenerator(const std::string &testSSBOName):
    testSSBOName(testSSBOName),
    totalLines(0){

    }

    TestCodeGenerator::~TestCodeGenerator() = default;
}
