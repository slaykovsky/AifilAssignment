//
// Created by Alexey Slaykovsky on 27/12/15.
//

#include <arrayIntervals.h>

std::vector<std::vector<int>> get_intervals(int n, int m)
{
    std::vector<std::vector<int>> result;

    int in_each_part = n / m;
    int not_in_part = n % m;

    int begin_indent = not_in_part / 2;
    int end_indent = n - (not_in_part - begin_indent);

    for (int i = begin_indent; i < end_indent; i += in_each_part)
    {
        std::vector<int> part = {i, (i + in_each_part - 1)};
        result.push_back(part);
    }

    return result;
}

std::string intervals_to_string(std::vector<std::vector<int>> intervals) {
    std::string result;
    for (int i = 0; i < intervals.size(); ++i)
    {
        for (int j = 0; j < intervals[i].size(); ++j)
        {
            result.append(std::to_string(intervals[i][j]));
            result.append(" ");
        }
        result.append("\n");
    }
    return result;
}
