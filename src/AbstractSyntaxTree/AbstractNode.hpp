#pragma once

#include "../Utils.hpp"
#include "../Converter/VariableTypes.hpp"

#include "NodeTypes.hpp"

namespace Srsl{

    class AbstractNode{
    public:
        AbstractNode() = delete;

        virtual ~AbstractNode() = default;

        template<typename T, typename... Args>
        UP<AbstractNode>& addChild(Args&&... args){
            auto& retVal = m_Children.emplace_back(createUP<T>(std::forward<Args>(args)...));
            retVal->m_Parent = this;
            return retVal;
        }

        AbstractNode* getParent() const;

        [[nodiscard]] AST_NODE_TYPE getType() const;

        [[nodiscard]] uint64 getLineNumber() const;

    protected:

        AbstractNode(AST_NODE_TYPE type, uint64 lineNumber);

    protected:

        std::vector<UP<AbstractNode>> m_Children;
        AbstractNode* m_Parent;

    private:
        const AST_NODE_TYPE m_Type;
        const uint64 m_LineNumber;

    };

}