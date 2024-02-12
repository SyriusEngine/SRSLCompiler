#include "ShaderModuleImpl.hpp"

namespace Srsl{

    ShaderModuleImpl::ShaderModuleImpl(const ImportDesc &desc):
    ShaderModule() {

    }

    ShaderModuleImpl::~ShaderModuleImpl() {

    }

    void ShaderModuleImpl::exportAstDot(const std::string &outputFile) {

    }

    void ShaderModuleImpl::exportSymbolTableHtml(const std::string &outputFile) {

    }

    void ShaderModuleImpl::exportShader(const ExportDesc &desc) {

    }

    SRSL_SHADER_TYPE ShaderModuleImpl::getShaderType() const {
        return SRSL_SHADER_NONE;
    }
}
