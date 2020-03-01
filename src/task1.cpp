#include <stdio.h>
#include <math.h>
#define M 28
void drawFractal(char(*arr)[M], int x, int y, int size) 
{
	int move = 0;// next position
	if (size == 0) 
	{
		arr[x][y] = '*';
	}
	else 
	{
		move = pow((float)3, size - 1); // without /float/ do not working?
		drawFractal(arr, x, y, size - 1);
		drawFractal(arr, x + move, y, size - 1);
		drawFractal(arr, x - move, y, size - 1);
		drawFractal(arr, x, y + move, size - 1);
		drawFractal(arr, x, y - move, size - 1);
	}
}