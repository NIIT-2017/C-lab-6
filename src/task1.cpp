#include <stdio.h>

#define M 51

int deg(int i)
{
    int k = 1;
    for (int j = 0; j < i; j++)
    {
        k *= 3;
    }

    return k;
}

void printFractal(char(*arr)[M])
{
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < M; j++)
            putc(arr[i][j], stdout);
        putc('\n', stdout);
    }
}

void fillArr(char(*arr)[M])
{
    for (int i = 0; i < M; i++)
        for (int j = 0; j < M; j++)
        {
            arr[i][j] = ' ';
        }
}

void drawFractal(char(*arr)[M], int x, int y, int size)
{
    if (size < 0)
        return;
    else
    {
        arr[x][y] = '*';
        size--;
        int value = 0;
        for (int i = 0; i <= size; i++)
        {
            value = size - i;
            drawFractal(arr, x + deg(value), y, value);
            drawFractal(arr, x, y + deg(value), value);
            drawFractal(arr, x - deg(value), y, value);
            drawFractal(arr, x, y - deg(value), value);
        }
    }
}