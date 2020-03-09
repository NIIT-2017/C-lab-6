#include "task4.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MIN 1
#define MAX 10

int main()
{
    srand(time(NULL));
    
    int m;

    printf("Enter a number:\n");
    scanf("%d", &m);

    int n = pow(2, m);
    char * arr = (char *)malloc(n * sizeof(char));

    if (!arr)
    {
        puts("Memory allocation error!\n");
        return 1;
    }

    generate(arr, n, MIN, MAX);

    clock_t begin1 = clock();
    long long sum_c = sumC(arr, n);
    clock_t end1 = clock();
    float time_c = (float)(end1 - begin1) / CLOCKS_PER_SEC;

    clock_t begin2 = clock();
    long long sum_r = sumR(arr, n);
    clock_t end2 = clock();
    float time_r = (float)(end2 - begin2) / CLOCKS_PER_SEC;

    printf("SumC = %llu, time_c = %.5f\nSumR = %llu, time_r = %.5f\n",
            sum_c, time_c, sum_r, time_r);

    free(arr);

    return 0;
}