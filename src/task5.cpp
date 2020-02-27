#include<stdio.h>
#include "task5.h"

unsigned long long fib1(int N)
{
	if (N <= 1)
		return N;
	else
		return fib1(N - 1) + fib1(N - 2);
}