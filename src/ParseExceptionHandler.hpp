#pragma once

#include "Utils/Utils.hpp"
#include <antlr4-runtime.h>

namespace Srsl{

    class SrslErrorListener: public antlr4::BaseErrorListener{
    public:

        void syntaxError(antlr4::Recognizer *recognizer,
                                 antlr4::Token *offendingSymbol,
                                 size_t line,
                                 size_t charPositionInLine,
                                 const std::string &msg,
                                 std::exception_ptr e) override;
    };



}