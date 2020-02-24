//Clab6 task2

#include "task2.h"

unsigned int seqCollatz(unsigned int* maxlen)
{
	*maxlen = 0;
	unsigned int length;
	unsigned long long maxNum;

	for (unsigned long long n = 2; n < 1000000; n++)
	{
		length = collatz(n);

		if (length > *maxlen)
		{
			*maxlen = length;
			maxNum = n;
		}
	}
	return maxNum;
}

unsigned int collatz(unsigned long long num)
{	
	if (num == 1)
	{
		return 1;
	}

	else if (num % 2)
	{
		return collatz(num * 3 + 1) + 1;
	}
	
	else
	{
		return collatz(num / 2) + 1;
	}
}