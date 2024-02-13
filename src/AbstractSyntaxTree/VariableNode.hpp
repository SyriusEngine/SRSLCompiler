#pragma once

#include "AbstractNode.hpp"

namespace Srsl{

    class NewVariableNode : public AbstractNode{
    public:
        NewVariableNode(const std::string& name, const std::string& semanticName, const TypeDesc& typeDesc, uint64 lineNumber);

        ~NewVariableNode() override;

        void fillSymbolTable(RCP<SymbolTable> symbolTable) override;

        void generateCode(UP<Exporter>& exporter, const std::string& indent) const override;

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

        void generateCode(UP<Exporter>& exporter, const std::string& indent) const override;

    };

    class TypeConstructorNode: public AbstractNode{
    public:
        TypeConstructorNode(const TypeDesc& typeDesc, uint64 lineNumber);

        ~TypeConstructorNode() override;

        void generateCode(UP<Exporter>& exporter, const std::string& indent) const override;

    private:
        const TypeDesc m_Type;
    };



}