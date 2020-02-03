#include "task1.h"
#include <math.h>

void drawFractal(char(*arr)[M], int x, int y, int size)
{
    if (size == 0)
        arr[y][x] = '*';
    else
    {
        int s = pow(3.0, (double)size - 1);//расстояние до центра
        drawFractal(arr, x, y, size - 1);
        drawFractal(arr, x - s, y, size - 1);
        drawFractal(arr, x + s, y, size - 1);
        drawFractal(arr, x, y - s, size - 1);
        drawFractal(arr, x, y + s, size - 1);
    }
}
