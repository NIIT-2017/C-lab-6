#include "task6.h"
typedef unsigned long long ULL;

ULL fib_iter(ULL num1, ULL num2, int N)
{
    if (N == 1)
        return num2;
    else
        return fib_iter(num2, num1 + num2, N - 1);
}

unsigned long long fib2(int N)
{
    return fib_iter(0, 1, N);
}
