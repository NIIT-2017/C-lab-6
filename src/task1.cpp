#include <stdio.h>
#include <math.h>
#define M 28

void drawFractal(char(*arr)[M], int x, int y, int size) {
    int shift = 0;
  
    if (size == 0) {
        arr[x][y] = '*';
    }
    else {
        shift = pow(3, size-1);
        drawFractal(arr, x, y, size - 1);
        drawFractal(arr, x + shift, y, size - 1);
        drawFractal(arr, x - shift, y, size - 1);
        drawFractal(arr, x, y + shift, size - 1);
        drawFractal(arr, x, y - shift, size - 1);
    }
}