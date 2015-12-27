//
// Created by Alexey Slaykovsky on 25/12/15.
//

#pragma once

#ifndef AIFILASSIGNMENT_PRIMES_H
#define AIFILASSIGNMENT_PRIMES_H

#include <vector>
#include <map>

bool is_prime(int n);

std::vector<int> primes(int n);

std::map<int, std::vector<int>> result(int n);

#endif //AIFILASSIGNMENT_PRIMES_H
