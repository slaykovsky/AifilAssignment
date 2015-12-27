//
// Created by Alexey Slaykovsky on 27/12/15.
//

#pragma once

#ifndef AIFILASSIGNMENT_ARRAYINTERVALS_H
#define AIFILASSIGNMENT_ARRAYINTERVALS_H

#include <vector>
#include <iostream>
#include <string>

std::vector<std::vector<int>> get_intervals(int n, int m);

std::string intervals_to_string(std::vector<std::vector<int>> intervals);

#endif //AIFILASSIGNMENT_ARRAYINTERVALS_H
