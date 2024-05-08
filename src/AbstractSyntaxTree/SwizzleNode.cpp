#include "SwizzleNode.hpp"

namespace Srsl{

    SwizzleNode::SwizzleNode(const std::string& swizzle, uint64 lineNumber):
    AbstractNode(swizzle, AST_NODE_CLASS_TYPED, AST_NODE_VECTOR_SWIZZLE, lineNumber){

    }

    SwizzleNode::~SwizzleNode() {

    }

    void SwizzleNode::generateCode(UP<Exporter> &exporter, const std::string &indent) const {
        exporter->addLine(m_Value);
    }
}
