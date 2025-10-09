#include "gtest/gtest.h"
#include "header/taxiPrice.h"

TEST(DfFunctionTest, BasicCases) {
    EXPECT_EQ(df(5), 60); //Test P1
    EXPECT_EQ(df(20), 220); //Test P2
    EXPECT_EQ(df(100), 884);//Test P3
}


int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
