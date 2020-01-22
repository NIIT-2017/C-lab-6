#include "task5.h"
#include <stdio.h>
#include <time.h>

#define N 50

int main()
{    
    float time_f;
    unsigned long long num;

    FILE * fp;
    fp = fopen("fib1.txt", "w");

    if (fp == NULL)
    {
        puts("File open error!");
        return 1;
    }

    for (int i = 1; i < N; i++)
    {
        clock_t begin = clock();
        num = fib1(i);
        clock_t end = clock();
        time_f = (float)(end - begin) / CLOCKS_PER_SEC;
        printf("%d\t%llu\t%.5f\n", i, num, time_f);
        fprintf(fp, "%d\t%llu\t%.5f\n", i, num, time_f);
    }
    
    fclose(fp);

    return 0;
}