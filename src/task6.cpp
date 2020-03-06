#include <stdio.h>

unsigned long long fib1(unsigned long long f1, unsigned long long f2, int N)
{
	if (N == 1)
	{
		return 1;	
	}
	else if (N == 2)
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
	return (fib1(1, 1, N));
} 
