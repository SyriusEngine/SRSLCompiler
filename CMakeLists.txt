cmake_minimum_required(VERSION 3.16)

project(SRSLCompiler)

set(CMAKE_CXX_STANDARD 17)

add_compile_definitions(SRSL_DEBUG)
add_compile_definitions(SRSL_EXPORT_DLL)

add_subdirectory(./src/antlr4/)

include_directories(src/antlr4/runtime/src/)
set(SRSL_DEPENDENCIES_DLL
    ${CMAKE_CURRENT_BINARY_DIR}/src/antlr4/runtime/libantlr4-runtime.dll
)

add_custom_target(CopySRSLCompiler4DLL ALL
    COMMAND ${CMAKE_COMMAND} -E copy_if_different ${SRSL_DEPENDENCIES_DLL} ${CMAKE_CURRENT_BINARY_DIR}
    DEPENDS ${SRSL_DEPENDENCIES_DLL}
    COMMENT "Copying DLLs to build tree")
add_dependencies(CopySRSLCompiler4DLL antlr4_shared)

link_directories(${CMAKE_CURRENT_BINARY_DIR}/src/antlr4/runtime/)


set(ANTLR4_SRC
    src/antlr4/runtime/src/SrslGrammarBaseListener.cpp
    src/antlr4/runtime/src/SrslGrammarLexer.cpp
    src/antlr4/runtime/src/SrslGrammarListener.cpp
    src/antlr4/runtime/src/SrslGrammarParser.cpp)

set(SRSL_AST_SRC
    )

set(SRSL_SYMBOL_TABLE_SRC
    src/SymbolTable/SymbolTable.cpp
    src/SymbolTable/SymbolType.cpp
    src/SymbolTable/Symbol.cpp src/SymbolTable/Symbol.hpp)

set(SRSL_UTILS_SRC
    src/Utils/Exception.cpp
    src/Utils/Utils.cpp
    src/Utils/Memory.cpp
)

set(SRSL_SRC
    ${ANTLR4_SRC}
    ${SRSL_AST_SRC}
    ${SRSL_UTILS_SRC}
    ${SRSL_SYMBOL_TABLE_SRC}

    src/SrslCompiler.cpp
    src/ShaderModuleImpl.cpp
    src/ShaderProgramImpl.cpp
    src/ParseExceptionHandler.cpp
    src/TreeWalker.cpp
    src/ShaderModule.cpp
    src/ShaderProgram.cpp
    src/ProgramInfo.cpp)

add_library(SRSLCompiler SHARED ${SRSL_SRC})
set(SRSLCOMPILER_LIBRARIES antlr4-runtime)

target_link_libraries(SRSLCompiler ${SRSLCOMPILER_LIBRARIES})
add_dependencies(SRSLCompiler CopySRSLCompiler4DLL)

################################ Development Executable ################################

include_directories(./include/)
link_directories(./cmake-build-debug/)

add_executable(SRSLCompilerDev main.cpp)
target_link_libraries(SRSLCompilerDev -lSRSLCompiler)
add_dependencies(SRSLCompilerDev SRSLCompiler)

################################ benchmark Executable ################################

add_executable(SRSLCompilerBenchmark Benchmark.cpp)
target_link_libraries(SRSLCompilerBenchmark -lSRSLCompiler)
add_dependencies(SRSLCompilerBenchmark SRSLCompiler)

################################ Test Executable ################################
include_directories(./Dependencies/gtest/include/)
link_directories(./Dependencies/gtest/lib/)

set(SRSL_COMPILER_TEST_SRC
    Tests/SymbolTableTest.cpp Tests/SymbolTableTest.hpp)

add_executable(SRSLCompilerTest ${SRSL_COMPILER_TEST_SRC} ${SRSL_SRC} TestMain.cpp)
add_dependencies(SRSLCompilerTest CopySRSLCompiler4DLL)

if (MSVC)
    target_link_libraries(SRSLCompilerTest ${SRSLCOMPILER_LIBRARIES} gtest)
else()
    target_link_libraries(SRSLCompilerTest ${SRSLCOMPILER_LIBRARIES} -lgtest)
endif()
