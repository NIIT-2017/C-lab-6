#include "task6.h"

unsigned long long fib1(int N)
{
	extern unsigned long long arr[41];

	if (arr[N] != 0)
		return arr[N];		// if we already have N-value, return it
	else
	{
		arr[N]=fib2(N);		// else go to fib2 and put new value to arr
		return arr[N];
	}

}

unsigned long long fib2(int N)
{
	if (0 == N)				
		return 0;
	else if (1 == N)
		return 1;
	else
		return fib1(N - 2) + fib1(N - 1);
}