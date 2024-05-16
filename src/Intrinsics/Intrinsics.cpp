#include "Intrinsics.hpp"

namespace Srsl{

    void loadIntrinsicFunctions(RCP<SymbolTable>& table){
        TypeDesc intrinsicType;
        intrinsicType.type = VT_INTRINSIC;

        table->addSymbol({"abs", "", intrinsicType, ST_FUNCTION, nullptr, 0});
        table->addSymbol({"sqrt", "", intrinsicType, ST_FUNCTION, nullptr, 0});
        table->addSymbol({"radians", "", intrinsicType, ST_FUNCTION, nullptr, 0});
        table->addSymbol({"degrees", "", intrinsicType, ST_FUNCTION, nullptr, 0});
        table->addSymbol({"pow", "", intrinsicType, ST_FUNCTION, nullptr, 0});
        table->addSymbol({"noise", "", intrinsicType, ST_FUNCTION, nullptr, 0});
        table->addSymbol({"log", "", intrinsicType, ST_FUNCTION, nullptr, 0});
        table->addSymbol({"log2", "", intrinsicType, ST_FUNCTION, nullptr, 0});
        table->addSymbol({"exp", "", intrinsicType, ST_FUNCTION, nullptr, 0});
        table->addSymbol({"exp2", "", intrinsicType, ST_FUNCTION, nullptr, 0});
        table->addSymbol({"floor", "", intrinsicType, ST_FUNCTION, nullptr, 0});
        table->addSymbol({"ceil", "", intrinsicType, ST_FUNCTION, nullptr, 0});

        // Trigonometric functions
        table->addSymbol({"sin", "", intrinsicType, ST_FUNCTION, nullptr, 0});
        table->addSymbol({"cos", "", intrinsicType, ST_FUNCTION, nullptr, 0});
        table->addSymbol({"tan", "", intrinsicType, ST_FUNCTION, nullptr, 0});
        table->addSymbol({"asin", "", intrinsicType, ST_FUNCTION, nullptr, 0});
        table->addSymbol({"acos", "", intrinsicType, ST_FUNCTION, nullptr, 0});
        table->addSymbol({"atan", "", intrinsicType, ST_FUNCTION, nullptr, 0});
        table->addSymbol({"sinh", "", intrinsicType, ST_FUNCTION, nullptr, 0});
        table->addSymbol({"cosh", "", intrinsicType, ST_FUNCTION, nullptr, 0});
        table->addSymbol({"tanh", "", intrinsicType, ST_FUNCTION, nullptr, 0});
        table->addSymbol({"asinh", "", intrinsicType, ST_FUNCTION, nullptr, 0});
        table->addSymbol({"acosh", "", intrinsicType, ST_FUNCTION, nullptr, 0});
        table->addSymbol({"atanh", "", intrinsicType, ST_FUNCTION, nullptr, 0});
        table->addSymbol({"atan2", "", intrinsicType, ST_FUNCTION, nullptr, 0});

        // vector comparisons
        table->addSymbol({"lessThan", "", intrinsicType, ST_FUNCTION, nullptr, 0});
        table->addSymbol({"lessThanEqual", "", intrinsicType, ST_FUNCTION, nullptr, 0});
        table->addSymbol({"greaterThan", "", intrinsicType, ST_FUNCTION, nullptr, 0});
        table->addSymbol({"greaterThanEqual", "", intrinsicType, ST_FUNCTION, nullptr, 0});
        table->addSymbol({"equal", "", intrinsicType, ST_FUNCTION, nullptr, 0});
        table->addSymbol({"notEqual", "", intrinsicType, ST_FUNCTION, nullptr, 0});
        table->addSymbol({"any", "", intrinsicType, ST_FUNCTION, nullptr, 0});
        table->addSymbol({"all", "", intrinsicType, ST_FUNCTION, nullptr, 0});
        table->addSymbol({"not", "", intrinsicType, ST_FUNCTION, nullptr, 0});

        // Geometric functions
        table->addSymbol({"normalize", "", intrinsicType, ST_FUNCTION, nullptr, 0});
        table->addSymbol({"length", "", intrinsicType, ST_FUNCTION, nullptr, 0});
        table->addSymbol({"distance", "", intrinsicType, ST_FUNCTION, nullptr, 0});
        table->addSymbol({"dot", "", intrinsicType, ST_FUNCTION, nullptr, 0});
        table->addSymbol({"cross", "", intrinsicType, ST_FUNCTION, nullptr, 0});
        table->addSymbol({"reflect", "", intrinsicType, ST_FUNCTION, nullptr, 0});
        table->addSymbol({"refract", "", intrinsicType, ST_FUNCTION, nullptr, 0});
        table->addSymbol({"mix", "", intrinsicType, ST_FUNCTION, nullptr, 0});
        table->addSymbol({"clamp", "", intrinsicType, ST_FUNCTION, nullptr, 0});
        table->addSymbol({"step", "", intrinsicType, ST_FUNCTION, nullptr, 0});
        table->addSymbol({"min", "", intrinsicType, ST_FUNCTION, nullptr, 0});
        table->addSymbol({"max", "", intrinsicType, ST_FUNCTION, nullptr, 0});
        table->addSymbol({"step", "", intrinsicType, ST_FUNCTION, nullptr, 0});
        table->addSymbol({"smoothstep", "", intrinsicType, ST_FUNCTION, nullptr, 0});
        table->addSymbol({"dfdx", "", intrinsicType, ST_FUNCTION, nullptr, 0});
        table->addSymbol({"dfdy", "", intrinsicType, ST_FUNCTION, nullptr, 0});
        table->addSymbol({"inversesqrt", "", intrinsicType, ST_FUNCTION, nullptr, 0});
        table->addSymbol({"determinant", "", intrinsicType, ST_FUNCTION, nullptr, 0});
        table->addSymbol({"sign", "", intrinsicType, ST_FUNCTION, nullptr, 0});
        table->addSymbol({"fract", "", intrinsicType, ST_FUNCTION, nullptr, 0});

        // Matrix functions
        table->addSymbol({"transpose", "", intrinsicType, ST_FUNCTION, nullptr, 0});
        table->addSymbol({"inverse", "", intrinsicType, ST_FUNCTION, nullptr, 0});

        // Texture functions
        table->addSymbol({"sampleTexture", "", intrinsicType, ST_FUNCTION, nullptr, 0});

        // Atomic functions
        table->addSymbol({"atomicAdd", "", intrinsicType, ST_FUNCTION, nullptr, 0});
        table->addSymbol({"atomicAnd", "", intrinsicType, ST_FUNCTION, nullptr, 0});
        table->addSymbol({"atomicOr", "", intrinsicType, ST_FUNCTION, nullptr, 0});
        table->addSymbol({"atomicXor", "", intrinsicType, ST_FUNCTION, nullptr, 0});
        table->addSymbol({"atomicMin", "", intrinsicType, ST_FUNCTION, nullptr, 0});
        table->addSymbol({"atomicMax", "", intrinsicType, ST_FUNCTION, nullptr, 0});
        table->addSymbol({"atomicExchange", "", intrinsicType, ST_FUNCTION, nullptr, 0});
        table->addSymbol({"atomicCompSwap", "", intrinsicType, ST_FUNCTION, nullptr, 0});
    }

}