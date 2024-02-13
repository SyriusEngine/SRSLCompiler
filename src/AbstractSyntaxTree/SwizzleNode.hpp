#pragma once

#include "AbstractNode.hpp"

namespace Srsl{

    class SwizzleNode: public AbstractNode{
    public:
        SwizzleNode(const std::string& swizzle, uint64 lineNumber);

        ~SwizzleNode() override;

        void generateCode(UP<Exporter>& exporter, const std::string& indent) const override;
    };
}