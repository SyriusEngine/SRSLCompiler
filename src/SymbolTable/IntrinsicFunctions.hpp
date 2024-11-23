#pragma once

#include "SymbolTable.hpp"

namespace Srsl{

    struct IntrinsicFunctionTranslation{
        std::string SrslIntrinsic;
        std::string GlslIntrinsic;
        std::string HlslIntrinsic;
        std::string CppIntrinsic;
    };

    class IntrinsicFunctions{
    public:
        static void loadIntrinsicFunctions(SharedPtr<SymbolTable>& st);

        static const IntrinsicFunctionTranslation& getIntrinsicFunctionTranslation(const std::string& intrinsicName);

    private:

        // PIMPL idiom
        class Impl;
        static Ptr<Impl> m_Impl;
    };

}