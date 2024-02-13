#include "InterfaceNode.hpp"

namespace Srsl{

    InterfaceNode::InterfaceNode(InterfaceType type, const std::string& name, uint64 lineNumber) :
    AbstractNode(name, AST_NODE_SHADER_INTERFACE, lineNumber),
    m_InterfaceType(type){
    }

    InterfaceNode::~InterfaceNode() {

    }

    void InterfaceNode::fillSymbolTable(RCP<SymbolTable> table) {
        m_SymbolTable = table;
        Symbol symbol;
        symbol.name = m_Value;
        if (m_InterfaceType == InterfaceType::Input){
            symbol.type.isConst = true;
        }
        symbol.symbolType = ST_SHADER_INTERFACE;
        symbol.structTable = createRCP<SymbolTable>(m_Value);
        table->addChild(symbol.structTable);
        table->addSymbol(symbol);
        for (auto& child : m_Children){
            child->fillSymbolTable(symbol.structTable);
        }
    }

    void InterfaceNode::generateCode(UP<Exporter>& exporter, const std::string &indent) const {
        switch (exporter->getLanguageType()){
            case SRSL_TARGET_GLSL:{
                auto glslExporter = dynamic_cast<GlslExporter*>(exporter.get());
                if (!glslExporter){
                    SRSL_THROW_EXCEPTION("Invalid language exporter! (%p)", exporter.get());
                }
                generateGlsl(glslExporter, indent);
                break;
            }
            case SRSL_TARGET_HLSL:{
                auto hlslExporter = dynamic_cast<HlslExporter*>(exporter.get());
                if (!hlslExporter){
                    SRSL_THROW_EXCEPTION("Invalid language exporter! (%p)", exporter.get());
                }
                generateHlsl(hlslExporter, indent);
                break;
            }
//            case SRSL_TARGET_CPP {
//                auto cppExporter = dynamic_cast<CppExporter*>(exporter);
//                if (!cppExporter){
//                    SRSL_THROW_EXCEPTION("Invalid language exporter! (%p)", exporter.get());
//                }
//                generateCpp(cppExporter, indent);
//                break;
//            }
            default:
                SRSL_THROW_EXCEPTION("Unsupported language type! (%d)", exporter->getLanguageType());
        }
    }

    void InterfaceNode::generateGlsl(GlslExporter* glslExporter, const std::string &indent) const {
        std::string interfaceType;
        uint32 location = 0;
        std::vector<std::string> semanticNames = glslExporter->getVariableIntrinsics().getIntrinsicsNames(glslExporter->getShaderType());
        if (m_InterfaceType == InterfaceType::Input){
            glslExporter->setAppendBuffer(PROGRAM_SECTION_INPUT);
            interfaceType = "in";
            location = (glslExporter->getShaderType() == SRSL_VERTEX_SHADER? 0 : glslExporter->getExportDesc().limits.maxVertexAttributes);
        }
        else{
            glslExporter->setAppendBuffer(PROGRAM_SECTION_OUTPUT);
            interfaceType = "out";
            location = (glslExporter->getShaderType() == SRSL_VERTEX_SHADER ? glslExporter->getExportDesc().limits.maxVertexAttributes : 0);
        }
        /* The order in which locations are assigned to the members of an interface block is the same as the order in which they are declared in the block.
         * An unordered_map does not guarantee the order of its elements, so we simply loop over the children which are
         * guaranteed to be in the same order as the members of the interface block and assign locations accordingly.
         */
        auto symbolTable = m_SymbolTable->getSymbol(m_Value);
        auto& childSymbols = symbolTable.structTable->getSymbols();
        uint32 lineNr = m_LineNumber;
        for (const auto& child: m_Children){
            auto symbol = childSymbols[child->getValue()];
            std::string line = "layout(location = " + std::to_string(location) + ") ";
            line += interfaceType + " " + glslExporter->getVariableType(symbol.type);
            line += " " + symbolTable.name;
            line += SRSL_CONCAT_LIT + symbol.name + ";\n";
            glslExporter->addLine(line);
            lineNr++;

            // locations are occupied per 16 bytes
            auto size = symbol.type.getSize();
            auto alignmentOffset = size % 16;
            if (alignmentOffset != 0){
                size += 16 - alignmentOffset;
            }
            location += size / 16;
        }
        glslExporter->setAppendBuffer(PROGRAM_SECTION_DEFAULT);
    }

    void InterfaceNode::generateHlsl(HlslExporter *hlslExporter, const std::string &indent) const {
        if (m_InterfaceType == InterfaceType::Input){
            hlslExporter->setAppendBuffer(PROGRAM_SECTION_INPUT);
            hlslExporter->m_InputSymbolTable = m_SymbolTable->getSymbol(m_Value).structTable;
        }
        else{
            hlslExporter->setAppendBuffer(PROGRAM_SECTION_OUTPUT);
            hlslExporter->m_OutputSymbolTable = m_SymbolTable->getSymbol(m_Value).structTable;
        }
        uint32 lineNr = m_LineNumber;
        hlslExporter->addLine("struct " + m_Value + " {\n");

        auto symbolTable = m_SymbolTable->getSymbol(m_Value);
        auto& childSymbols = symbolTable.structTable->getSymbols();
        for (const auto& child: m_Children){
            auto symbol = childSymbols[child->getValue()];
            std::string line = "\t" + hlslExporter->getVariableType(symbol.type);
            line += " " + symbol.name + " : ";
            if (hlslExporter->getVariableIntrinsics().hasIntrinsic(symbol.semantic)){
                auto intrinsic = hlslExporter->getVariableIntrinsics().getIntrinsic(symbol.semantic);
                line += intrinsic.hlslSemantic;
            }
            else{
                line += symbol.semantic;
            }
            line += ";\n";
            hlslExporter->addLine(line);
            lineNr++;
        }
        hlslExporter->addLine("};\n\n");
        hlslExporter->setAppendBuffer(PROGRAM_SECTION_DEFAULT);
    }

//    void InterfaceNode::generateCpp(CppExporter *cppExporter, const std::string &indent) const {
//        if (m_InterfaceType == InterfaceType::Input){
//            cppExporter->m_ShaderInputTable = m_SymbolTable->getSymbol(m_Value).m_Struct;
//        }
//        else{
//            cppExporter->m_ShaderOutputTable = m_SymbolTable->getSymbol(m_Value).m_Struct;
//        }
//
//    }
}