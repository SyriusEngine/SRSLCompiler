#pragma once

#include "../../Utils/Utils.hpp"

namespace Srsl{

    typedef u64 NodeType;
    typedef u64 NodeID;

    template<typename T>
    class NodeIDGenerator{
    public:
        static NodeType getID(){
            static NodeType id = generateID();
            return id;
        }

    private:
        static NodeType generateID(){
            static NodeType id = 0;
            return id++;
        }

    };

    typedef enum AST_NODE_CLASS {
        AST_NODE_CLASS_DEFAULT              = 0x0000,
        AST_NODE_CLASS_TYPED                = 0x0001,
        AST_NODE_CLASS_SCOPE                = 0x0002,
        AST_NODE_CLASS_UNCONDITIONAL_JUMP   = 0x0003,
    } AST_NODE_CLASS;

}