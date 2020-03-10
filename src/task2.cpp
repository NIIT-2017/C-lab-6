#include "task2.h"

unsigned int collatz(unsigned long long num)
{
	if (num == 1)
		return 1;
	if (num % 2 == 0)
		return 1 + collatz(num / 2);
	else
		return 1 + collatz(3 * num + 1);
}

unsigned int seqCollatz(unsigned int* maxlen)
{
	unsigned int len = 0, maxnum = 0;
	*maxlen = 0;

	for (int i = 2; i <= SIZE; i++)
	{
		len = collatz(i);
		if (len > * maxlen)
		{
			*maxlen = len;
			maxnum = i;
		}
	}

	return maxnum;
}
