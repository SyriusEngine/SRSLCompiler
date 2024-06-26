#pragma once

#include "../Utils.hpp"
#include "../Converter/VariableTypes.hpp"
#include "../SymbolTable/SymbolTable.hpp"
#include "../SymbolTable/Validator.hpp"
#include "../SymbolTable/TestCodeGenerator.hpp"

#include "NodeTypes.hpp"

#include "../Exporters/Exporter.hpp"
#include "../Exporters/GlslExporter.hpp"
#include "../Exporters/HlslExporter.hpp"

namespace Srsl{

    class TestCaseNode;
    class FunctionDeclarationNode;

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

        AbstractNode* addExistingChild(UP<AbstractNode>&& child);

        template<typename T, typename... Args>
        AbstractNode* addChildFront(Args&&... args){
            m_Children.insert(m_Children.begin(), createUP<T>(std::forward<Args>(args)...));
            auto retVal = m_Children.front().get();
            retVal->m_Parent = this;
            return retVal;
        }

        [[nodiscard]] AbstractNode* getParent() const;

        [[nodiscard]] AST_NODE_TYPE getNodeType() const;

        [[nodiscard]] uint64 getLineNumber() const;

        [[nodiscard]] const std::string& getValue() const;

        /**
         * @brief Returns the type of the node. This is always the base type meaning that a variable node will return
         *       the type of the variable and not the type of the variable with all its array sizes.
         * @return the type of the node.
         */
        [[nodiscard]] const TypeDesc& getType() const;

        [[nodiscard]] RCP<SymbolTable> getSymbolTable() const;

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
         * @brief validates certain properties of the AST, a Validatior object is passed recursively.
         * @param ctx the validator object.
         */
        virtual void validate(Validator& ctx);

        /**
         * @brief Used to optimize the AST before the actual code is generated. Can change (replace/add/remove) child nodes.
         */
        virtual void optimize();

        /**
         * @brief This function will generate the code for the node and all its children.
         * @param exporter the exporter to use.
         */
        virtual void generateCode(UP<Exporter>& exporter, const std::string& indent) const = 0;

        /**
         * @brief This function returns a TypeDesc object that represents the type of the node after all children have
         *        been evaluated. For example, if the node is a variable node, the type of the variable will be returned.
         *        If the node is an expression node, the type of the expression will be returned. If the variable has
         *        array accesses, the type after the array access will be returned.
         * @return the TypeDesc object.
         */
        virtual TypeDesc getEvaluatedType() const;

        /**
         * @brief This function will generate test code. It will convert Test Case Nodes to actual code
         *        and add additional driver code.
         * @param testGen object that stores some information about the test code.
         */
        virtual void createTestCode(TestCodeGenerator& testGen);

        FunctionDeclarationNode* getMainFunction();


    protected:

        AbstractNode(const std::string& value, AST_NODE_TYPE type, uint64 lineNumber);

        AbstractNode(const std::string& value, AST_NODE_TYPE type, uint64 lineNumber, const TypeDesc& typeDesc);

    protected:

        std::vector<UP<AbstractNode>> m_Children;
        AbstractNode* m_Parent;
        std::string m_Value;
        RCP<SymbolTable> m_SymbolTable;
        TypeDesc m_Type;
        const uint64 m_LineNumber;

    private:
        const AST_NODE_TYPE m_NodeType;

    };

}