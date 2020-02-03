#include <stdio.h>
#include "task2.h"

int main()
{
    unsigned int maxlen = 0;
    unsigned int * p = &maxlen;
    unsigned int num = seqCollatz(p);

    printf("Number is %u, max length is %u\n", num, maxlen);

    return 0;
}