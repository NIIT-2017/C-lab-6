#include "task2.h"
#include <stdio.h>

int main()
{
    unsigned int maxlen = 0;
    unsigned int* p = &maxlen;
    unsigned int number = seqCollatz(p);

    printf("%u - %u\n", number, maxlen);

    return 0;
}