#include <stdio.h>

unsigned long long fib1(int N,unsigned long long *x, unsigned long long *y)
{
	unsigned long long z = *x + *y;
	if (N < 2)
    	{
        	return *y;
	}
	else
	{
        	return fib1(N - 1, y, &z);
	}
}

unsigned long long fib2(int N)
{
	int x = 0, y = 1;
	return fib1(N, &x, &y);
}
