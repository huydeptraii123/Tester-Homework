#include "gtest/gtest.h"
#include "header/taxiPrice.h"

TEST(airPortPriceFunctionTest, BasicCases) {
    EXPECT_EQ(airPortPrice(0,1), -1); //Test P1
    EXPECT_EQ(airPortPrice(0,1), -1); //Test P2
    EXPECT_EQ(airPortPrice(1,1), 200);//Test P3
}


int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
