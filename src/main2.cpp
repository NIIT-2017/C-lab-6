#include <stdio.h>
#include <math.h>
#include "task2.h"

int main() {
    
    unsigned int maxlen = 0;
    unsigned int number = seqCollatz(&maxlen);

    printf("The longest Sequence of Collatz in the range between 2 - 1000000 looks like: length  - %u,  number - %u.\n", maxlen, number);

  
    return 0;
}