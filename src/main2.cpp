#include <stdio.h>
#include "task2.h"

int main()
{
    unsigned int maxlen = 0;
    
    printf("%u\n", seqCollatz(&maxlen));

    return 0;
}