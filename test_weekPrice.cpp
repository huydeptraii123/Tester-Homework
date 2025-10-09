#include "gtest/gtest.h"
#include "header/taxiPrice.h"

TEST(weekPriceTest, BasicCases) {
    EXPECT_EQ(weekPrice(500, 1), 4500); //Test P1
    EXPECT_EQ(weekPrice(1000, 1), 6000); //Test P2
}


int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
