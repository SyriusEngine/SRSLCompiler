#pragma once

#include "AbstractNode.hpp"

namespace Srsl{

    class MemberAccessNode : public AbstractNode{
    public:
        explicit MemberAccessNode(uint64 lineNumber);

        ~MemberAccessNode() override;

        void construct() override;

        void fillSymbolTable(RCP<SymbolTable> symbolTable) override;

        void generateCode(UP<Exporter> &exporter, const std::string &indent) const override;

    private:

        void handleShaderInterface(UP<Exporter> &exporter, const std::string &indent) const;

        [[nodiscard]] Symbol getRightSymbol(const Symbol& leftSymbol) const;

    private:
        AbstractNode* m_Left; // will be a struct or a variable or a function call
        AbstractNode* m_Right;
    };

}