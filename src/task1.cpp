#include "task1.h"
#include <stdio.h>
#include <math.h>

void drawFractal(char(*arr)[M], int x, int y, int size)
{
	int space = 0;

	if (size == 0) {
		arr[x][y] = '*';
	}
	else
	{
		space = pow(3, size - 1);
		drawFractal(arr, x, y, size - 1);
		drawFractal(arr, x + space, y, size - 1);
		drawFractal(arr, x - space, y, size - 1);
		drawFractal(arr, x, y + space, size - 1);
		drawFractal(arr, x, y - space, size - 1);
	}
}
