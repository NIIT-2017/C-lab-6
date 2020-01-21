#include <stdio.h>
#include "task1.h"

int powRecursion(int n, int p)
{
	if (p == 0)
		return 1;
	else
		return n * powRecursion(n, p - 1);
}

void drawFractal(char(*arr)[M], int x, int y, int size)
{
	int d = 0;
	arr[x][y] = '*';
	if (size == 0)
		return;
	else
	{
		d = powRecursion(3, size - 1);
		drawFractal(arr, x, y, size - 1);
		drawFractal(arr, x + d, y, size-1);
		drawFractal(arr, x - d, y, size-1);
		drawFractal(arr, x, y + d, size - 1);
		drawFractal(arr, x, y - d, size - 1);
	}
}