#pragma once

#include <stack>

#include "SrslGrammarBaseListener.h"
#include "SrslGrammarLexer.h"
#include "SrslGrammarParser.h"

#include "Utils/Utils.hpp"

#include "AbstractSyntaxTree/BaseNode.hpp"
#include "AbstractSyntaxTree/ShaderTypeNode.hpp"
#include "AbstractSyntaxTree/VariableNode.hpp"
#include "AbstractSyntaxTree/ScopeNode.hpp"

#include "ProgramInfo.hpp"

namespace Srsl{

    class TreeWalker: public SrslGrammarBaseListener{
    public:
        TreeWalker(Ptr<BaseNode>& root, SharedPtr<SymbolTable> symbolTable, ProgramInfo& programInfo);

        void enterShaderTypeSpec(SrslGrammarParser::ShaderTypeSpecContext* ctx) override;

        void exitShaderTypeSpec(SrslGrammarParser::ShaderTypeSpecContext* ctx) override;

        void enterNewVariable(SrslGrammarParser::NewVariableContext* ctx) override;

        void exitNewVariable(SrslGrammarParser::NewVariableContext* ctx) override;

        void enterScope(SrslGrammarParser::ScopeContext* ctx) override;

        void exitScope(SrslGrammarParser::ScopeContext* ctx) override;


    private:
        Ptr<BaseNode>& m_Root;
        BaseNode* m_CurrentNode = nullptr;
        SharedPtr<SymbolTable> m_SymbolTable;
        ProgramInfo& m_ProgramInfo;
    };

}