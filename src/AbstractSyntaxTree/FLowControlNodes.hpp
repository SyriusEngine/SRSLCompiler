#pragma once

#include "BaseNode.hpp"
#include "ExpressionNode.hpp"

namespace Srsl{

    class FlowControlNode: public BaseNode {
    public:
        FlowControlNode(const std::string &value, uint64 lineNumber);

        ~FlowControlNode() override;

        void exportCode(LanguageWriter* writer, const std::string& indent) const override;

    };

    class WhileNode : public BaseNode{
    public:
        explicit WhileNode(uint64 lineNumber);

        ~WhileNode() override;

        void construct() override;

        void exportCode(LanguageWriter* writer, const std::string& indent) const override;

    private:
        BaseNode* m_Scope;
        BaseNode* m_Condition;

    };

    class ForNode : public BaseNode{
    public:
        explicit ForNode(uint64 lineNumber);

        ~ForNode() override;

        void construct() override;

        void exportCode(LanguageWriter* writer, const std::string& indent) const override;

    private:
        BaseNode* m_LoopVariable;
        ExpressionNode* m_LoopCondition;
        ExpressionNode* m_Increment;
        BaseNode* m_Scope;
    };

    class IfNode : public BaseNode{
    public:
        explicit IfNode(uint64 lineNumber);

        ~IfNode() override;

        void construct() override;

        void exportCode(LanguageWriter* writer, const std::string& indent) const override;

    private:
        BaseNode* m_Scope;
        BaseNode* m_Condition;
        BaseNode* m_optional;
    };

    class ElseNode : public BaseNode{
    public:
        explicit ElseNode(uint64 lineNumber);

        ~ElseNode() override;

        void construct() override;

        void exportCode(LanguageWriter* writer, const std::string& indent) const override;

    private:
        BaseNode* m_Scope;
    };

    class ElseIfNode : public BaseNode{
    public:
        explicit ElseIfNode(uint64 lineNumber);

        ~ElseIfNode() override;

        void construct() override;

        void exportCode(LanguageWriter* writer, const std::string& indent) const override;

    private:
        BaseNode* m_Scope;
        BaseNode* m_Condition;
    };

    class ReturnNode : public BaseNode{
    public:
        explicit ReturnNode(uint64 lineNumber);

        ~ReturnNode() override;

        void exportCode(LanguageWriter* writer, const std::string& indent) const override;
    };

}
