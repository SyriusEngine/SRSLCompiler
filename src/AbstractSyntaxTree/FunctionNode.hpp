#pragma once

#include "AbstractNode.hpp"

#include "ScopeNode.hpp"
#include "VariableNode.hpp"

namespace Srsl{

    struct FunctionDeclarationDesc{
        bool hasScope;
        std::string name;
        std::string semantic;
        TypeDesc type;
    };

    class FunctionDeclarationNode: public AbstractNode{
    public:
        FunctionDeclarationNode(const FunctionDeclarationDesc& desc, uint64 lineNumber);

        ~FunctionDeclarationNode() override;

        void construct() override;

        void fillSymbolTable(RCP<SymbolTable> table) override;

        void generateCode(UP<Exporter>& exporter, const std::string& indent) const override;

        void createTestCode(TestCodeGenerator& testGen) override;

        [[nodiscard]] ScopeNode* getScope() const;

    private:

        void generateGlsl(UP<Exporter>& exporter, const std::string& indent) const;

        void generateHlsl(UP<Exporter>& exporter, const std::string& indent) const;

//        void exportCpp(CppExporter* cppExporter, const std::string& indent) const;
//
//        void cppWriteConstantBuffers(CppExporter* cppExporter, const std::string& indent) const;
//
//        void cppWriteSamplers(CppExporter* cppExporter, const std::string& indent) const;
//
//        void cppWriteTextures(CppExporter* cppExporter, const std::string& indent) const;

    private:
        const std::string m_SemanticName;
        const bool m_HasScope;

        ScopeNode* m_Scope = nullptr;
        std::vector<AbstractNode*> m_Arguments;
        std::vector<AbstractNode*> m_TestCases;
    };

    class FunctionCallNode: public AbstractNode{
    public:
        FunctionCallNode(const std::string& name, uint64 lineNumber);

        ~FunctionCallNode() override;

        void fillSymbolTable(RCP<SymbolTable> table) override;

        void generateCode(UP<Exporter>& exporter, const std::string& indent) const override;

    private:

        void handleTextureFunction(UP<Exporter>& exporter, const std::string& indent) const;
    };

}
