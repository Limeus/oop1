#include <gtest/gtest.h>
#include <string>
#include "solution.cpp"


// Тесты для функции swapAB
TEST(SwapABTest, EmptyString
) {
// Пустая строка
    std::string input = "";
    std::string expected = "";
    EXPECT_EQ(swapAB(input), expected
    );
}

TEST(SwapABTest, OnlyA
) {
// Строка, содержащая только 'a'
    std::string input = "aaaa";
    std::string expected = "bbbb";
    EXPECT_EQ(swapAB(input), expected
    );
}

TEST(SwapABTest, OnlyB
) {
// Строка, содержащая только 'b'
    std::string input = "bbbb";
    std::string expected = "aaaa";
    EXPECT_EQ(swapAB(input), expected
    );
}

TEST(SwapABTest, MixedABC
) {
// Смешанная строка с 'a', 'b' и 'c'
    std::string input = "aabacbaa";
    std::string expected = "bbabcabb";
    EXPECT_EQ(swapAB(input), expected
    );
}

TEST(SwapABTest, NoChanges
) {
// Строка, содержащая только 'c'
    std::string input = "ccc";
    std::string expected = "ccc";
    EXPECT_EQ(swapAB(input), expected
    );
}

TEST(SwapABTest, ComplexMixed
) {
// Более сложная строка
    std::string input = "abcabcabc";
    std::string expected = "bacbacbac";
    EXPECT_EQ(swapAB(input), expected
    );
}


