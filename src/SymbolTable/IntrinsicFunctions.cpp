#include "IntrinsicFunctions.hpp"

namespace Srsl{

    class IntrinsicFunctions::Impl{
    public:
        Impl(){
            addIntrinsic("abs", "abs", "abs");
            addIntrinsic("any", "any", "any");
            addIntrinsic("all", "all", "all");
            addIntrinsic("sqrt", "sqrt", "sqrt");
            addIntrinsic("exp", "exp", "exp");
            addIntrinsic("log", "log", "log");
            addIntrinsic("exp2", "exp2", "exp2");
            addIntrinsic("log2", "log2", "log2");
            addIntrinsic("floor", "floor", "floor");
            addIntrinsic("ceil", "ceil", "ceil");
            addIntrinsic("radians", "radians", "radians");
            addIntrinsic("degrees", "degrees", "degrees");
            addIntrinsic("pow", "pow", "pow");
            addIntrinsic("noise", "noise", "noise");

            addIntrinsic("sin", "sin", "sin");
            addIntrinsic("cos", "cos", "cos");
            addIntrinsic("tan", "tan", "tan");
            addIntrinsic("asin", "asin", "asin");
            addIntrinsic("acos", "acos", "acos");
            addIntrinsic("atan", "atan", "atan");

            addIntrinsic("normalize", "normalize", "normalize");
            addIntrinsic("length", "length", "length");
            addIntrinsic("distance", "distance", "distance");
            addIntrinsic("dot", "dot", "dot");
            addIntrinsic("cross", "cross", "cross");
            addIntrinsic("reflect", "reflect", "reflect");
            addIntrinsic("refract", "refract", "refract");
            addIntrinsic("mix", "mix", "lerp");
            addIntrinsic("clamp", "clamp", "clamp");
            addIntrinsic("min", "min", "min");
            addIntrinsic("max", "max", "max");
            addIntrinsic("step", "step", "step");
            addIntrinsic("smoothstep", "smoothstep", "smoothstep");
            addIntrinsic("dfdx", "dfdx", "ddx");
            addIntrinsic("dfdy", "dfdy", "ddy");

            addIntrinsic("transpose", "transpose", "transpose");
            addIntrinsic("inverse", "inverse", "inverse");
            addIntrinsic("inversesqrt", "inversesqrt", "inversesqrt");
            addIntrinsic("determinant", "determinant", "determinant");

            addIntrinsic("sampleTexture", "sampleTexture", "texture");
        }

        ~Impl()= default;

        void loadIntrinsicFunctions(SharedPtr<SymbolTable> &st) {
            for (const auto& symbol: m_IntrinsicFunctionSymbols){
                st->addSymbol(symbol);
            }
        }

        const IntrinsicFunctionTranslation& getIntrinsicFunctionTranslation(const std::string& intrinsicName){
            SRSL_PRECONDITION(m_IntrinsicFunctionTranslations.find(intrinsicName) != m_IntrinsicFunctionTranslations.end(),
                              "Intrinsic function not found: %s", intrinsicName.c_str());

            return m_IntrinsicFunctionTranslations.at(intrinsicName);
        }

    private:

        void addIntrinsic(const std::string& srslName, const std::string& glslName, const std::string& hlslName,
                          const std::string& cppName = "") {
            /*
             * With intrinsic functions, we dont care about the actual return type since this is not always the same.
             * For example, the cos() function can return a float, vec2, vec3, vec4, etc. The VT_TEMPLATE type functions
             * as a hack. These can be removed when templates are implemented (if ever).
             */
            SymbolType returnType(VT_TEMPLATE);
            Symbol func(srslName, returnType);
            func.symbolClass = SC_FUNCTION;

            m_IntrinsicFunctionSymbols.push_back(func);

            IntrinsicFunctionTranslation translation;
            translation.SrslIntrinsic = srslName;
            translation.GlslIntrinsic = glslName;
            translation.HlslIntrinsic = hlslName;
            translation.CppIntrinsic = cppName;

            m_IntrinsicFunctionTranslations[srslName] = translation;
        }

    private:
        std::vector<Symbol> m_IntrinsicFunctionSymbols;
        std::unordered_map<std::string, IntrinsicFunctionTranslation> m_IntrinsicFunctionTranslations;
    };

    Ptr<IntrinsicFunctions::Impl> IntrinsicFunctions::m_Impl = createPtr<Impl>();

    void IntrinsicFunctions::loadIntrinsicFunctions(SharedPtr<SymbolTable> &st) {
        m_Impl->loadIntrinsicFunctions(st);
    }

    const IntrinsicFunctionTranslation &
    IntrinsicFunctions::getIntrinsicFunctionTranslation(const std::string &intrinsicName) {
        return m_Impl->getIntrinsicFunctionTranslation(intrinsicName);
    }
}