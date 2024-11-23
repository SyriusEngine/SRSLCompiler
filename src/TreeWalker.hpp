#pragma once

#include <stack>

#include "SrslGrammarBaseListener.h"
#include "SrslGrammarLexer.h"
#include "SrslGrammarParser.h"

#include "Utils/Utils.hpp"

#include "AbstractSyntaxTree/BaseNode.hpp"
#include "AbstractSyntaxTree/ShaderTypeNode.hpp"

#include "ProgramInfo.hpp"

namespace Srsl{

    class TreeWalker: public SrslGrammarBaseListener{
    public:
        TreeWalker(SharedPtr<BaseNode>& root, SharedPtr<SymbolTable> symbolTable, ProgramInfo& programInfo);

        void enterShaderTypeSpec(SrslGrammarParser::ShaderTypeSpecContext* ctx) override;


    private:
        SharedPtr<BaseNode>& m_Root;
        SharedPtr<SymbolTable> m_SymbolTable;
        ProgramInfo& m_ProgramInfo;

        std::stack<SharedPtr<SymbolTable>> m_SymbolTableStack;


    };

}