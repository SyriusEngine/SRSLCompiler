#include "TestBenchmark.hpp"
#include "../src/SymbolTable/SymbolException.hpp"

void TestBenchmark::SetUp() {
    Test::SetUp();
}

void TestBenchmark::TearDown() {
    Test::TearDown();
}

TEST_F(TestBenchmark, Variables1){
    auto vs = createShaderModuleFromFile("./Benchmark/Variables1-vs.srsl");
}

TEST_F(TestBenchmark, VariableRedefinition){
    ASSERT_THROW(createShaderModuleFromFile("./Benchmark/VariableRedefinition-vs.srsl"), SymbolRedefinitionException);
}