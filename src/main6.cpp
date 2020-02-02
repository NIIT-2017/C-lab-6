#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task6.h"
#include <time.h>
#define N 40

int main()
{
    FILE* fp;
    fp = fopen("file.xls", "w");
    if (!fp)
    {
        puts("Error!");
        return 1;
    }
    for (int i = 1; i < N + 1; i++)
    {
        clock_t begin = clock();
        fib2(i);
        clock_t end = clock();
        printf("%02d\t %f\n", i, (float)(end - begin));
        fprintf(fp, "%02d\t %f\n", i, (float)(end - begin));
    }
    return 0;
}