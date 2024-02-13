#pragma once

#include "BaseNode.hpp"
#include "../Converters/Cpp/CppWriter.hpp"

namespace Srsl{

    class SamplerNode: public BaseNode{
    public:
        SamplerNode(const std::string& name, uint32 slot, uint64 lineNumber);

        ~SamplerNode() override;

        void fillSymbolTable(RCP<SymbolTable> symbolTable) override;

        void exportCode(LanguageWriter* writer, const std::string& indent) const override;

    private:

        void exportCpp(CppWriter* writer, const std::string& indent) const;

    private:
        const std::string m_Name;
        const uint32 m_Slot;

    };

    class TextureNode: public BaseNode{
    public:
        TextureNode(const std::string& name, uint32 slot, const std::string& type, uint64 lineNumber);

        ~TextureNode() override;

        void fillSymbolTable(RCP<SymbolTable> symbolTable) override;

        void exportCode(LanguageWriter* writer, const std::string& indent) const override;

    private:

        [[nodiscard]] std::string getGlslType() const;

        void exportCpp(CppWriter* writer, const std::string& indent) const;

    private:
        const std::string m_Name;
        const uint32 m_Slot;
        const VariableBaseType m_Type;
    };

}

