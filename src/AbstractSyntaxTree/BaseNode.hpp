#pragma once

#include "Internal/NodeTypeGenerator.hpp"
#include "../SymbolTable/SymbolTable.hpp"

namespace Srsl{

    class BaseNode{
    public:
        BaseNode() = delete;

        virtual ~BaseNode();

        [[nodiscard]] NodeID getID() const;

        [[nodiscard]] NodeType getNodeType() const;

        [[nodiscard]] AST_NODE_CLASS getClass() const;

        [[nodiscard]] u64 getLineNr() const;

        [[nodiscard]] u64 getCharPos() const;

        [[nodiscard]] const std::string& getValue() const;

        [[nodiscard]] const SymbolType& getType() const;

        [[nodiscard]] const BaseNode* getParent() const;

        void toDot(std::ofstream& stream) const;

        template<typename T, typename... Args>
        View<T> addChild(Args&&... args){
            auto& retVal = m_Children.emplace_back(createPtr<T>(std::forward<Args>(args)...));
            retVal->m_Parent = this;
            return createView<T>(retVal);
        }

        virtual void construct() = 0;

    protected:
        BaseNode(const std::string& value, View<SymbolTable> symbolTable, SymbolType type, NodeType nodeType, AST_NODE_CLASS nodeClass, u64 lineNr, u64 charPos);

    protected:
        std::vector<Ptr<BaseNode>> m_Children;
        BaseNode* m_Parent;
        View<SymbolTable> m_SymbolTable;
        SymbolType m_Type;
        std::string m_Value;


    private:
        NodeID m_ID;
        NodeType m_NodeType;
        AST_NODE_CLASS m_Class;

        const u64 m_LineNr;
        const u64 m_CharPos;

    };

}