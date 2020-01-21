#include <stdio.h>
#include "task6.h"

unsigned long long innerFib(unsigned long long f1, unsigned long long f2, int N)
{

	if (N==1)
		return f2;
	else
	{
		//N--;
		return innerFib(f2, f1 + f2, --N);
	}
		
}

unsigned long long fib2(int N)
{
	return innerFib(0, 1, N);
}

