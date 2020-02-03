#include "task1.h"
#include <stdio.h>

int main()
{
    char arr[M][M];
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < M; j++)
            arr[i][j] = ' ';
    }
    int x = M / 2;
    int y = M / 2;
    drawFractal(arr, x, y, 3);
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < M; j++)
            printf("%c ", arr[i][j]);
        putchar('\n');
    }
    return 0;
}