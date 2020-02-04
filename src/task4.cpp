#include "task4.h"
long long sumC(char* arr, int len)
{
long long sum = 0;
for (int i = 0; i < len; i++)
    sum += arr[i];
return sum;
}
long long sumRecursion(char* arr, int left, int right)
{
    int sum = 0;
    if (left == right)
    {
        sum += arr[left];
    }
    else
    {
        sum = sumRecursion(arr, left, (right + left) / 2);
        sum += sumRecursion(arr, (right + left) / 2+1, right);
    }
    return sum;
}
long long sumR(char* arr, int len)
{
    int sum = sumRecursion(arr, 0, len-1);
    return sum;
}