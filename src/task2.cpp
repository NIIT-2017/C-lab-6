#include "task2.h"
extern unsigned long long num;
extern unsigned long long nummax;



unsigned int seqCollatz(unsigned int *maxlen)
{
	unsigned int n = 0;
	if ((n = collatz(num)) > *maxlen)
		nummax = num, *maxlen = n;

	return 0;
}

unsigned int collatz(unsigned long long num)
{
	unsigned int n = 1;
	while (num != 1)
	{
		if (num % 2 == 0)
			num = num / 2;
		else num = 3 * num + 1;
		n++;
	}
	return n;
}