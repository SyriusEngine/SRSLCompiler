#pragma once

#include "AbstractNode.hpp"

namespace Srsl{

    typedef enum OPERATION_TYPE{
        OPERATION_UNARY,
        OPERATION_BINARY,
    } OperationType;

    class ExpressionNode: public AbstractNode{
    public:
        ExpressionNode(const std::string& operation, OperationType opType, uint64 lineNumber);

        ~ExpressionNode() override;

        void construct() override;

        void fillSymbolTable(RCP<SymbolTable> symbolTable) override;

        void generateCode(UP<Exporter>& exporter, const std::string& indent) const override;

    private:
        OPERATION_TYPE m_OperationType;
        AbstractNode* m_Left;
        AbstractNode* m_Right;
    };

}