#include <iostream>
#include "IsKPeriodic.h"

bool IsKPeriodic(std::string & str, int K)
{
    if (K <= 0)
    {
        return false;
    }
    int size = str.size();
    if (size % K != 0 || K == size)
    {
        return false;
    }
    int subStringSum = 0;
    int stringSum = 0;
    for (int i = 0; i < K; i++)
    {
        subStringSum += (int)str[i];
    }
    for (int i = K; i < size; i++)
    {
        stringSum += (int)str[i];
    }
    if (stringSum % subStringSum == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}