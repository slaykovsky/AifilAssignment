//
// Created by Alexey Slaykovsky on 25/12/15.
//

#include <primes.h>
#include <gtest/gtest.h>

TEST(PrimesTest, NumberShouldBeAPrime)
{
    int test_number = 2017;
    EXPECT_TRUE(is_prime(test_number));
}

TEST(PrimesTest, NumberShouldHavePrimeDivisors)
{
    int test_number = 75;
    std::vector<int> expected = {3, 5, 5};
    std::vector<int> actual = primes(test_number);
    EXPECT_EQ(expected, actual);
}

TEST(PrimesTest, NumbersSouldHavePrimeDivisors)
{
    int test_number = 75;
    std::map<int, std::vector<int>> expected;
    for (int i = 1; i <= test_number; ++i)
    {
        expected[i] = primes(i);
    }
    std::map<int, std::vector<int>> actual = result(test_number);
    EXPECT_EQ(expected, actual);
}