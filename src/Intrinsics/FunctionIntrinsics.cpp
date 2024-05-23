#include "FunctionIntrinsics.hpp"

namespace Srsl{


    FunctionIntrinsics::FunctionIntrinsics():
    m_IntrinsicMap(){
        m_IntrinsicMap.insert({"abs", {"abs", "abs", "abs", "glm::abs"}});
        m_IntrinsicMap.insert({"sqrt", {"sqrt", "sqrt", "sqrt", "glm::sqrt"}});
        m_IntrinsicMap.insert({"radians", {"radians", "radians", "radians", "glm::radians"}});
        m_IntrinsicMap.insert({"degrees", {"degrees", "degrees", "degrees", "glm::degrees"}});
        m_IntrinsicMap.insert({"pow", {"pow", "pow", "pow", "glm::pow"}});
        m_IntrinsicMap.insert({"noise", {"noise", "noise", "noise", "GLM_NOT_IMPLEMENTED"}});
        m_IntrinsicMap.insert({"log", {"log", "log", "log", "glm::log"}});
        m_IntrinsicMap.insert({"log2", {"log2", "log2", "log2", "glm::log2"}});
        m_IntrinsicMap.insert({"exp", {"exp", "exp", "exp", "glm::exp"}});
        m_IntrinsicMap.insert({"exp2", {"exp2", "exp2", "exp2", "glm::exp2"}});
        m_IntrinsicMap.insert({"floor", {"floor", "floor", "floor", "glm::floor"}});
        m_IntrinsicMap.insert({"ceil", {"ceil", "ceil", "ceil", "glm::ceil"}});
        m_IntrinsicMap.insert({"round", {"round", "round", "round", "glm::round"}});
        m_IntrinsicMap.insert({"trunc", {"trunc", "trunc", "trunc", "glm::trunc"}});
        m_IntrinsicMap.insert({"mod", {"mod", "mod", "mod", "glm::mod"}});

        m_IntrinsicMap.insert({"sin", {"sin", "sin", "sin", "glm::sin"}});
        m_IntrinsicMap.insert({"cos", {"cos", "cos", "cos", "glm::cos"}});
        m_IntrinsicMap.insert({"tan", {"tan", "tan", "tan", "glm::tan"}});
        m_IntrinsicMap.insert({"asin", {"asin", "asin", "asin", "glm::asin"}});
        m_IntrinsicMap.insert({"acos", {"acos", "acos", "acos", "glm::acos"}});
        m_IntrinsicMap.insert({"atan", {"atan", "atan", "atan", "glm::atan"}});
        m_IntrinsicMap.insert({"sinh", {"sinh", "sinh", "sinh", "glm::sinh"}});
        m_IntrinsicMap.insert({"cosh", {"cosh", "cosh", "cosh", "glm::cosh"}});
        m_IntrinsicMap.insert({"tanh", {"tanh", "tanh", "tanh", "glm::tanh"}});
        m_IntrinsicMap.insert({"asinh", {"asinh", "asinh", "asinh", "glm::asinh"}});
        m_IntrinsicMap.insert({"acosh", {"acosh", "acosh", "acosh", "glm::acosh"}});
        m_IntrinsicMap.insert({"atanh", {"atanh", "atanh", "atanh", "glm::atanh"}});
        m_IntrinsicMap.insert({"atan2", {"atan2", "atan2", "atan2", "glm::atan2"}});

        m_IntrinsicMap.insert({"lessThan", {"lessThan", "lessThan", "lessThan", "glm::lessThan"}});
        m_IntrinsicMap.insert({"lessThanEqual", {"lessThanEqual", "lessThanEqual", "lessThanEqual", "glm::lessThanEqual"}});
        m_IntrinsicMap.insert({"greaterThan", {"greaterThan", "greaterThan", "greaterThan", "glm::greaterThan"}});
        m_IntrinsicMap.insert({"greaterThanEqual", {"greaterThanEqual", "greaterThanEqual", "greaterThanEqual", "glm::greaterThanEqual"}});
        m_IntrinsicMap.insert({"equal", {"equal", "equal", "equal", "glm::equal"}});
        m_IntrinsicMap.insert({"notEqual", {"notEqual", "notEqual", "notEqual", "glm::notEqual"}});
        m_IntrinsicMap.insert({"any", {"any", "any", "any", "glm::any"}});
        m_IntrinsicMap.insert({"all", {"all", "all", "all", "glm::all"}});
        m_IntrinsicMap.insert({"not", {"not", "not", "not", "glm::not"}});

        m_IntrinsicMap.insert({"normalize", {"normalize", "normalize", "normalize", "glm::normalize"}});
        m_IntrinsicMap.insert({"length", {"length", "length", "length", "glm::length"}});
        m_IntrinsicMap.insert({"distance", {"distance", "distance", "distance", "glm::distance"}});
        m_IntrinsicMap.insert({"dot", {"dot", "dot", "dot", "glm::dot"}});
        m_IntrinsicMap.insert({"cross", {"cross", "cross", "cross", "glm::cross"}});
        m_IntrinsicMap.insert({"reflect", {"reflect", "reflect", "reflect", "glm::reflect"}});
        m_IntrinsicMap.insert({"refract", {"refract", "refract", "refract", "glm::refract"}});
        m_IntrinsicMap.insert({"mix", {"mix", "mix", "lerp", "glm::mix"}});
        m_IntrinsicMap.insert({"clamp", {"clamp", "clamp", "clamp", "glm::clamp"}});
        m_IntrinsicMap.insert({"min", {"min", "min", "min", "glm::min"}});
        m_IntrinsicMap.insert({"max", {"max", "max", "max", "glm::max"}});
        m_IntrinsicMap.insert({"step", {"step", "step", "step", "glm::step"}});
        m_IntrinsicMap.insert({"smoothstep", {"smoothstep", "smoothstep", "smoothstep", "glm::smoothstep"}});
        m_IntrinsicMap.insert({"dfdx", {"dfdx", "dfdx", "ddx", "GLM_NOT_IMPLEMENTED"}});
        m_IntrinsicMap.insert({"dfdy", {"dfdy", "dfdy", "ddy", "GLM_NOT_IMPLEMENTED"}});
        m_IntrinsicMap.insert({"inversesqrt", {"inversesqrt", "inversesqrt", "inversesqrt", "glm::inversesqrt"}});
        m_IntrinsicMap.insert({"determinant", {"determinant", "determinant", "determinant", "GLM_NOT_IMPLEMENTED"}});
        m_IntrinsicMap.insert({"sign", {"sign", "sign", "sign", "glm::sign"}});
        m_IntrinsicMap.insert({"fract", {"fract", "fract", "fract", "glm::fract"}});

        m_IntrinsicMap.insert({"transpose", {"transpose", "transpose", "transpose", "glm::transpose"}});
        m_IntrinsicMap.insert({"inverse", {"inverse", "inverse", "inverse", "glm::inverse"}});

        m_IntrinsicMap.insert({"sampleTexture", {"sampleTexture", "texture", "__NONE__", "GLM_NOT_IMPLEMENTED"}}); // texture sampling is completely different in hlsl
    }

    FunctionIntrinsics::~FunctionIntrinsics() {

    }

    std::vector<std::string> FunctionIntrinsics::getIntrinsicsNames() const {
        std::vector<std::string> retVal;
        for (const auto& [name, intrinsic]: m_IntrinsicMap){
            retVal.push_back(name);
        }
        return retVal;
    }

    bool FunctionIntrinsics::hasIntrinsic(const std::string &name) const {
        return m_IntrinsicMap.find(name) != m_IntrinsicMap.end();
    }

    FunctionIntrinsic &FunctionIntrinsics::getIntrinsic(const std::string &name) {
        return m_IntrinsicMap[name];
    }

    std::string FunctionIntrinsics::convert(const std::string &name, SRSL_TARGET_LANGUAGE_TYPE type) {
        if (hasIntrinsic(name)) {
            switch (type) {
                case SRSL_TARGET_GLSL:
                    return getIntrinsic(name).GlslIntrinsic;
                case SRSL_TARGET_HLSL:
                    return getIntrinsic(name).HlslIntrinsic;
                default:
                    return getIntrinsic(name).SrslIntrinsic;
            }
        }
        else{
            return name;
        }
    }

    std::string FunctionIntrinsics::convertComparison(const std::string &op, SRSL_TARGET_LANGUAGE_TYPE type) {
        if (op == "=="){
            return convert("equal", type);
        }
        else if (op == "!="){
            return convert("notEqual", type);
        }
        else if (op == "<"){
            return convert("lessThan", type);
        }
        else if (op == "<="){
            return convert("lessThanEqual", type);
        }
        else if (op == ">"){
            return convert("greaterThan", type);
        }
        else if (op == ">="){
            return convert("greaterThanEqual", type);
        }
        else{
            SRSL_THROW_EXCEPTION("Invalid comparison operator: %s", op.c_str());
        }
    }
}