#pragma once

#include "SymbolTable.hpp"

namespace Srsl{

    struct ConstantBufferDesc{
        std::string name;
        uint32 slot = 0;

        ConstantBufferDesc();

        ConstantBufferDesc(const std::string& name, uint32 slot);
    };

    struct TextureDesc{
        std::string name;
        uint32 slot = 0;
        VariableType type = VT_TEXTURE2D;

        TextureDesc();

        TextureDesc(const std::string& name, uint32 slot, VariableType type);
    };

    struct SamplerDesc{
        std::string name;
        uint32 slot = 0;

        SamplerDesc();

        SamplerDesc(const std::string& name, uint32 slot);
    };

    class Executor{
    public:
        explicit Executor(const ShaderLimits& limits);

        ~Executor();

        void validate();

        template<typename... Args>
        void addConstantBuffer(Args&&... args){
            ConstantBufferDesc desc(std::forward<Args>(args)...);
            // check slot assignment
            if (desc.slot >= m_Limits.maxConstantBufferSlots){
                SRSL_THROW_EXCEPTION(
                        "Constant buffer (%s) is assigned to slot %u, which is greater than the maximum allowed slot %u.",
                        desc.name.c_str(), desc.slot, m_Limits.maxConstantBufferSlots);
            }
            for (const auto& cb: m_ConstantBuffers){
                if (cb.slot == desc.slot){
                    SRSL_THROW_EXCEPTION(
                            "Constant buffer (%s) is assigned to slot %u, which is already used by constant buffer (%s).",
                            desc.name.c_str(), desc.slot, cb.name.c_str());
                }
            }
            m_ConstantBuffers.emplace_back(std::move(desc));
        }

        template<typename... Args>
        void addTexture(Args&&... args){
            m_Textures.emplace_back(std::forward<Args>(args)...);
        }

        template<typename... Args>
        void addSampler(Args&&... args){
            m_Samplers.emplace_back(std::forward<Args>(args)...);
        }

        void setVertexTables(RCP<SymbolTable> input, RCP<SymbolTable> output){
            m_InputVertexTable = input;
            m_OutputVertexTable = output;
        }

        void setFragmentTables(RCP<SymbolTable> input, RCP<SymbolTable> output){
            m_InputFragmentTable = input;
            m_OutputFragmentTable = output;
        }

    private:
        const ShaderLimits& m_Limits;

        std::vector<ConstantBufferDesc> m_ConstantBuffers;
        std::vector<TextureDesc> m_Textures;
        std::vector<SamplerDesc> m_Samplers;

        RCP<SymbolTable> m_InputVertexTable;
        RCP<SymbolTable> m_OutputVertexTable;
        RCP<SymbolTable> m_InputFragmentTable;
        RCP<SymbolTable> m_OutputFragmentTable;
    };

}