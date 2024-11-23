#pragma once

#include "TestInclude.hpp"
#include "../include/SrslCompiler/SrslCompiler.hpp"

class TestBenchmark: public testing::Test{
protected:
    void SetUp() override;

    void TearDown() override;
};