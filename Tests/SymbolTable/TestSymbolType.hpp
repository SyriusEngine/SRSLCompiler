#pragma once

#include "../TestInclude.hpp"
#include "../../src/SymbolTable/SymbolType.hpp"

class TestSymbolType: public testing::Test{
protected:
    void SetUp() override;

    void TearDown() override;
};