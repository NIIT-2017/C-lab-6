#include<stdio.h>
#include"task2.h"


unsigned int collatz(unsigned long long num)
{
	static int count = 0;
	count++;

	if (num == 1)
		return num;

	else if (num % 2 == 0)
		return collatz(num / 2)+1;
	
	else if (num%2!=0)
		return collatz(3 * num + 1)+1;
}

unsigned int seqCollatz(unsigned int *maxlen)
{
	unsigned int len=0;
	unsigned long long num=2;
	*maxlen=0;
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
