#include <gtest/gtest.h>
#include <string>
#include "solution.cpp"


TEST(SwapABTest, EmptyString
) {
    std::string input = "";
    std::string expected = "";
    EXPECT_EQ(swapAB(input), expected
    );
}

TEST(SwapABTest, OnlyA
) {
    std::string input = "aaaa";
    std::string expected = "bbbb";
    EXPECT_EQ(swapAB(input), expected
    );
}

TEST(SwapABTest, OnlyB
) {
    std::string input = "bbbb";
    std::string expected = "aaaa";
    EXPECT_EQ(swapAB(input), expected
    );
}

TEST(SwapABTest, MixedABC
) {
    std::string input = "aabacbaa";
    std::string expected = "bbabcabb";
    EXPECT_EQ(swapAB(input), expected
    );
}

TEST(SwapABTest, NoChanges
) {
    std::string input = "ccc";
    std::string expected = "ccc";
    EXPECT_EQ(swapAB(input), expected
    );
}

TEST(SwapABTest, ComplexMixed
) {
    std::string input = "abcabcabc";
    std::string expected = "bacbacbac";
    EXPECT_EQ(swapAB(input), expected
    );
}


