#include <stdio.h>
#include "task6.h"

unsigned long long innerFib(unsigned long long f1, unsigned long long f2, int N, int i)
{
	if (i == N-1)
		return f2;
	else
		return innerFib(f2, f1 + f2, N, i + 1);
}

unsigned long long fib2(int N)
{
	return innerFib(0, 1, N, 0);
}

