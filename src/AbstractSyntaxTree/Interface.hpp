#pragma once

#include "BaseNode.hpp"
#include "../Converters/GLSL/GlslWriter.hpp"
#include "../Converters/HLSL/HlslWriter.hpp"
#include "../Converters/Cpp/CppWriter.hpp"

namespace Srsl{

    enum class InterfaceType{
        Input = 0,
        Output = 1
    };

    class ShaderInterface: public BaseNode{
    public:
        ShaderInterface(InterfaceType type, const std::string& name, uint64 lineNumber);

        ~ShaderInterface() override;

        void fillSymbolTable(RCP<SymbolTable> table) override;

        void validate(ValidationContext& ctx) override;

        void exportCode(LanguageWriter* writer, const std::string& indent) const override;

    private:

        void exportGlsl(GlslWriter* glslWriter, const std::string& indent) const;

        void exportHlsl(HlslWriter* hlslWriter, const std::string& indent) const;

        void exportCpp(CppWriter* cppWriter, const std::string& indent) const;

    private:
        const InterfaceType m_InterfaceType;

    };
}
