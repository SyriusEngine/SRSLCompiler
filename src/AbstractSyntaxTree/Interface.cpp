#include "Interface.hpp"
#include "../Converters/Cpp/CppWriter.hpp"

namespace Srsl{

    ShaderInterface::ShaderInterface(InterfaceType type, const std::string& name, uint64 lineNumber) :
    BaseNode(NodeType::Interface, lineNumber),
    m_InterfaceType(type){
        m_Value = name;
    }

    ShaderInterface::~ShaderInterface() {

    }

    void ShaderInterface::fillSymbolTable(RCP<SymbolTable> table) {
        m_SymbolTable = table;
        Symbol symbol;
        symbol.m_Name = m_Value;
        symbol.m_Slot = -1;
        if (m_InterfaceType == InterfaceType::Input){
            symbol.m_IsConst = true;
        }
        symbol.m_SymbolType = SymbolType::ShaderInterface;
        symbol.m_Struct = createRCP<SymbolTable>(m_Value);
        table->addChild(symbol.m_Struct);
        table->addSymbol(symbol);
        for (auto& child : m_Children){
            child->fillSymbolTable(symbol.m_Struct);
        }
    }

    void ShaderInterface::validate(ValidationContext &ctx) {
        if (m_InterfaceType == InterfaceType::Input){
            if (ctx.inputInterface != nullptr){
                throw std::runtime_error("Multiple shader inputs defined!");
            }
            ctx.inputInterface = m_SymbolTable->getSymbol(m_Value).m_Struct;
        }
        else if(m_InterfaceType == InterfaceType::Output){
            if (ctx.outputInterface != nullptr){
                throw std::runtime_error("Multiple shader outputs defined!");
            }
            ctx.outputInterface = m_SymbolTable->getSymbol(m_Value).m_Struct;
        }
        else{
            throw std::runtime_error("Unknown Shader interface!");
        }
        BaseNode::validate(ctx);
    }

    void ShaderInterface::exportCode(LanguageWriter *writer, const std::string &indent) const {
        switch (writer->getLanguageType()){
            case LanguageType::GLSL:{
                auto glslWriter = dynamic_cast<GlslWriter*>(writer);
                if (!glslWriter){
                    throw std::runtime_error("Invalid language writer!");
                }
                exportGlsl(glslWriter, indent);
                break;
            }
            case LanguageType::HLSL:{
                auto hlslWriter = dynamic_cast<HlslWriter*>(writer);
                if (!hlslWriter){
                    throw std::runtime_error("Invalid language writer!");
                }
                exportHlsl(hlslWriter, indent);
                break;
            }
            case LanguageType::CPP: {
                auto cppWriter = dynamic_cast<CppWriter*>(writer);
                if (!cppWriter){
                    throw std::runtime_error("Invalid language writer!");
                }
                exportCpp(cppWriter, indent);
                break;
            }
            default:
                throw std::runtime_error("Unsupported language!");
        }
    }

    void ShaderInterface::exportGlsl(GlslWriter *glslWriter, const std::string &indent) const {
        std::string interfaceType;
        uint32 location = 0;
        std::vector<std::string> semanticNames = glslWriter->getVariableIntrinsics().getIntrinsicsNames(glslWriter->getShaderType());
        if (m_InterfaceType == InterfaceType::Input){
            glslWriter->setAppendBuffer(AppendBufferType::AppendShaderInput);
            interfaceType = "in";
            location = (glslWriter->getShaderType() == Vertex? 0 : glslWriter->getGlslDescriptor().maxVertexAttributes);
        }
        else{
            glslWriter->setAppendBuffer(AppendBufferType::AppendShaderOutput);
            interfaceType = "out";
            location = (glslWriter->getShaderType() == Vertex ? glslWriter->getGlslDescriptor().maxVertexAttributes : 0);
        }
        /* The order in which locations are assigned to the members of an interface block is the same as the order in which they are declared in the block.
         * An unordered_map does not guarantee the order of its elements, so we simply loop over the children which are
         * guaranteed to be in the same order as the members of the interface block and assign locations accordingly.
         */
        auto symbolTable = m_SymbolTable->getSymbol(m_Value);
        auto& childSymbols = symbolTable.m_Struct->getSymbols();
        uint32 lineNr = m_LineNumber;
        for (const auto& child: m_Children){
            auto symbol = childSymbols[child->getValue()];
            std::string line = "layout(location = " + std::to_string(location) + ") ";
            line += interfaceType + " " + glslWriter->getVariableType(symbol.m_Type, symbol.m_Rows, symbol.m_Columns, symbol.m_ExtType);
            line += " " + symbolTable.m_Name;
            line += CONCAT + symbol.m_Name + ";\n";
            glslWriter->addLine(line, lineNr);
            lineNr++;

            // locations are occupied per 16 bytes
            auto size = symbol.getSize();
            auto alignmentOffset = size % 16;
            if (alignmentOffset != 0){
                size += 16 - alignmentOffset;
            }
            location += size / 16;
        }
        glslWriter->setAppendBuffer(AppendBufferType::AppendProgram);
    }

    void ShaderInterface::exportHlsl(HlslWriter *hlslWriter, const std::string &indent) const {
        if (m_InterfaceType == InterfaceType::Input){
            hlslWriter->setAppendBuffer(AppendBufferType::AppendShaderInput);
            hlslWriter->m_ShaderInputTable = m_SymbolTable->getSymbol(m_Value).m_Struct;
        }
        else{
            hlslWriter->setAppendBuffer(AppendBufferType::AppendShaderOutput);
            hlslWriter->m_ShaderOutputTable = m_SymbolTable->getSymbol(m_Value).m_Struct;
        }
        uint32 lineNr = m_LineNumber;
        hlslWriter->addLine("struct " + m_Value + " {\n", lineNr);

        auto symbolTable = m_SymbolTable->getSymbol(m_Value);
        auto& childSymbols = symbolTable.m_Struct->getSymbols();
        for (const auto& child: m_Children){
            auto symbol = childSymbols[child->getValue()];
            std::string line = "\t" + hlslWriter->getVariableType(symbol.m_Type, symbol.m_Rows, symbol.m_Columns, symbol.m_ExtType);
            line += " " + symbol.m_Name + " : ";
            if (hlslWriter->getVariableIntrinsics().hasIntrinsic(symbol.m_Semantic)){
                auto intrinsic = hlslWriter->getVariableIntrinsics().getIntrinsic(symbol.m_Semantic);
                line += intrinsic.hlslSemantic;
            }
            else{
                line += symbol.m_Semantic;
            }
            line += ";\n";
            hlslWriter->addLine(line, lineNr);
            lineNr++;
        }
        hlslWriter->addLine("};\n\n", lineNr);
        hlslWriter->setAppendBuffer(AppendBufferType::AppendProgram);
    }

    void ShaderInterface::exportCpp(CppWriter *cppWriter, const std::string &indent) const {
        if (m_InterfaceType == InterfaceType::Input){
            cppWriter->m_ShaderInputTable = m_SymbolTable->getSymbol(m_Value).m_Struct;
        }
        else{
            cppWriter->m_ShaderOutputTable = m_SymbolTable->getSymbol(m_Value).m_Struct;
        }

    }
}