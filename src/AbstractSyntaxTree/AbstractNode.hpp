#pragma once

#include "../Utils.hpp"
#include "../Converter/VariableTypes.hpp"
#include "../SymbolTable/SymbolTable.hpp"

#include "NodeTypes.hpp"

namespace Srsl{

    class AbstractNode{
    public:
        AbstractNode() = delete;

        virtual ~AbstractNode() = default;

        template<typename T, typename... Args>
        AbstractNode* addChild(Args&&... args){
            auto& retVal = m_Children.emplace_back(createUP<T>(std::forward<Args>(args)...));
            retVal->m_Parent = this;
            return retVal.get();
        }

        [[nodiscard]] AbstractNode* getParent() const;

        [[nodiscard]] AST_NODE_TYPE getType() const;

        [[nodiscard]] uint64 getLineNumber() const;

        [[nodiscard]] const std::string& getValue() const;

        /**
         * @brief This function will generate a dot file for the AST. The dot file can be converted to an image using
         *        the dot command line tool.
         * @param stream the stream to write the dot file to.
         */
        void toDot(std::ofstream& stream) const;

        /**
         * @brief This function will fill in some extra information about the node after all child nodes have been added.
         */
        virtual void construct();

        /**
         * @brief Recursively fills in the symbol table and throws exceptions if a symbol is redefined or not defined.
         * @param table
         */
        virtual void fillSymbolTable(RCP<SymbolTable> table);

        /**
         * @brief Used to optimize the AST before the actual code is generated. Can change (replace/add/remove) child nodes.
         */
        virtual void optimize();

    protected:

        AbstractNode(const std::string& value, AST_NODE_TYPE type, uint64 lineNumber);

    protected:

        std::vector<UP<AbstractNode>> m_Children;
        AbstractNode* m_Parent;
        std::string m_Value;
        RCP<SymbolTable> m_SymbolTable;
        const uint64 m_LineNumber;

    private:
        const AST_NODE_TYPE m_Type;

    };

}