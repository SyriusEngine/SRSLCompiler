#include "SymbolTableTest.hpp"
#include "../../src/SymbolTable/SymbolException.hpp"

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

TEST_F(SymbolTableTest, AddSymbol){
    auto table = createPtr<SymbolTable>("table1");

    SymbolType type1("float4");
    auto symbol1 = createSymbolDefault("symbol1", type1);

    table->addSymbol(symbol1);

    EXPECT_TRUE(table->hasSymbol("symbol1"));
}

TEST_F(SymbolTableTest, CheckNonExistentSymbol){
    auto table = createPtr<SymbolTable>("table1");

    EXPECT_FALSE(table->hasSymbol("symbol1"));
}

TEST_F(SymbolTableTest, AddExistingSymbol){
    auto table = createPtr<SymbolTable>("table1");

    SymbolType type1("float4");
    auto symbol1 = createSymbolDefault("symbol1", type1);

    table->addSymbol(symbol1);

    bool thrown = false;
    try{
        table->addSymbol(symbol1);
    }
    catch(SymbolRedefinitionException& e){
        thrown = true;
    }
    EXPECT_TRUE(thrown);
}

TEST_F(SymbolTableTest, CheckSymbolInParent){
    auto table1 = createPtr<SymbolTable>("table1");
    auto table2 = table1->addChild("table2");

    SymbolType type1("float4");
    auto symbol1 = createSymbolDefault("symbol1", type1);

    table1->addSymbol(symbol1);

    EXPECT_TRUE(table2->hasSymbol("symbol1"));
}

TEST_F(SymbolTableTest, GetSymbol){
    auto table = createPtr<SymbolTable>("table1");

    SymbolType type1("float4");
    auto symbol1 = createSymbolDefault("symbol1", type1);

    table->addSymbol(symbol1);

    auto symbol = table->getSymbol("symbol1");

    EXPECT_EQ(symbol.name, "symbol1");
}

TEST_F(SymbolTableTest, GetSymbolFromParent){
    auto table1 = createPtr<SymbolTable>("table1");
    auto table2 = table1->addChild("table2");

    SymbolType type1("float4");
    auto symbol1 = createSymbolDefault("symbol1", type1);

    table1->addSymbol(symbol1);

    auto symbol = table2->getSymbol("symbol1");

    EXPECT_EQ(symbol.name, "symbol1");
}

TEST_F(SymbolTableTest, GetNonExistentSymbol){
    auto table = createPtr<SymbolTable>("table1");

    bool thrown = false;
    try{
        table->getSymbol("symbol1");
    }
    catch(SymbolUndefinedException& e){
        thrown = true;
    }
    EXPECT_TRUE(thrown);
}