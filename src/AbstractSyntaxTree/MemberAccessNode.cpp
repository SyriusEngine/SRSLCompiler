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
        m_SymbolTable = symbolTable;
        m_Left->fillSymbolTable(symbolTable);

        // right element is defined in the symbol table of the left element
        auto leftName = m_Left->getValue();
        auto leftSymbol = symbolTable->getSymbol(leftName);
        m_Right->fillSymbolTable(leftSymbol.structTable);
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

    }

    Symbol MemberAccessNode::getRightSymbol(const Symbol &leftSymbol) const {
        /*
         * There are 2 possible nodes for the RHS, a variable node or another member access node (recursive)
         */
        if (m_Right->getType() == AST_NODE_MEMBER_ACCESS){
            auto rightMemberAccess = dynamic_cast<MemberAccessNode*>(m_Right);
            if (rightMemberAccess){
                return leftSymbol.structTable->getSymbol(rightMemberAccess->m_Left->getValue());
            }
            else{
                throw std::runtime_error("MemberAccessNode: Invalid right child!");
            }
        }
        else{
            return leftSymbol.structTable->getSymbol(m_Right->getValue()); // right symbol is always declared in the left symbol table
        }
    }
}