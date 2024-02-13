#pragma once

#include "AbstractNode.hpp"
#include "Nodes.hpp"

namespace Srsl{

    class FlowControlNode: public AbstractNode {
    public:
        FlowControlNode(const std::string &value, uint64 lineNumber);

        ~FlowControlNode() override;

        void generateCode(UP<Exporter>& exporter, const std::string& indent) const override;

    };

    class WhileNode : public AbstractNode{
    public:
        explicit WhileNode(uint64 lineNumber);

        ~WhileNode() override;

        void construct() override;

        void generateCode(UP<Exporter>& exporter, const std::string& indent) const override;

    private:
        AbstractNode* m_Scope;
        AbstractNode* m_Condition;

    };

    class ForNode : public AbstractNode{
    public:
        explicit ForNode(uint64 lineNumber);

        ~ForNode() override;

        void construct() override;

        void generateCode(UP<Exporter>& exporter, const std::string& indent) const override;

    private:
        AbstractNode* m_LoopVariable;
        ExpressionNode* m_LoopCondition;
        ExpressionNode* m_Increment;
        AbstractNode* m_Scope;
    };

    class IfNode : public AbstractNode{
    public:
        explicit IfNode(uint64 lineNumber);

        ~IfNode() override;

        void construct() override;

        void generateCode(UP<Exporter>& exporter, const std::string& indent) const override;

    private:
        AbstractNode* m_Scope;
        AbstractNode* m_Condition;
        AbstractNode* m_optional;
    };

    class ElseNode : public AbstractNode{
    public:
        explicit ElseNode(uint64 lineNumber);

        ~ElseNode() override;

        void construct() override;

        void generateCode(UP<Exporter>& exporter, const std::string& indent) const override;

    private:
        AbstractNode* m_Scope;
    };

    class ElseIfNode : public AbstractNode{
    public:
        explicit ElseIfNode(uint64 lineNumber);

        ~ElseIfNode() override;

        void construct() override;

        void generateCode(UP<Exporter>& exporter, const std::string& indent) const override;

    private:
        AbstractNode* m_Scope;
        AbstractNode* m_Condition;
    };

    class ReturnNode : public AbstractNode{
    public:
        explicit ReturnNode(uint64 lineNumber);

        ~ReturnNode() override;

        void generateCode(UP<Exporter>& exporter, const std::string& indent) const override;
    };

}
