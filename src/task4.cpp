#include "task4.h"
#include <stdio.h>
#include <string.h>


long long sumC(char* arr, int len)
{
    int sum = 0;
    for (int i = 0; i < len; i++)
        sum += arr[i];
    return sum;
}


long long sumR(char* arr, int len)
{
    if (len == 1)
        return arr[0];
    else
    {
        int mid = len / 2;
        int sumleft = sumR(arr, len / 2);
        int sumright = sumR(arr + mid, len - mid);
        return (sumleft + sumright);
    }
}