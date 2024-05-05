#include "FunctionNode.hpp"
#include "Nodes.hpp"
#include "MemberAccessNode.hpp"

namespace Srsl{

    FunctionDeclarationNode::FunctionDeclarationNode(const FunctionDeclarationDesc &desc, uint32 functionID, uint64 lineNumber):
    AbstractNode(desc.name, AST_NODE_FUNCTION_DECLARATION, lineNumber, desc.type),
    m_FunctionID(functionID),
    m_HasScope(desc.hasScope),
    m_SemanticName(desc.semantic){

    }

    FunctionDeclarationNode::~FunctionDeclarationNode() = default;

    void FunctionDeclarationNode::construct() {
        if (m_HasScope){
            SRSL_ASSERT(m_Children.size() > 0, "Invalid number of children for function %s, expected at least 1 got %s", m_Value.c_str(), m_Children.size());
            m_Scope = dynamic_cast<ScopeNode*>(m_Children.back().get());
            if (m_Scope == nullptr){
                SRSL_THROW_EXCEPTION("FunctionDeclarationNode::construct() - ScopeNode not found");
            }
            m_Scope->construct();
        }
        if (!m_Children.empty()){
            for (uint32 i = 0; i < m_Children.size() - 1; i++){
                switch (m_Children[i]->getNodeType()) {
                    case AST_NODE_VARIABLE_DECLARATION: {
                        m_Arguments.push_back(m_Children[i].get());
                        break;
                    }
                    default: {
                        SRSL_THROW_EXCEPTION("Invalid node type for function declaration %s",
                                             m_Children[i]->getNodeType());
                    }
                }
            }
        }
        AbstractNode::construct();
    }

    void FunctionDeclarationNode::fillSymbolTable(RCP<SymbolTable> table) {
        m_SymbolTable = table;
        if (!table->hasSymbol(m_Value)){
            Symbol symbol;
            symbol.name = m_Value;
            symbol.semantic = m_SemanticName;
            symbol.type = m_Type;
            symbol.symbolType = ST_FUNCTION;
            if (m_HasScope){
                symbol.structTable = createRCP<SymbolTable>(m_Value);
                m_SymbolTable->addChild(symbol.structTable);
                for (const auto& child: m_Children){
                    child->fillSymbolTable(symbol.structTable);
                }
            }
            m_SymbolTable->addSymbol(symbol);
        }
        else{
            auto& symbol = table->getSymbol(m_Value);
            if (symbol.symbolType != ST_FUNCTION or symbol.type != m_Type){
                throw RedefinitionError(m_Value, m_SymbolTable->getName(), m_LineNumber);
            }
            // this functions has been forward declared, now we need to fill the symbol table with the actual function
            if (m_HasScope){
                symbol.structTable = createRCP<SymbolTable>(m_Value);
                m_SymbolTable->addChild(symbol.structTable);
                for (const auto& child: m_Children){
                    child->fillSymbolTable(symbol.structTable);
                }
            }

        }
    }

    void FunctionDeclarationNode::generateCode(UP<Exporter>& exporter, const std::string &indent) const {
        switch (exporter->getLanguageType()){
            case SRSL_TARGET_GLSL:  generateGlsl(exporter, indent); break;
            case SRSL_TARGET_HLSL:  generateHlsl(exporter, indent); break;
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
        exporter->addLine("\n");
    }

    void FunctionDeclarationNode::generateGlsl(UP<Exporter>& exporter, const std::string &indent) const {
        exporter->addLine(indent + exporter->getVariableType(m_Type) + " " + m_Value + "(");
        for (auto& arg: m_Arguments){
            arg->generateCode(exporter, "");
            if (arg != m_Arguments.back()){
                exporter->addLine(", ");
            }
        }
        exporter->addLine(")");
        if (m_Scope != nullptr){
            m_Scope->generateCode(exporter, indent);
        }
        else{
            exporter->addLine(";\n");
        }
    }

    void FunctionDeclarationNode::generateHlsl(UP<Exporter>& exporter, const std::string &indent) const {
        // If the name is equal to the entry point, then it is the main function. We have to add the input and output variables to the definition
        auto hlslExporter = dynamic_cast<HlslExporter*>(exporter.get());
        if (hlslExporter == nullptr){
            SRSL_THROW_EXCEPTION("Language exporter (%p) is not for target HLSL", exporter.get());
        }
        if (m_Value == exporter->getExportDesc().entryPoint){
            if (hlslExporter->m_InputSymbolTable == nullptr){
                SRSL_THROW_EXCEPTION("exporter::exportHlsl() - Input symbol table (%p) is not set", hlslExporter->m_InputSymbolTable.get());
            }
            if (hlslExporter->m_OutputSymbolTable == nullptr){
                SRSL_THROW_EXCEPTION("exporter::exportHlsl() - Output symbol table (%p) is not set", hlslExporter->m_OutputSymbolTable.get());
            }
            exporter->addLine(hlslExporter->m_OutputSymbolTable->getName() + " " + m_Value + "(");
            exporter->addLine(hlslExporter->m_InputSymbolTable->getName() + " " + SRSL_CONCAT_LIT + "input" + ") {\n");
            exporter->addLine("\t" + hlslExporter->m_OutputSymbolTable->getName() + " " + SRSL_CONCAT_LIT + "output;\n");
            m_Scope->generateCode(exporter, indent + "\t");
            exporter->addLine("\treturn " + SRSL_CONCAT_LIT + "output;\n");
            exporter->addLine("}\n\n");
        }
        else{
            exporter->addLine(indent + exporter->getVariableType(m_Type) + " " + m_Value + "(");
            for (auto& arg: m_Arguments){
                arg->generateCode(exporter, "");
                if (arg != m_Arguments.back()){
                    exporter->addLine(", ");
                }
            }
            exporter->addLine(")");
            if (m_Scope != nullptr){
                m_Scope->generateCode(exporter, indent);
            }
        }

    }

    ScopeNode *FunctionDeclarationNode::getScope() const {
        return m_Scope;
    }

    void FunctionDeclarationNode::createTestCode(TestCodeGenerator &testGen) {
        if (m_Value != "main" and m_Scope != nullptr){
            createFunctionFlag(testGen);
        }
        AbstractNode::createTestCode(testGen);
    }

    void FunctionDeclarationNode::createFunctionFlag(TestCodeGenerator &testGen) {
        SRSL_PRECONDITION(m_Scope != nullptr, "FunctionDeclarationNode::createFunctionFlag() - Scope is not set");

        // at the beginning of each function, add the following syntax
        // <ShaderType>Results.srslFunctionCoverage[<FunctionID>] = true;

        auto assignment = m_Scope->addChildFront<AssignmentNode>(m_LineNumber);
        // LHS is a member access of the SSBO Scope array
        auto memberAccess = assignment->addChild<MemberAccessNode>(m_LineNumber);
        memberAccess->addChild<VariableNode>(testGen.testSSBOName, m_LineNumber);
        auto scopeCoverageArray = memberAccess->addChild<VariableNode>(SRSL_TEST_DATA_FUNCTION_COVERAGE, m_LineNumber);
        scopeCoverageArray->addChild<ConstantNode>(std::to_string(m_FunctionID), m_LineNumber);

        // RHS is a literal TRUE
        assignment->addChild<ConstantNode>("true", m_LineNumber);

        assignment->construct();
        assignment->fillSymbolTable(m_SymbolTable);
    }

//    void FunctionDeclarationNode::exportCpp(Cppexporter *cppexporter, const std::string &indent) const {
//        if (cppexporter->getCppDescriptor().entryPoint == m_Value){
//            auto fName = "main__" + shaderTypeToString(cppexporter->getShaderType());
//            if (cppexporter->m_ShaderInputTable == nullptr){
//                throw std::runtime_error("Cppexporter::exportCpp() - Shader input table is not set");
//            }
//            if (cppexporter->m_ShaderOutputTable == nullptr){
//                throw std::runtime_error("Cppexporter::exportCpp() - Shader output table is not set");
//            }
//            auto inputTableName = cppexporter->m_ShaderInputTable->getName();
//            auto outputTableName = cppexporter->m_ShaderOutputTable->getName();
//
//            std::string mainFunctionDef = "extern \"C\" __declspec(dllexport) std::unordered_map<std::string, glm::vec4> __attribute__((stdcall)) " + fName + "(\n";
//            if (cppexporter->getShaderType() == Vertex){
//                mainFunctionDef += "std::unordered_map<std::string, char*>& " + inputTableName;
//                mainFunctionDef += ", \nstd::vector<char*>& " + CBUFFER_NAME;
//            }
//            else{
//                mainFunctionDef += "std::unordered_map<std::string, glm::vec4>& " + inputTableName;
//                mainFunctionDef += ", \nstd::vector<char*>& " + CBUFFER_NAME;
//                mainFunctionDef += ", \nstd::vector<char*>& " + TEXTURE_NAME;
//                mainFunctionDef += ", \nstd::vector<char*>& " + SAMPLER_NAME;
//            }
//            mainFunctionDef += ") {\n";
//            mainFunctionDef += "\tstd::unordered_map<std::string, glm::vec4> " + outputTableName + ";\n";
//
//            cppexporter->addLine(mainFunctionDef);
//            cppWriteConstantBuffers(cppexporter, "\t");
//            cppWriteSamplers(cppexporter, "\t");
//            cppWriteTextures(cppexporter, "\t");
//            // generate the rest of the code
//            m_Scope->generateCode(cppexporter, indent + "\t");
//
//            // set the output data
//            cppexporter->addLine("\treturn " + outputTableName + ";\n");
//            cppexporter->addLine("}\n\n");
//        }
//        else{
//            cppexporter->addLine(indent + cppexporter->getVariableType(m_BaseType, m_Rows, m_Collumns, m_ExtType) + " " + m_Value + "(");
//            for (auto& arg: m_Arguments){
//                arg->generateCode(cppexporter, "");
//                if (arg != m_Arguments.back()){
//                    cppexporter->addLine(", ");
//                }
//            }
//            cppexporter->addLine(")");
//            if (m_Scope != nullptr){
//                m_Scope->generateCode(cppexporter, indent);
//                cppexporter->addLine("\n\n");
//            }
//            else{
//                cppexporter->addLine(";\n\n");
//            }
//        }
//
//    }
//
//    void FunctionDeclarationNode::cppWriteConstantBuffers(Cppexporter *cppexporter, const std::string &indent) const {
//        for (const auto& cb: cppexporter->m_ConstantBuffers){
//            std::string line = indent + cb.name + " = reinterpret_cast<" + TYPE_SPEC + cb.name + "*>(";
//            line += CBUFFER_NAME + "[" + std::to_string(cb.slot) + "]);";
//            line += "\n";
//
//            cppexporter->addLine(line);
//        }
//    }
//
//    void FunctionDeclarationNode::cppWriteSamplers(Cppexporter *cppexporter, const std::string &indent) const {
//        for (const auto& sampler: cppexporter->m_Samplers){
//            std::string line = indent + sampler.name + " = reinterpret_cast<SamplerState*>(";
//            line += SAMPLER_NAME + "[" + std::to_string(sampler.slot) + "]);";
//            line += "\n";
//
//            cppexporter->addLine(line);
//        }
//    }
//
//    void FunctionDeclarationNode::cppWriteTextures(Cppexporter *cppexporter, const std::string &indent) const {
//        for (const auto& texture: cppexporter->m_Textures){
//            std::string line = indent + texture.name + " = reinterpret_cast<Texture2D*>(";
//            line += TEXTURE_NAME + "[" + std::to_string(texture.slot) + "]);";
//            line += "\n";
//
//            cppexporter->addLine(line);
//        }
//    }


    FunctionCallNode::FunctionCallNode(const std::string &name, uint64 lineNumber):
    AbstractNode(name, AST_NODE_FUNCTION_CALL, lineNumber){

    }

    FunctionCallNode::~FunctionCallNode() = default;

    void FunctionCallNode::fillSymbolTable(RCP<SymbolTable> table) {
        m_SymbolTable = table;
        if (m_Value == "main"){
            SRSL_THROW_EXCEPTION("The main function cannot be called directly but is called at line %d. It is called by the system. ", m_LineNumber);
        }
        if (!table->hasSymbol(m_Value)){
            throw UndefinedSymbolError(m_Value, m_SymbolTable->getName(), m_LineNumber);
        }
        auto symbol = table->getSymbol(m_Value);
        m_Type = symbol.type;
        for (const auto& child: m_Children){
            child->fillSymbolTable(table);
        }
    }

    void FunctionCallNode::generateCode(UP<Exporter>& exporter, const std::string &indent) const {
        if (m_Value == "sampleTexture"){ // SPECIAL CASE
            return handleTextureFunction(exporter, indent);
        }
        if (exporter->getFunctionIntrinsics().hasIntrinsic(m_Value)){
            exporter->addLine(indent + exporter->getFunctionIntrinsics().convert(m_Value, exporter->getLanguageType()) + "(");
        }
        else{
            exporter->addLine(indent + m_Value + "(");
        }
        for (const auto& arg: m_Children){
            arg->generateCode(exporter, "");
            if (arg != m_Children.back()){
                exporter->addLine(", ");
            }
        }
        exporter->addLine(")");
    }

    void FunctionCallNode::handleTextureFunction(UP<Exporter>& exporter, const std::string &indent) const {
        if (m_Children.size() != 3){
            SRSL_THROW_EXCEPTION("sampleTexture function must have 3 arguments, has %d children", m_Children.size());
        }
        auto& texture = m_Children[0];
        auto& sampler = m_Children[1];
        auto& uv = m_Children[2];

        switch (exporter->getLanguageType()) {
            case SRSL_TARGET_GLSL: {
                exporter->addLine(indent + "texture(");
                texture->generateCode(exporter, "");
                exporter->addLine(", ");
                uv->generateCode(exporter, "");
                exporter->addLine(")");
                break;
            }
            case SRSL_TARGET_HLSL: {
                exporter->addLine(indent);
                texture->generateCode(exporter, "");
                exporter->addLine(".Sample(");
                sampler->generateCode(exporter, "");
                exporter->addLine(", ");
                uv->generateCode(exporter, "");
                exporter->addLine(")");
                break;
            }
            case SRSL_TARGET_CPP: {
                exporter->addLine(indent + "sampleTexture(");
                texture->generateCode(exporter, "");
                exporter->addLine(", ");
                sampler->generateCode(exporter, "");
                exporter->addLine(", ");
                uv->generateCode(exporter, "");
                exporter->addLine(")");
                break;
            }
            default:
                SRSL_THROW_EXCEPTION("Unknown language type %d", exporter->getLanguageType());
        }


    }

}

