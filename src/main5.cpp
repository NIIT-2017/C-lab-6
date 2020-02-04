#include "task5.h"
#include <stdio.h>
#include <time.h>
int main()
{
    FILE* file = fopen("FibOutput.txt", "w");
    for (int i = 1; i <= 40; i++)
    {
        time_t start = clock();
        unsigned long long int fibResult = fib1(i);
        time_t elapsedTime = clock() - start;
        fprintf(file, "%d %llu %d\n", i, fibResult, elapsedTime);
    }
    return 0;
}