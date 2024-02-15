#pragma once

#include "SymbolTable.hpp"

namespace Srsl{

    struct ConstantBufferDesc{
        std::string name;
        uint32 slot = 0;
    };

    struct TextureDesc{
        std::string name;
        uint32 slot = 0;
        VariableType type = VT_TEXTURE2D;
    };

    struct SamplerDesc{
        std::string name;
        uint32 slot = 0;
    };

    class Validator{
    public:
        explicit Validator(const ShaderLimits& limits);

        ~Validator();

        template<typename... Args>
        void addConstantBuffer(Args&&... args){
            m_ConstantBuffers.emplace_back(std::forward<Args>(args)...);
        }

        template<typename... Args>
        void addTexture(Args&&... args){
            m_Textures.emplace_back(std::forward<Args>(args)...);
        }

        template<typename... Args>
        void addSampler(Args&&... args){
            m_Samplers.emplace_back(std::forward<Args>(args)...);
        }

    private:
        const ShaderLimits& m_Limits;

        std::vector<ConstantBufferDesc> m_ConstantBuffers;
        std::vector<TextureDesc> m_Textures;
        std::vector<SamplerDesc> m_Samplers;
    };

}