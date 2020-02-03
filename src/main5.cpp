#include "task5.h"
#include <stdio.h>
#include <time.h>
#define N 40

int main()
{
    FILE* fp = NULL;
    unsigned long long value = 0;
    clock_t time = 0;
    float ftime = 0;
    if ((fp = fopen("Result.txt", "wt")) == NULL)
        return 1;

    for (int i = 1; i <= N; i++)
    {
        time = clock();
        value = fib1(i);
        time = clock() - time;
        ftime = (float)time / CLOCKS_PER_SEC;
        printf("Number %2i, value %10llu, time %f\n", i, value, ftime);
        fprintf(fp, "%i %llu %f\n", i, value, ftime);
    }

    fclose(fp);

    return 0;
}