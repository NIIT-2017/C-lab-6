// Clab6 task6

#include "task6.h"

unsigned long long arr[SIZE] = { 0 };

unsigned long long fib2(int N)
{
	if (N == 1 || N == 2)
	{
		arr[N] = 1;
		return arr[N];
	}

	else if (arr[N] != 0)
	{
		return arr[N];
	}
	   
	else
	{
		arr[N] = fib2(N - 1) + fib2(N - 2);
		return arr[N];
	}
}