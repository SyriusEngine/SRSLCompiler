#pragma once

#include "AbstractNode.hpp"

namespace Srsl{

    class NewVariableNode : public AbstractNode{
    public:
        NewVariableNode(const std::string& name, const std::string& semanticName, const TypeDesc& typeDesc, uint64 lineNumber);

        ~NewVariableNode() override;

        void fillSymbolTable(RCP<SymbolTable> symbolTable) override;

    private:
        const std::string m_SemanticName;
        const TypeDesc m_Type;

    };



}