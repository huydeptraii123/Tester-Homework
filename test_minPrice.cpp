#include "gtest/gtest.h"
#include "header/taxiPrice.h"

TEST(minPriceFunctionTest, BasicCases) {
    EXPECT_EQ(minPrice('a', 1), false); //Test P1
    EXPECT_EQ(minPrice('b', 1), false); //Test P2
    EXPECT_EQ(minPrice('a', 20), true);//Test P3
}


int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
