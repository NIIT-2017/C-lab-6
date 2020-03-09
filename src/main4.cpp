#include "task4.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int m;
    printf("Enter M: ");
    scanf("%d", &m);
    int n = pow(2,m);
    char* arr = (char*)malloc(n * sizeof(char));
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 127;
    }
    time_t startTime = clock();
    printf("\nCicle %d", sumC(arr, n));
    printf("\nElapsed time: %d",   clock()-startTime);
    startTime = clock();
    printf("\nRecursion %d", sumR(arr, n-1));
    printf("\nElapsed time: %d",   clock()-startTime);
    free(arr);
    return 0;
}