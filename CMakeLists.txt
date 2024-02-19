cmake_minimum_required(VERSION 3.16)

project(SRSLCompiler)

set(CMAKE_CXX_STANDARD 17)

add_compile_definitions(SRSL_EXPORT_DLL)

include_directories(src/Grammar/)
if (WIN32)
    link_directories(Dependencies/antlr4/WIN32/lib/)
    link_directories(Dependencies/antlr4/WIN32/bin/)

    link_directories(Dependencies/glslang/lib/)

    file(GLOB ANTLR_RUNTIME_DLL "./Dependencies/antlr4/WIN32/bin/*.dll")
    file(COPY ${ANTLR_RUNTIME_DLL} DESTINATION ${CMAKE_CURRENT_BINARY_DIR})

elseif (UNIX)
    message("Linux not supported")
endif ()

set(ANTLR4_SRC
    src/Grammar/SrslGrammarBaseListener.cpp
    src/Grammar/SrslGrammarLexer.cpp
    src/Grammar/SrslGrammarListener.cpp
    src/Grammar/SrslGrammarParser.cpp)

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
    src/AbstractSyntaxTree/TestCaseNode.cpp
    src/AbstractSyntaxTree/ScopeNode.cpp
    src/AbstractSyntaxTree/ExpressionNode.cpp
    src/AbstractSyntaxTree/ShaderStorageBufferNode.cpp
    src/AbstractSyntaxTree/ShaderStorageBufferNode.hpp
    src/AbstractSyntaxTree/Internal/TestEvaluationNode.cpp
    src/AbstractSyntaxTree/Internal/TestEvaluationNode.hpp)

set(CONVERTER_SRC
    src/Converter/VariableTypes.cpp
    )

set(SYMBOL_TABLE_SRC
    src/SymbolTable/Symbol.cpp
    src/SymbolTable/SymbolTable.cpp
    src/SymbolTable/Validator.cpp
    src/SymbolTable/TestCodeGenerator.cpp
    src/SymbolTable/TestCodeGenerator.hpp)

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
    src/TreeWalker.cpp src/TreeWalker.hpp)

add_library(SRSLCompiler SHARED ${SRSL_SRC})
target_link_libraries(SRSLCompiler antlr4-runtime)

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

