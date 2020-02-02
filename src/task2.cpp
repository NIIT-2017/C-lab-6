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
    static unsigned int count = 0;
    if (num == 1)
    {
        int result = count+1;
        count = 0;
        return result;
    }
    else
    {
        if (num % 2 == 0)
        {
            count++;
            collatz(num / 2);

        }
        else
        {
            count++;
            collatz((3 * num) + 1);
        }
    }
}
