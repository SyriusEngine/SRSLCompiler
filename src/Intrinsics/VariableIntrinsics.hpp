#pragma once

#include "../Utils/Utils.hpp"

namespace Srsl{

    struct variableIntrinsic{
        std::string srslSemantic;
        std::string glslVariable;
        SRSL_SHADER_TYPE shaderType;
        std::string hlslSemantic;

    };

    class VariableIntrinsics{
    public:
        VariableIntrinsics();

        ~VariableIntrinsics();

        std::vector<std::string> getIntrinsicsNames(SRSL_SHADER_TYPE type) const;

        bool hasIntrinsic(const std::string& name) const;

        variableIntrinsic& getIntrinsic(const std::string& name);


    private:
        std::unordered_map<std::string, variableIntrinsic> m_IntrinsicMap;

    };

}
