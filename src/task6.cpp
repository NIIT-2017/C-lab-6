#include <stdio.h>
unsigned long long fib1(int fisrtNumber, int secondNumber, int N) 
{
	if (N == 1)
	{
		return secondNumber;
	}
	else 
	{
		return fib1(secondNumber, fisrtNumber + secondNumber, N - 1);
	}
}
unsigned long long fib2(int N)
{
	return fib1(0, 1, N);
}
