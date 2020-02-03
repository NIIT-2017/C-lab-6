#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include "task4.h"

int main()
{
    time_t now;
    time(&now);
    srand(now);
    rand();
    int M = 0, N = 0, sum = 0;
    printf("enter a number ");
    scanf("%d", &M);
    N = pow(2.0, (double)M);
    char* arr = (char*)malloc(N * sizeof(char));
    for (int i = 0; i < N; i++)
        arr[i] = 1 + rand() % 9;
    clock_t begin = clock();
    sum = sumC(arr, N);
    clock_t end = clock();
    printf("\n%f\t %d", (float)(end - begin) / CLOCKS_PER_SEC, sum);
    begin = clock();
    sum = sumR(arr, N);
    end = clock();
    printf("\n%f\t %d", (float)(end - begin) / CLOCKS_PER_SEC, sum); 
    free(arr);
    return 0;
}