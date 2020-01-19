#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
#include "task4.h"

int main()
{
    srand(time(NULL));
    int size = 0;
    long long sum = 0;
    char* arr = NULL;
    char* carr = NULL;
    printf("Enter a size of array\n");
    scanf("%i", &size);
    size = (int)pow(2.0, size);
    arr = (char*)malloc(size * sizeof(char));
    if (arr == NULL)
    {
        printf("malloc error!");
        return 1;
    }
    else
        printf("Ok\n");
    carr = arr;

    for (int i = 0; carr != NULL && i < size; i++)
        carr[i] = rand() % 10;

   /* for (int i = 0; arr != NULL && i < size; i++)
        printf("%i ", arr[i]);
    printf("\n");*/

    clock_t timeÑ = clock();
    sum = sumC(carr, size);
    timeÑ = clock() - timeÑ;
    printf("sumC = %lli, timeC = %f\n", sum, (float)timeÑ / CLOCKS_PER_SEC);
    
    clock_t timeR = clock();
    sum = sumR(carr, size);
    timeR = clock() - timeR;
    printf("sumR = %lli, timeR = %f\n", sum, (float)timeR / CLOCKS_PER_SEC);

    free(arr);

    printf("%d\n", size);
    

    return 0;
}