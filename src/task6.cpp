#include<stdio.h>
#include "task6.h"

unsigned long long fib_from_bottom(unsigned long long a, unsigned long long b, int N)
{
	if (N == 1)
		return b;

	else //if N!=1
		return fib_from_bottom(b,a+b, N-1);
}

unsigned long long fib2(int N)
{
		return fib_from_bottom(0,1,N);
}

