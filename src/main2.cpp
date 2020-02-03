#include "task2.h"
#include <stdio.h>

int main()
{
    unsigned int maxlen = 0;
    int maxnumber = seqCollatz(&maxlen);
    printf("max Collatz's sequense is from the number %d\n Its length is %d", maxnumber, maxlen); 
    return 0;
}