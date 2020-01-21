#include <stdio.h>
#include "task2.h"
int count;

unsigned int seqCollatz(unsigned int* maxlen)
{
	*maxlen = 0;
	unsigned int num = 0, maxlennum=0;
	unsigned long long i;
	for (i = 2; i < 1000000; i++)
	{
		count = 0;
		num = collatz(i);
		if (count > (*maxlen))
		{
			*maxlen = count;
			maxlennum = i;
		}
		/*
		if (num > (*maxlen))
		{
			*maxlen = num;
			maxlennum = i;
		}	
		*/
	}
	return maxlennum;
}

unsigned int collatz(unsigned long long num)
{
	count++;
	if (num>1)
		if (num % 2)
			return 1 + collatz(3 * num + 1);
		else
			return 1 + collatz(num / 2);
	else if (num == 1) 
		return 0;
}