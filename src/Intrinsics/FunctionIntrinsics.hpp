#pragma once

#include "../Utils.hpp"

namespace Srsl{

    struct FunctionIntrinsic{
        std::string SrslIntrinsic;
        std::string GlslIntrinsic;
        std::string HlslIntrinsic;
        std::string CppIntrinsic;
    };

    class FunctionIntrinsics{
    public:
        FunctionIntrinsics();

        ~FunctionIntrinsics();

        std::vector<std::string> getIntrinsicsNames() const;

        bool hasIntrinsic(const std::string& name) const;

        FunctionIntrinsic& getIntrinsic(const std::string& name);

        std::string convert(const std::string& name, SRSL_TARGET_LANGUAGE_TYPE type);

        /**
         * @brief converts a comparison operator to the target language
         *        for example, if op is "==" and type is SRSL_TARGET_GLSL, the function will return "equal".
         *        if op is "==" and type is SRSL_TARGET_HLSL, the function will return "equal".
         *        if op is "==" and type is SRSL_TARGET_CPP, the function will return "glm::equal".
         * @param op
         * @param type
         * @return
         */
        std::string convertComparison(const std::string& op, SRSL_TARGET_LANGUAGE_TYPE type);


    private:
        std::unordered_map<std::string, FunctionIntrinsic> m_IntrinsicMap;

    };
}