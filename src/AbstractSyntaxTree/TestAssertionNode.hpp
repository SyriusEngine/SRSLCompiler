#pragma once

#include "AbstractNode.hpp"

namespace Srsl{

    class TestAssertionNode: public AbstractNode{
    public:
        TestAssertionNode(const std::string& op, uint64 lineNumber);

        ~TestAssertionNode() override;

        void construct() override;

        void generateCode(UP<Exporter>& exporter, const std::string& indent) const override;

    private:

        std::string getTargetOperator() const;

    private:
        const std::string m_Operator;
        AbstractNode* m_Left;
        AbstractNode* m_Right;
    };

}