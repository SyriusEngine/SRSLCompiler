#pragma once

#include "../TestInclude.hpp"
#include "../../src/SymbolTable/SymbolTable.hpp"

class TestSymbolTable: public testing::Test{
protected:
    void SetUp() override;

    void TearDown() override;
};