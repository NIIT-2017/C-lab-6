//Clab6 task1

#include "task1.h"

void drawFractal(char(*arr)[M], int x, int y, int size)
{
	if (size > DEPTH)
		return;

	drawSmall(arr, x, y);
	drawSmall(arr, x+3, y);
	drawSmall(arr, x-3, y);
	drawSmall(arr, x, y+3);
	drawSmall(arr, x, y-3);

	size++;
	
	drawFractal(arr, x - 3 * (size + 2), y, size);
	drawFractal(arr, x + 3 * (size + 2), y, size);
	drawFractal(arr, x , y - 3 * (size + 2), size);
	drawFractal(arr, x, y + 3 * (size + 2), size);
}

void drawSmall(char(*arr)[M], int x, int y)
{
	arr[x][y] = '*';
	arr[x+1][y] = '*';
	arr[x-1][y] = '*';
	arr[x][y+1] = '*';
	arr[x][y-1] = '*';
}