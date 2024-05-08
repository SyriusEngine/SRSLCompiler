#pragma once

#include "../../Utils/Utils.hpp"

namespace Srsl{

    typedef enum AST_NODE_TYPE{
        AST_NODE_NONE                   = 0x0000,
        AST_NODE_SHADER_TYPE            = 0x0001,

        // types and variables
        AST_NODE_VARIABLE_DECLARATION   = 0x0012,
        AST_NODE_VARIABLE               = 0x0013,
        AST_NODE_FUNCTION_DECLARATION   = 0x0014,
        AST_NODE_FUNCTION_CALL          = 0x0015,
        AST_NODE_STRUCT_DECLARATION     = 0x0016,
        AST_NODE_TEXTURE_DECLARATION    = 0x0017,
        AST_NODE_SAMPLER_DECLARATION    = 0x0018,
        AST_NODE_CONSTANT_BUFFER_DECLARATION = 0x0019,
        AST_NODE_VECTOR_SWIZZLE         = 0x001A,
        AST_NODE_SHADER_STORAGE_BUFFER  = 0x001B,

        // initializers
        AST_NODE_INITIALIZER_LIST       = 0x0020,
        AST_NODE_INITIALIZER            = 0x0021,
        AST_NODE_CONSTANT               = 0x0022,

        // expressions
        AST_NODE_EXPRESSION             = 0x0030,
        AST_NODE_ASSIGNMENT             = 0x0031,
        AST_NODE_TEST_CASE              = 0x0032,
        AST_NODE_MEMBER_ACCESS          = 0x0033,
        AST_NODE_ARRAY_ACCESS           = 0x0034,
        AST_NODE_SHADER_INTERFACE       = 0x0035,
        AST_NODE_TEST_ASSERTION         = 0x0036,

        // control flow
        AST_NODE_IF_STATEMENT           = 0x0040,
        AST_NODE_ELSE_STATEMENT         = 0x0041,
        AST_NODE_IF_ELSE_STATEMENT      = 0x0042,
        AST_NODE_FOR_STATEMENT          = 0x0043,
        AST_NODE_WHILE_STATEMENT        = 0x0044,
        AST_NODE_SCOPE_STATEMENT        = 0x0045,
        AST_NODE_CONTROL_FLOW_STATEMENT = 0x0046,
        AST_NODE_RETURN_STATEMENT       = 0x0047,

        // internal
        AST_NODE_TEST_EVALUATION        = 0x0050,

    } AST_NODE_TYPE;

}