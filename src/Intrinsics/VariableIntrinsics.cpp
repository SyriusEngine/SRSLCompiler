#include "VariableIntrinsics.hpp"

namespace Srsl{

    VariableIntrinsics::VariableIntrinsics():
    m_IntrinsicMap(){
        m_IntrinsicMap.insert({"SRV_POSITION", {"SRV_POSITION", "gl_Position", SRSL_VERTEX_SHADER, "SV_POSITION"}});
        m_IntrinsicMap.insert({"SRV_INSTANCE_ID", {"SRV_INSTANCE_ID", "gl_InstanceID", SRSL_VERTEX_SHADER, "SV_InstanceID"}});
        m_IntrinsicMap.insert({"SRV_VERTEX_ID", {"SRV_VERTEX_ID", "gl_VertexID", SRSL_VERTEX_SHADER, "SV_VertexID"}});
        m_IntrinsicMap.insert({"SRV_TARGET_0", {"SRV_TARGET_0", "", SRSL_FRAGMENT_SHADER, "SV_Target0"}});
        m_IntrinsicMap.insert({"SRV_TARGET_1", {"SRV_TARGET_1", "", SRSL_FRAGMENT_SHADER, "SV_Target1"}});
        m_IntrinsicMap.insert({"SRV_TARGET_2", {"SRV_TARGET_2", "", SRSL_FRAGMENT_SHADER, "SV_Target2"}});
        m_IntrinsicMap.insert({"SRV_TARGET_3", {"SRV_TARGET_3", "", SRSL_FRAGMENT_SHADER, "SV_Target3"}});
        m_IntrinsicMap.insert({"SRV_TARGET_4", {"SRV_TARGET_4", "", SRSL_FRAGMENT_SHADER, "SV_Target4"}});
        m_IntrinsicMap.insert({"SRV_TARGET_5", {"SRV_TARGET_5", "", SRSL_FRAGMENT_SHADER, "SV_Target5"}});
        m_IntrinsicMap.insert({"SRV_TARGET_6", {"SRV_TARGET_6", "", SRSL_FRAGMENT_SHADER, "SV_Target6"}});
        m_IntrinsicMap.insert({"SRV_TARGET_7", {"SRV_TARGET_7", "", SRSL_FRAGMENT_SHADER, "SV_Target7"}});
        m_IntrinsicMap.insert({"SRV_TARGET_8", {"SRV_TARGET_8", "", SRSL_FRAGMENT_SHADER, "SV_Target8"}});
        m_IntrinsicMap.insert({"SRV_TARGET_9", {"SRV_TARGET_9", "", SRSL_FRAGMENT_SHADER, "SV_Target9"}});
        m_IntrinsicMap.insert({"SRV_TARGET_10", {"SRV_TARGET_10", "", SRSL_FRAGMENT_SHADER, "SV_Target10"}});
        m_IntrinsicMap.insert({"SRV_TARGET_11", {"SRV_TARGET_11", "", SRSL_FRAGMENT_SHADER, "SV_Target11"}});
        m_IntrinsicMap.insert({"SRV_TARGET_12", {"SRV_TARGET_12", "", SRSL_FRAGMENT_SHADER, "SV_Target12"}});
        m_IntrinsicMap.insert({"SRV_TARGET_13", {"SRV_TARGET_13", "", SRSL_FRAGMENT_SHADER, "SV_Target13"}});
        m_IntrinsicMap.insert({"SRV_TARGET_14", {"SRV_TARGET_14", "", SRSL_FRAGMENT_SHADER, "SV_Target14"}});
        m_IntrinsicMap.insert({"SRV_TARGET_15", {"SRV_TARGET_15", "", SRSL_FRAGMENT_SHADER, "SV_Target15"}});
        m_IntrinsicMap.insert({"SRV_FRAGCOORD", {"SRV_FRAGCOORD", "gl_FragCoord", SRSL_FRAGMENT_SHADER, "SV_POSITION"}});
        m_IntrinsicMap.insert({"SRV_FRAGDEPTH", {"SRV_FRAGDEPTH", "gl_FragDepth", SRSL_FRAGMENT_SHADER, "SV_Depth"}});
    }

    VariableIntrinsics::~VariableIntrinsics() {

    }

    std::vector<std::string> VariableIntrinsics::getIntrinsicsNames(SRSL_SHADER_TYPE type) const {
        std::vector<std::string> retVal;
        for (const auto& [name, intrinsic]: m_IntrinsicMap){
            if (intrinsic.shaderType == type){
                retVal.push_back(name);
            }
        }
        return retVal;
    }

    bool VariableIntrinsics::hasIntrinsic(const std::string &name) const {
        return m_IntrinsicMap.find(name) != m_IntrinsicMap.end();
    }

    variableIntrinsic &VariableIntrinsics::getIntrinsic(const std::string &name) {
        return m_IntrinsicMap[name];
    }
}
