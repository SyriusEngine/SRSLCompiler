#include "MemberAccessNode.hpp"

namespace Srsl{

    MemberAccessNode::MemberAccessNode(uint64 lineNumber):
    AbstractNode(".", AST_NODE_MEMBER_ACCESS, lineNumber),
    m_Left(nullptr),
    m_Right(nullptr){
    }

    MemberAccessNode::~MemberAccessNode() {

    }

    void MemberAccessNode::construct() {
        SRSL_PRECONDITION(m_Children.size() == 2, "Invalid number of children, expected 2 got %s", m_Children.size());

        m_Left = m_Children[0].get();
        m_Right = m_Children[1].get();
        AbstractNode::construct();
    }

    void MemberAccessNode::fillSymbolTable(RCP<SymbolTable> symbolTable) {
        SRSL_PRECONDITION(m_Left != nullptr, "Left element is null");
        SRSL_PRECONDITION(m_Right != nullptr, "Right element is null");

        m_SymbolTable = symbolTable;
        m_Left->fillSymbolTable(symbolTable);

        // right element is defined in the symbol table of the left element
        auto leftName = m_Left->getValue();
        auto leftSymbol = symbolTable->getSymbol(leftName);
        m_Right->fillSymbolTable(leftSymbol.structTable);

        // the type of this expression is the type of the right element
        m_Type = m_Right->getType();
    }

    void MemberAccessNode::generateCode(UP<Exporter> &exporter, const std::string &indent) const {
        auto leftSymbol = m_SymbolTable->getSymbol(m_Left->getValue());
        switch (leftSymbol.symbolType){
            case ST_SHADER_INTERFACE: {
                handleShaderInterface(exporter, indent);
                return;
            }
            case ST_CONSTANT_BUFFER: {
                if (exporter->getLanguageType() == SRSL_TARGET_CPP){
                    exporter->addLine(m_Left->getValue() + "->" + m_Left->getValue() + SRSL_CONCAT_LIT + m_Right->getValue());
                }
                else{
                    exporter->addLine(m_Left->getValue() + SRSL_CONCAT_LIT + m_Right->getValue());
                }
                return;
            }
            default: {
                m_Left->generateCode(exporter, indent);
                exporter->addLine(".");
                m_Right->generateCode(exporter, indent);
                return;
            }
        }
    }

    void MemberAccessNode::handleShaderInterface(UP<Exporter>& exporter, const std::string &indent) const {
        auto leftSymbol = m_SymbolTable->getSymbol(m_Left->getValue());
        auto rightSymbol = getRightSymbol(leftSymbol);

        switch (exporter->getLanguageType()){
            case SRSL_TARGET_GLSL: {
                // check if it has a special semantic name such as SRV_POSITION, in this case, the interface access must
                // be replaced with the correct glsl variable such as gl_Position
                if (exporter->getVariableIntrinsics().hasIntrinsic(rightSymbol.semantic)){
                    auto varIntrinsic = exporter->getVariableIntrinsics().getIntrinsic(rightSymbol.semantic);
                    if (!varIntrinsic.glslVariable.empty()){
                        exporter->addLine(varIntrinsic.glslVariable);
                        return;
                    }
                }
                m_Left->generateCode(exporter, "");
                exporter->addLine(SRSL_CONCAT_LIT);
                m_Right->generateCode(exporter, ""); // no indent, just concatenate
                return;
            }
            case SRSL_TARGET_HLSL: {
                auto hlslexporter = dynamic_cast<HlslExporter*>(exporter.get());
                if (leftSymbol.name == hlslexporter->m_InputSymbolTable->getName()){ // luckily the symbol table has the same name as the type
                    exporter->addLine(SRSL_CONCAT_LIT + "input." + rightSymbol.name);
                }
                else if (leftSymbol.name == hlslexporter->m_OutputSymbolTable->getName()){
                    exporter->addLine(SRSL_CONCAT_LIT + "output." + rightSymbol.name);
                }
                else{
                    SRSL_THROW_EXCEPTION("MemberAccessNode::handleShaderInterface(): Invalid left symbol name (%s)!", leftSymbol.name.c_str());
                }
                return;
            }
            case SRSL_TARGET_CPP: {
                // if the left side is an interface member and the shadertype is a vertex, use the -> operator instead of
                // the [] operator
//                auto cppexporter = dynamic_cast<Cppexporter*>(exporter);
//                // in case of the vertex shader, if the left side is the input table, the right side is a member
//                // of the input table, so stored in an unordered map. But this unordered map contains the data in a char array
//                // so we need to cast it to the correct glm type
//                if (exporter->getShaderType() == Vertex and leftSymbol.m_Name == cppexporter->m_ShaderInputTable->getName()){
//                    auto typeStr = cppexporter->getVariableType(rightSymbol.m_Type, rightSymbol.m_Rows, rightSymbol.m_Columns, rightSymbol.m_ExtType);
//                    exporter->addLine("*reinterpret_cast<" + typeStr + "*>(" + leftSymbol.m_Name +"[\"" + rightSymbol.m_Semantic + "\"])", m_LineNumber);
//                }
//                else{
//                    m_Left->generateCode(exporter, "");
//                    exporter->addLine("[\"", m_LineNumber);
//                    m_Right->generateCode(exporter, "");
//                    exporter->addLine("\"]", m_LineNumber);
//                }
//                return;

            }
            default: {
                SRSL_THROW_EXCEPTION("Unsupported language type! (%d)", exporter->getLanguageType());
            }
        }

    }

    Symbol MemberAccessNode::getRightSymbol(const Symbol &leftSymbol) const {
        /*
         * There are 2 possible nodes for the RHS, a variable node or another member access node (recursive)
         */
        if (m_Right->getNodeType() == AST_NODE_MEMBER_ACCESS){
            auto rightMemberAccess = dynamic_cast<MemberAccessNode*>(m_Right);
            if (rightMemberAccess){
                return leftSymbol.structTable->getSymbol(rightMemberAccess->m_Left->getValue());
            }
            else{
                SRSL_THROW_EXCEPTION("MemberAccessNode::getRightSymbol(): Invalid cast (%p)!", m_Right);
            }
        }
        else{
            return leftSymbol.structTable->getSymbol(m_Right->getValue()); // right symbol is always declared in the left symbol table
        }
    }
}