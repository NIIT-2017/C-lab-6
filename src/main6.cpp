#include "task6.h"
#include <stdio.h>
#include <time.h>

int main()
{
    for (int i = 1; i < 50; i++)
        printf("%d\t%llu\n", i, fib(i));
    
    return 0;
}