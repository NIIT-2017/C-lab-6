#include <stdio.h>

unsigned int collatz(unsigned long long num, unsigned int i)
{
    if (num == 1)
        return i;
    else if (num % 2 != 0)
        return collatz(3 * num + 1, i + 1);
    else if (num % 2 == 0)
        return collatz(num / 2, i + 1);
}

unsigned int seqCollatz(unsigned int *maxlen)
{
    unsigned int len = 0;
    unsigned long long number = 2;
    for (unsigned long long i = 2; i < 1000000; i++)
    {
        len = collatz(i, 1);
        if (len > *maxlen)
        {
            *maxlen = len;
            number = i;
        }
    }
    printf("Number is %llu, max length is ", number);
    return *maxlen;
}