#include "gtest/gtest.h"
#include "header/taxiPrice.h"

TEST(DnFunctionTest, BasicCases) {
    EXPECT_EQ(dn(1), 10); //Test P1
    EXPECT_EQ(dn(5), 42); //Test P2
    EXPECT_EQ(dn(50), 282);//Test P3
}


int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
