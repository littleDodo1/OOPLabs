#include <gtest/gtest.h>
#include "../include/is_valid.h"

TEST(IsValidTest, EmptyString) {
    EXPECT_TRUE(is_valid(""));
}

TEST(IsValidTest, Valid) {
    EXPECT_TRUE(is_valid("(())"));
    EXPECT_TRUE(is_valid("(()())"));
    EXPECT_TRUE(is_valid("((()()))"));
    EXPECT_TRUE(is_valid("((()())(()))"));
    EXPECT_TRUE(is_valid("((((()))))"));
    EXPECT_TRUE(is_valid("()()()()()()()()()"));
}

TEST(IsValidTest, Invalid) {
    EXPECT_FALSE(is_valid("("));
    EXPECT_FALSE(is_valid(")"));
    EXPECT_FALSE(is_valid(")("));
    EXPECT_FALSE(is_valid("())("));
    EXPECT_FALSE(is_valid(")))((("));
    EXPECT_FALSE(is_valid("())"));
    EXPECT_FALSE(is_valid("()))"));
    EXPECT_FALSE(is_valid("()())"));
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}