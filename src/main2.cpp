#include <stdio.h>
#include "task2.h"

int main()
{
    unsigned int maxlen;
    unsigned int num = seqCollatz(&maxlen);

    printf("Number is %u, max length is %u\n", num, maxlen);

    return 0;
}