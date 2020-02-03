#include "task2.h"
#include <stdio.h>

unsigned int seqCollatz(unsigned int* maxlen)
{
    unsigned int length = 0;
    unsigned int maxnumber = 0;
    *maxlen = 0;
    for (int i = 2; i <= 1000000; i++)
    {
        length = collatz(i);
        if (length > * maxlen)
        {
            *maxlen = length;
            maxnumber = i;
        }
    }
    return maxnumber;
}

unsigned int collatz(unsigned long long num)
{
	if (num == 1)
		return 1;
	if (num % 2 == 0)
		return 1 + collatz(num / 2);
	else
		return 1 + collatz(3 * num + 1);
} 
