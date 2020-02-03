#include <stdio.h>

unsigned int collatz(unsigned long long num)
{
    static int count = 0;
    count++;
    if (num == 1)
        return num;
    else if (num % 2 != 0)
        return collatz(3 * num + 1) + 1;
    else if (num % 2 == 0)
        return collatz(num / 2) + 1;
    return count;
}

unsigned int seqCollatz(unsigned int *maxlen)
{
    *maxlen = 0;
    unsigned int len = 0;
    unsigned long long number = 2;
    for (unsigned long long i = 2; i < 1000000; i++)
    {
        len = collatz(i);
        if (len > *maxlen)
        {
            *maxlen = len;
            number = i;
        }
    }
    return number;
}