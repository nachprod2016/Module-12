#include <iostream>
#include "IsKPeriodic.h"

bool IsKPeriodic(std::string & str, int K)
{
    if (K <= 0)
    {
        return false;
    }
    int size = str.size();
    if (size % K != 0)
    {
        return false;
    }
    if (K == size)
    {
        return false;
    }
    bool flag = true;
    char* buffer = new char[K + 1];
    for (int i = 0; i < size; i++)
    {
        buffer[i] = str[i];
    }
    buffer[K] = '\0';
    for (int i = K; i < size; i += K)
    {
        for (int j = 0; j < K; j++)
        {
            if (buffer[j] != str[i + j])
            {
                flag = false;
                i = size;
                break;
            }
        }
    }
    delete[] buffer;
    return flag;
}
