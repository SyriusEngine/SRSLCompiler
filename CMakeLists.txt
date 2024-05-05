cmake_minimum_required(VERSION 3.16)

project(SRSLCompiler)

set(CMAKE_CXX_STANDARD 17)

add_compile_definitions(SRSL_EXPORT_DLL)

add_subdirectory(./src/antlr4/)

include_directories(src/antlr4/runtime/src/)
set(SRSL_DEPENDENCIES_DLL
    ${CMAKE_CURRENT_BINARY_DIR}/src/antlr4/runtime/libantlr4-runtime.dll
)

add_custom_target(CopyDLL ALL
    COMMAND ${CMAKE_COMMAND} -E copy_if_different ${SRSL_DEPENDENCIES_DLL} ${CMAKE_CURRENT_BINARY_DIR}
    DEPENDS ${SRSL_DEPENDENCIES_DLL}
    COMMENT "Copying DLLs to build tree")
add_dependencies(CopyDLL antlr4_shared)

link_directories(${CMAKE_CURRENT_BINARY_DIR}/src/antlr4/runtime/)


set(ANTLR4_SRC
    src/antlr4/runtime/src/SrslGrammarBaseListener.cpp
    src/antlr4/runtime/src/SrslGrammarLexer.cpp
    src/antlr4/runtime/src/SrslGrammarListener.cpp
    src/antlr4/runtime/src/SrslGrammarParser.cpp)

set(AST_SRC
    src/AbstractSyntaxTree/AbstractNode.cpp
    src/AbstractSyntaxTree/NodeTypes.cpp
    src/AbstractSyntaxTree/ShaderTypeNode.cpp
    src/AbstractSyntaxTree/Nodes.cpp
    src/AbstractSyntaxTree/VariableNode.cpp
    src/AbstractSyntaxTree/MemberAccessNode.cpp
    src/AbstractSyntaxTree/StructDeclarationNode.cpp
    src/AbstractSyntaxTree/SwizzleNode.cpp
    src/AbstractSyntaxTree/ConstantBufferNode.cpp
    src/AbstractSyntaxTree/FLowControlNodes.cpp
    src/AbstractSyntaxTree/InterfaceNode.cpp
    src/AbstractSyntaxTree/TextureNode.cpp
    src/AbstractSyntaxTree/FunctionNode.cpp
    src/AbstractSyntaxTree/ScopeNode.cpp
    src/AbstractSyntaxTree/ExpressionNode.cpp
    src/AbstractSyntaxTree/ShaderStorageBufferNode.cpp
    src/AbstractSyntaxTree/TestCaseNode.cpp
    src/AbstractSyntaxTree/Internal/TestEvaluationNode.cpp )

set(CONVERTER_SRC
    src/Converter/VariableTypes.cpp
    )

set(SYMBOL_TABLE_SRC
    src/SymbolTable/Symbol.cpp
    src/SymbolTable/SymbolTable.cpp
    src/SymbolTable/Validator.cpp
    )

set(INTRINSICS_SRC
    src/Intrinsics/Intrinsics.cpp
    src/Intrinsics/FunctionIntrinsics.cpp
    src/Intrinsics/VariableIntrinsics.cpp
    )

set(EXPORTER_SRC
    src/Exporters/Exporter.cpp
    src/Exporters/GlslExporter.cpp
    src/Exporters/HlslExporter.cpp
    )

set(SRSL_SRC
    ${ANTLR4_SRC}
    ${AST_SRC}
    ${CONVERTER_SRC}
    ${SYMBOL_TABLE_SRC}
    ${INTRINSICS_SRC}
    ${EXPORTER_SRC}

    src/SrslCompiler.cpp
    src/ShaderModuleImpl.cpp
    src/ShaderProgramImpl.cpp
    src/ParseExceptionHandler.cpp
    src/TreeWalker.cpp src/ProgramInfo.hpp)

add_library(SRSLCompiler SHARED ${SRSL_SRC})
target_link_libraries(SRSLCompiler antlr4-runtime)
add_dependencies(SRSLCompiler CopyDLL)

################################ Development Executable ################################

include_directories(./include/)
link_directories(./cmake-build-debug/)
add_executable(SRSLCompilerDev main.cpp)
target_link_libraries(SRSLCompilerDev -lSRSLCompiler)

add_dependencies(SRSLCompilerDev SRSLCompiler)

################################ Test Executable ################################

add_executable(SRSLCompilerTest TestMain.cpp)
target_link_libraries(SRSLCompilerTest -lSRSLCompiler)

add_dependencies(SRSLCompilerTest SRSLCompiler)

