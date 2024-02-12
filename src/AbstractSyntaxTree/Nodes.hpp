#pragma once

#include "AbstractNode.hpp"

namespace Srsl{

    class ConstantNode: public AbstractNode{
    public:
        ConstantNode(const std::string& value, uint64 lineNumber);

        ~ConstantNode() override;

    };

    class AssignmentNode: public AbstractNode{
    public:
        explicit AssignmentNode(uint64 lineNumber);

        ~AssignmentNode() override;

        void construct() override;

    private:
        AbstractNode* m_Left;
        AbstractNode* m_Right;

    };

    class InitializerListNode: public AbstractNode{
    public:
        InitializerListNode(uint32 initializerCount, uint64 lineNumber);

        ~InitializerListNode() override;

    };

    typedef enum OPERATION_TYPE{
        OPERATION_UNARY,
        OPERATION_BINARY,
    } OperationType;

    class ExpressionNode: public AbstractNode{
    public:
        ExpressionNode(const std::string& operation, OperationType opType, uint64 lineNumber);

        ~ExpressionNode() override;

        void construct() override;

    private:
        OPERATION_TYPE m_OperationType;
        AbstractNode* m_Left;
        AbstractNode* m_Right;
    };

}