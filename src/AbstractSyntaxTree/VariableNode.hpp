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

    class VariableNode: public AbstractNode{
    public:
        VariableNode() = delete;

        VariableNode(const std::string& name, uint64 lineNumber);

        ~VariableNode() override;

        void fillSymbolTable(RCP<SymbolTable> symbolTable) override;

    };

    class TypeConstructorNode: public AbstractNode{
    public:
        TypeConstructorNode(const TypeDesc& typeDesc, uint64 lineNumber);

        ~TypeConstructorNode() override;

    private:
        const TypeDesc m_Type;
    };



}