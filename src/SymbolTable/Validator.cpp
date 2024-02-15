#include "Validator.hpp"

namespace Srsl{

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