#define _CRT_SECURE_NO_WARNINGS

#include "task1.h"
#include <stdio.h>


int main()
{
    int x = M / 2 + 1;
    int y = M / 2 + 1;
    int size = 0;
    printf("Enter the size\n");
    scanf("%i", &size);
    char arr[M][M];

    fillArr(arr);
    drawFractal(arr, x, y, size);
    printFractal(arr);

    return 0;
}