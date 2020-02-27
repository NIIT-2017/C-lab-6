#include<stdio.h>
#include"task2.h"


unsigned int collatz(unsigned long long num)
{
	static unsigned int count = 0;
	count++;
	unsigned int len;

	if (num == 1)
	{
		len = count;
		count = 0;
		return len;
	}

	else if (num % 2 == 0)
		return collatz(num / 2);
	
	else //if num%2!=0
		return collatz(3 * num + 1);
}

unsigned int seqCollatz(unsigned int *maxlen)
{
	unsigned int len;
	unsigned long long num;
	for (unsigned long long i = 2; i < 1000000; i++)
	{
		len=collatz(i);
		if (len > *maxlen)
		{
			*maxlen = len;
			num = i;
		}
	}

	return num;  //unsigned int, but not unsigned long long
}