#include "task2.h"

unsigned int seqCollatz(unsigned int *maxlen)
{
	unsigned long long num;		// value for calculating the Collatz sequence
	unsigned int lenght;		// current sequence lenght
	unsigned long long maxNum;	// value for the maximal Collatz sequence lenght

	for (num = 2; num <= 1000000; num++)
	{
		lenght = collatz(num);
		if (lenght > *maxlen)	// if lenght for the current value is maximal ever...
		{
			*maxlen = lenght;
			maxNum = num;
		}
	}
	return maxNum;
}

unsigned int collatz(unsigned long long num)	// recursive function
{

	if (1 == num)
	{
		return num;
	}
	else if (num % 2 == 0)
		return collatz(num / 2)+1;
	else
		return collatz(3 * num + 1)+1;

}