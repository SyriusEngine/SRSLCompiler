#include "TestSymbolType.hpp"

void TestSymbolType::SetUp() {
    Test::SetUp();
}

void TestSymbolType::TearDown() {
    Test::TearDown();
}

static std::vector<std::string> TYPES = {"bool", "int", "uint", "half", "float", "double"};
static std::vector<VARIABLE_TYPE> EXPECTED_TYPES = {VT_BOOL, VT_INT, VT_UINT, VT_HALF, VT_FLOAT, VT_DOUBLE};

TEST_F(TestSymbolType, NonConstBaseTypes){
    for (u32 i = 0; i < TYPES.size(); i++) {
        SymbolType st(TYPES[i], false, {});
        EXPECT_EQ(st.getVariableType(), EXPECTED_TYPES[i]);
        EXPECT_EQ(st.getDimensionType(), DT_NONE);
        EXPECT_EQ(st.getArraySizes().size(), 0);
        EXPECT_FALSE(st.isConst());
    }
}

TEST_F(TestSymbolType, ConstBaseTypes) {
    for (u32 i = 0; i < TYPES.size(); i++) {
        SymbolType st(TYPES[i], true, {});
        EXPECT_EQ(st.getVariableType(), EXPECTED_TYPES[i]);
        EXPECT_EQ(st.getDimensionType(), DT_NONE);
        EXPECT_EQ(st.getArraySizes().size(), 0);
        EXPECT_TRUE(st.isConst());
    }
}

TEST_F(TestSymbolType, ArrayBaseTypes){
    for (u32 i = 0; i < TYPES.size(); i++) {
        SymbolType st(TYPES[i], true, {i + 1});
        EXPECT_EQ(st.getVariableType(), EXPECTED_TYPES[i]);
        EXPECT_EQ(st.getDimensionType(), DT_NONE);
        EXPECT_EQ(st.getArraySizes().size(), 1);
        EXPECT_EQ(st.getArraySizes()[0], i + 1);
        EXPECT_TRUE(st.isConst());
    }
}

TEST_F(TestSymbolType, VectorTypes){
    for (u32 i = 0; i < TYPES.size(); i++){
        auto vectorSize = (i % 3) + 2; // Discard samples such as float1, bool1, etc.
        SymbolType st(TYPES[i] + std::to_string(vectorSize), false, {});
        EXPECT_EQ(st.getVariableType(), EXPECTED_TYPES[i]);
        EXPECT_EQ(st.getDimensionType(), DT_VECTOR);
        EXPECT_EQ(st.getArraySizes().size(), 1);
        EXPECT_EQ(st.getArraySizes()[0], vectorSize);
    }
}

TEST_F(TestSymbolType, ArrayVectorTypes){
    for (u32 i = 0; i < TYPES.size(); i++){
        auto vectorSize = (i % 3) + 2; // Discard samples such as float1, bool1, etc.
        SymbolType st(TYPES[i] + std::to_string(vectorSize), true, {i + 1});
        EXPECT_EQ(st.getVariableType(), EXPECTED_TYPES[i]);
        EXPECT_EQ(st.getDimensionType(), DT_VECTOR);
        EXPECT_EQ(st.getArraySizes().size(), 2);
        EXPECT_EQ(st.getArraySizes()[0], i + 1);
        EXPECT_EQ(st.getArraySizes()[1], vectorSize);
    }
}

TEST_F(TestSymbolType, MatrixTypes){
    for (u32 i = 0; i < TYPES.size(); i++){
        auto rows = (i % 3) + 2;
        auto columns = (i % 3) + 2;
        SymbolType st(TYPES[i] + std::to_string(rows) + "x" + std::to_string(columns), false, {});
        EXPECT_EQ(st.getVariableType(), EXPECTED_TYPES[i]);
        EXPECT_EQ(st.getDimensionType(), DT_MATRIX);
        EXPECT_EQ(st.getArraySizes().size(), 2);
        EXPECT_EQ(st.getArraySizes()[0], rows);
        EXPECT_EQ(st.getArraySizes()[1], columns);
    }
}

TEST_F(TestSymbolType, ArrayMatrixTypes){
    for (u32 i = 0; i < TYPES.size(); i++){
        auto rows = (i % 3) + 2;
        auto columns = (i % 3) + 2;
        SymbolType st(TYPES[i] + std::to_string(rows) + "x" + std::to_string(columns), true, {i + 1});
        EXPECT_EQ(st.getVariableType(), EXPECTED_TYPES[i]);
        EXPECT_EQ(st.getDimensionType(), DT_MATRIX);
        EXPECT_EQ(st.getArraySizes().size(), 3);
        EXPECT_EQ(st.getArraySizes()[0], i + 1);
        EXPECT_EQ(st.getArraySizes()[1], rows);
        EXPECT_EQ(st.getArraySizes()[2], columns);
    }
}


