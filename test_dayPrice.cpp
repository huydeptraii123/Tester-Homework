#include "gtest/gtest.h"
#include "header/taxiPrice.h"

TEST(dayPriceTest, BasicCases) {
    EXPECT_EQ(dayPrice(50, 2), 1600); //Test P1
    EXPECT_EQ(dayPrice(300, 1), 1800); //Test P2
}


int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
