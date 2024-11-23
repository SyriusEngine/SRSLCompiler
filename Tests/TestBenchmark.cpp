#include "TestBenchmark.hpp"

void TestBenchmark::SetUp() {
    Test::SetUp();
}

void TestBenchmark::TearDown() {
    Test::TearDown();
}

TEST_F(TestBenchmark, Variables1){
    auto vs = createShaderModuleFromFile("./Benchmark/Variables1-vs.srsl");
}