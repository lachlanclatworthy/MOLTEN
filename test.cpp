// test.cpp

#include <gtest/gtest.h>

TEST(MoltenTest, ClassicAssertions) {
    EXPECT_STRNE("molten", "gather");
    EXPECT_STRNE(22, 2*11);
}
