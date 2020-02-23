#include <stdio.h>

unsigned long long fib1(int f1, int f2, int N)
{
	if (N == 1) 
	{
		return f2;
	}
	else 
	{
		return fib1(f2, f2 + f1, N - 1);
	}
}


unsigned long long fib2(int N) 
{
	return fib1(0, 1, N);
}