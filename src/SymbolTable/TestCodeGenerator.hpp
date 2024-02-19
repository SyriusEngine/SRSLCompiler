#pragma once

#include "../Utils.hpp"

namespace Srsl{

    class TestCaseNode;

    struct TestCodeGenerator{
        std::vector<TestCaseNode*> testCases;
    };
}