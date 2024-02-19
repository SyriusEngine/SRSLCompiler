#pragma once

#include "AbstractNode.hpp"

namespace Srsl{

    class SamplerNode: public AbstractNode{
    public:
        SamplerNode(const std::string& name, uint32 slot, uint64 lineNumber);

        ~SamplerNode() override;

        void fillSymbolTable(RCP<SymbolTable> symbolTable) override;

        void generateCode(UP<Exporter>& exporter, const std::string& indent) const override;

    private:

//        void exportCpp(CppWriter* writer, const std::string& indent) const;

    private:
        const uint32 m_Slot;

    };

    class TextureNode: public AbstractNode{
    public:
        TextureNode(const std::string& name, uint32 slot, const TypeDesc& type, uint64 lineNumber);

        ~TextureNode() override;

        void fillSymbolTable(RCP<SymbolTable> symbolTable) override;

        void generateCode(UP<Exporter>& exporter, const std::string& indent) const override;

    private:

        [[nodiscard]] std::string getGlslType() const;

//        void exportCpp(CppWriter* writer, const std::string& indent) const;

    private:
        const uint32 m_Slot;
    };

}

