#pragma once

#include "Utils/Utils.hpp"
#include "AbstractSyntaxTree/FunctionNode.hpp"
#include "AbstractSyntaxTree/TestCaseNode.hpp"
#include "AbstractSyntaxTree/ScopeNode.hpp"

namespace Srsl{

    struct ProgramInfo{
        SRSL_SHADER_TYPE shaderType = SRSL_SHADER_NONE;
        uint32 testCaseCount = 0;
        uint32 scopeCount = 0;
        uint32 variableCount = 0;
        uint32 functionCount = 0;
        FunctionDeclarationNode* mainFunction = nullptr;
        std::vector<FunctionDeclarationNode*> functions;
        std::vector<TestCaseNode*> testCases;
        std::vector<ScopeNode*> scopes;
    };

}