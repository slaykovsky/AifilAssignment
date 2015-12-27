//
// Created by Alexey Slaykovsky on 25/12/15.
//

#include "primes.h"

bool is_prime(int n)
{
    if (n == 1 || n == 2)
        return true;
    for (int i = 2; i * i <= n; ++i)
    {
        if (n  % i == 0)
            return false;
    }
    return true;
}

std::vector<int> primes(int n)
{
    std::vector<int> result;
    int factor = 2;
    while(n > 1)
    {
        if (is_prime(factor) && n % factor == 0)
        {
            n /= factor;
            result.push_back(factor);
        }
        else {
            ++factor;
        }
    }
    return result;
}

std::map<int, std::vector<int>> result(int n)
{
    std::map<int, std::vector<int>> result;
    for (int i = 1; i <= n; ++i)
    {
        result[i] = primes(i);
    }
    return result;
}