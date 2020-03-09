#include "task1.h"
#include <stdio.h>
#include <stdlib.h>
void printArr(char(*arr)[M])
{
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < M; j++)
        {
            printf("%c ",arr[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    char arr[M][M];
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < M; j++)
        {
            arr[i][j] = ' ';
        }
    }
    drawFractal(arr, M / 2, M / 2, 16);
    printArr(arr);
    return 0;
}