#pragma once

#include "AbstractNode.hpp"


namespace Srsl{

    enum class InterfaceType{
        Input = 0,
        Output = 1
    };

    class InterfaceNode: public AbstractNode{
    public:
        InterfaceNode(InterfaceType type, const std::string& name, uint64 lineNumber);

        ~InterfaceNode() override;

        void fillSymbolTable(RCP<SymbolTable> table) override;

        void generateCode(UP<Exporter>& exporter, const std::string& indent) const override;

    private:

        void generateGlsl(GlslExporter* glslWriter, const std::string& indent) const;

        void generateHlsl(HlslExporter* hlslWriter, const std::string& indent) const;

//        void generateCpp(CppWriter* cppWriter, const std::string& indent) const;

    private:
        const InterfaceType m_InterfaceType;

    };
}
