#include "TestSymbolTable.hpp"
#include "../../src/SymbolTable/SymbolException.hpp"

void TestSymbolTable::SetUp() {
    Test::SetUp();
}

void TestSymbolTable::TearDown() {
    Test::TearDown();
}

TEST_F(TestSymbolTable, SymbolClassConversionTest){
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

TEST_F(TestSymbolTable, AddSymbol){
    auto table = createPtr<SymbolTable>("table1");

    SymbolType type1("float4");
    Symbol symbol1("symbol1", type1);

    table->addSymbol(symbol1);

    EXPECT_TRUE(table->hasSymbol("symbol1"));
}

TEST_F(TestSymbolTable, CheckNonExistentSymbol){
    auto table = createPtr<SymbolTable>("table1");

    EXPECT_FALSE(table->hasSymbol("symbol1"));
}

TEST_F(TestSymbolTable, AddExistingSymbol){
    auto table = createPtr<SymbolTable>("table1");

    SymbolType type1("float4");
    Symbol symbol1("symbol1", type1);

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

TEST_F(TestSymbolTable, CheckSymbolInParent){
    auto table1 = createPtr<SymbolTable>("table1");
    auto& table2 = table1->addChild("table2");

    SymbolType type1("float4");
    Symbol symbol1("symbol1", type1);

    table1->addSymbol(symbol1);

    EXPECT_TRUE(table2->hasSymbol("symbol1"));
}

TEST_F(TestSymbolTable, GetSymbol){
    auto table = createPtr<SymbolTable>("table1");

    SymbolType type1("float4");
    Symbol symbol1("symbol1", type1);

    table->addSymbol(symbol1);

    auto symbol = table->getSymbol("symbol1");

    EXPECT_EQ(symbol.name, "symbol1");
}

TEST_F(TestSymbolTable, GetSymbolFromParent){
    auto table1 = createPtr<SymbolTable>("table1");
    auto& table2 = table1->addChild("table2");

    SymbolType type1("float4");
    Symbol symbol1("symbol1", type1);

    table1->addSymbol(symbol1);

    auto symbol = table2->getSymbol("symbol1");

    EXPECT_EQ(symbol.name, "symbol1");
}

TEST_F(TestSymbolTable, GetNonExistentSymbol){
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