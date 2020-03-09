#include "task2.h"
#include <stdio.h>
int main()
{
    unsigned int value;
    printf("%d",seqCollatz(&value));
    printf("\n%d", value);
    return 0;
}