#pragma once

#include "../Utils.hpp"

namespace Srsl{

    class TestCaseNode;
    class ScopeNode;
    class FunctionDeclarationNode;

    class TestCodeGenerator{
    public:
        TestCodeGenerator(const std::string& testSSBOName);

        ~TestCodeGenerator();

    public:
        const std::string testSSBOName;

        std::vector<TestCaseNode*> testCases;
        std::vector<ScopeNode*> scopes;
        std::vector<FunctionDeclarationNode*> functions;
    };
}