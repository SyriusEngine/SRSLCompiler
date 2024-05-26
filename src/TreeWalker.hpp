#pragma once

#include <stack>

#include "SrslGrammarBaseListener.h"
#include "SrslGrammarLexer.h"
#include "SrslGrammarParser.h"

#include "Utils/Utils.hpp"

namespace Srsl{

    class TreeWalker: public SrslGrammarBaseListener{
    public:
        TreeWalker();

    private:

    };

}