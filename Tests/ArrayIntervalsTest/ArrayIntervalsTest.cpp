//
// Created by Alexey Slaykovsky on 27/12/15.
//

#include <gtest/gtest.h>
#include <arrayIntervals.h>

TEST(ArrayIntervalsTest, ShouldReturnIntervals)
{
    std::string expected = "0 1 \n2 3 \n4 5 \n6 7 \n8 9 \n";
    int n = 10;
    int m = 5;
    std::vector<std::vector<int>> intervals = get_intervals(n, m);
    std::string actual = intervals_to_string(intervals);
    EXPECT_EQ(expected, actual);
}

