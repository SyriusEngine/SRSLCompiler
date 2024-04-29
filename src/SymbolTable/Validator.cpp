#include "Validator.hpp"
#include "../../../../include/SrslUnit/SrslUnit.hpp"


namespace Srsl{

    ConstantBufferDesc::ConstantBufferDesc() = default;

    ConstantBufferDesc::ConstantBufferDesc(const std::string& name, uint32 slot):
    name(name),
    slot(slot){

    }

    TextureDesc::TextureDesc() = default;

    TextureDesc::TextureDesc(const std::string& name, uint32 slot, VariableType type):
    name(name),
    slot(slot),
    type(type){

    }

    SamplerDesc::SamplerDesc() = default;

    SamplerDesc::SamplerDesc(const std::string& name, uint32 slot):
    name(name),
    slot(slot){

    }



    Validator::Validator(const ShaderLimits& limits):
    m_Limits(limits){

    }

    Validator::~Validator() = default;

    void Validator::validate() {
        SRSL_PRECONDITION(m_InputVertexTable != nullptr, "Input vertex table is not set.");
        SRSL_PRECONDITION(m_OutputVertexTable != nullptr, "Output vertex table is not set.");
        SRSL_PRECONDITION(m_InputFragmentTable != nullptr, "Input fragment table is not set.");
        SRSL_PRECONDITION(m_OutputFragmentTable != nullptr, "Output fragment table is not set.");

    }

}