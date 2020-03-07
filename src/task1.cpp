#include "task1.h"
#include <math.h>

void empty_arr(char(*arr)[HORIZONTAL])
{
    for (int i = 0; i < VERTICAL; i++)
        for (int j = 0; j < HORIZONTAL; j++)
            arr[i][j] = EMPTY_CELL;
}

void print(char(*arr)[HORIZONTAL])
{
    for (int i = 0; i < VERTICAL; i++)
    {
        for (int j = 0; j < HORIZONTAL; j++)
            printf("%c", arr[i][j]);
        puts("");
    }
}

int x1(int x, int size)
{
    int result = x + pow(3, size);
    return result;
}

int x2(int x, int size)
{
    int result = x - pow(3, size);
    return result;
}

int y1(int y, int size)
{
    int result = y + pow(3, size);
    return result;
}

int y2(int y, int size)
{
    int result = y - pow(3, size);
    return result;
}

void drawFractal(char(*arr)[HORIZONTAL], int x, int y, int size)
{
    if (size == 0)
        arr[y][x] = SYMBOL_CELL;
    else
    {
        drawFractal(arr, x1(x, size-1), y, size - 1); 
        drawFractal(arr, x, y1(y, size-1), size - 1);
        drawFractal(arr, x2(x, size-1), y, size - 1);
        drawFractal(arr, x, y2(y, size-1), size - 1);
        drawFractal(arr, x, y, size - 1);
    }
}