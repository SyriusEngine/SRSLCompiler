#include "SymbolTableTest.hpp"

void SymbolTableTest::SetUp() {
    Test::SetUp();
}

void SymbolTableTest::TearDown() {
    Test::TearDown();
}

TEST_F(SymbolTableTest, SymbolClassConversionTest){
    EXPECT_EQ(symbolClassToString(SC_DEFAULT), "default");
    EXPECT_EQ(symbolClassToString(SC_VARIABLE), "variable");
    EXPECT_EQ(symbolClassToString(SC_FUNCTION), "function");
    EXPECT_EQ(symbolClassToString(SC_STRUCT), "struct");
    EXPECT_EQ(symbolClassToString(SC_SHADER_INTERFACE), "shader interface");
    EXPECT_EQ(symbolClassToString(SC_CONSTANT_BUFFER), "constant buffer");
    EXPECT_EQ(symbolClassToString(SC_TEXTURE), "texture");
    EXPECT_EQ(symbolClassToString(SC_SAMPLER), "sampler");
    EXPECT_EQ(symbolClassToString(SC_VECTOR_SWIZZLE), "vector swizzle");
    EXPECT_EQ(symbolClassToString((SYMBOL_CLASS)0xFF09), "unknown");
}