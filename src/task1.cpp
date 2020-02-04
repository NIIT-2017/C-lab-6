#include "task1.h"
void drawFractal(char(*arr)[M], int x, int y, int size)
{
    if (size == 0)
        arr[x][y] = '*';
    else
    {
        drawFractal(arr, x, y, size / 4);
        drawFractal(arr, x-1 - size , y, size/4);
        drawFractal(arr, x + size+1, y, size/4);
        drawFractal(arr, x , y-1- size , size/4);
        drawFractal(arr, x , y+1+ size, size/4);
    }
}