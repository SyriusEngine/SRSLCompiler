#pragma once

#include "../Utils.hpp"

namespace Srsl{

    class TestCaseNode;
    class ScopeNode;

    class TestCodeGenerator{
    public:
        std::vector<TestCaseNode*> testCases;
        std::vector<ScopeNode*> scopes;
    };
}