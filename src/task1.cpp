#include <stdio.h>
#include "task1.h"

void fill(char (*arr)[M])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
            arr[i][j] = ' ';
    }
}

int row(int a, int b)
{
    int result = 1;
    for (int i = 0; i < b; i++)
        result *= a;
    return result;
}

void printLine(char (*arr)[M])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
            putchar(arr[i][j]);
        putchar('\n');
    }
}

void drawFractal(char(*arr)[M], int x, int y, int size)
{
    int pos = row(3, size - 1);
    if (size == 0)
    {
        arr[x][y] = '*';
    }
    else
    {
        drawFractal(arr, x, y, size - 1);
        drawFractal(arr, x - pos, y, size - 1);
        drawFractal(arr, x + pos, y, size - 1);
        drawFractal(arr, x, y - pos, size - 1);
        drawFractal(arr, x, y + pos, size - 1);
    }
}
