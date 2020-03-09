#include "task6.h"
void fibFromStart(int i, long long* arr, int n)
{
    if (i == n)
        return;
    arr[i] = arr[i - 1] + arr[i - 2];
    fibFromStart(i + 1, arr, n);
}
unsigned long long fib2(int N)
{
    long long * arr = (long long*)malloc(N * sizeof(long long));
    if (N == 0||N==1)
        return 1;
    arr[0] = 1;
    arr[1] = 1;
    fibFromStart(2, arr, N);
    return  arr[N-1];
}