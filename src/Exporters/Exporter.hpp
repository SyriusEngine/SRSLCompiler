#pragma once

#include "../Utils.hpp"
#include "../Converter/VariableTypes.hpp"
#include "../Intrinsics/VariableIntrinsics.hpp"
#include "../Intrinsics/FunctionIntrinsics.hpp"

#include <set>
#include <map>

#define SRSL_CONCAT_LIT std::string("SRSLCONCAT")
#define SRSL_TYPE_DECL std::string("TYPE_")
#define SRSL_CONSTANT_BUFFER_COLLECTION std::string("__CBUFFERS__")
#define SRSL_TEXTURE_COLLECTION std::string("__TEXTURES__")
#define SRSL_SAMPLER_CONNECTION std::string("__SAMPLERS__")


namespace Srsl{

    // sorted from top of the shader to bottom of the shader
    typedef enum PROGRAM_SECTION_TYPE{
        PROGRAM_SECTION_DEFAULT = 0xff,
        PROGRAM_SECTION_TOP     = 0x01,
        PROGRAM_SECTION_INPUT   = 0x02,
        PROGRAM_SECTION_OUTPUT  = 0x03,
        PROGRAM_SECTION_CONSTANT_BUFFER = 0x04,
        PROGRAM_SECTION_TEXTURE  = 0x05,
        PROGRAM_SECTION_SAMPLER  = 0x06,
    } PROGRAM_SECTION_TYPE;

    class Exporter{
    public:
        Exporter(const ExportDesc& desc, SRSL_SHADER_TYPE type, const ShaderLimits& limits);

        virtual ~Exporter();

        void addLine(const std::string& line);

        void setAppendBuffer(PROGRAM_SECTION_TYPE type);

        inline VariableIntrinsics& getVariableIntrinsics(){
            return m_VariableIntrinsics;
        }

        inline FunctionIntrinsics& getFunctionIntrinsics(){
            return m_FunctionIntrinsics;
        }

        inline SRSL_SHADER_TYPE getShaderType() const{
            return m_ShaderType;
        }

        inline SRSL_TARGET_LANGUAGE_TYPE getLanguageType() const{
            return m_Target;
        }

        inline const ExportDesc& getExportDesc() const{
            return m_Desc;
        }

        inline const ShaderLimits& getLimits() const{
            return m_Limits;
        }

        void getShaderCode(std::string& buffer) const;

        virtual std::string getVariableType(const TypeDesc& type) const = 0;

    private:
        const SRSL_SHADER_TYPE m_ShaderType;
        const ExportDesc m_Desc;
        const ShaderLimits m_Limits;
        const SRSL_TARGET_LANGUAGE_TYPE m_Target;

        std::vector<std::string>* m_CurrentBuffer;

        std::map<PROGRAM_SECTION_TYPE, std::vector<std::string>> m_Sections;

        VariableIntrinsics m_VariableIntrinsics;
        FunctionIntrinsics m_FunctionIntrinsics;
    };
}