#pragma once

#include "../Utils.hpp"

namespace Srsl{

    typedef enum AST_NODE_TYPE{
        AST_NODE_NONE                   = 0x0000,
        AST_NODE_SHADER_TYPE            = 0x0001,

        // types and variables
        AST_NODE_VARIABLE_DECLARATION   = 0x0002,
        AST_NODE_VARIABLE               = 0x0003,
        AST_NODE_FUNCTION_DECLARATION   = 0x0004,
        AST_NODE_FUNCTION_CALL          = 0x0005,
        AST_NODE_STRUCT_DECLARATION     = 0x0006,
        AST_NODE_TEXTURE_DECLARATION    = 0x0007,
        AST_NODE_SAMPLER_DECLARATION    = 0x0008,
        AST_NODE_CONSTANT_BUFFER_DECLARATION = 0x0009,

        // initializers
        AST_NODE_INITIALIZER_LIST       = 0x0010,
        AST_NODE_INITIALIZER            = 0x0011,
        AST_NODE_CONSTANT               = 0x0012,

        // expressions
        AST_NODE_EXPRESSION             = 0x0020,
        AST_NODE_ASSIGNMENT             = 0x0021,
        AST_NODE_TEST_CASE              = 0x0022,
        AST_NODE_MEMBER_ACCESS          = 0x0023,
        AST_NODE_ARRAY_ACCESS           = 0x0024,
        AST_NODE_SHADER_INTERFACE       = 0x0025,

        // control flow
        AST_NODE_IF_STATEMENT           = 0x0030,
        AST_NODE_ELSE_STATEMENT         = 0x0031,
        AST_NODE_IF_ELSE_STATEMENT      = 0x0032,
        AST_NODE_FOR_STATEMENT          = 0x0033,
        AST_NODE_WHILE_STATEMENT        = 0x0034,
        AST_NODE_SCOPE_STATEMENT        = 0x0035,

    } AST_NODE_TYPE;

}