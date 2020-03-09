#include <stdlib.h>

int pow(int x, int n)
{
    int res = 1;

    for (int i = 0; i < n; i++)
        res *= x;

    return res;
}

void generate(char * arr, int len, int min, int max)
{
    for (int i = 0; i < len; i++)
        arr[i] = min + rand() % (max - min + 1);
}

long long sumC(char *arr, int len)
{
    int sum = 0;
    for (int i = 0; i < len; i++)
        sum += arr[i];
    return sum;
}

long long sumR(char *arr, int len)
{
    if (len == 1)
        return arr[0];
    else
        return sumR(arr, len / 2) + sumR(arr + len / 2, len - len / 2);
}