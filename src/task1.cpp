#include "task1.h"
#include <stdio.h>
#include <math.h>


void init(char(*arr)[M])
{
	for (int i = 0; i < M; i++)
		for (int j = 0; j < M; j++)
			arr[i][j] = ' ';
}

void print(char(*arr)[M])
{
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < M; j++)
			printf("%c ", arr[i][j]);
		putchar('\n');
	}
	
}

void drawFractal(char(*arr)[M], int x, int y, int size)
{
	if (size == 0)
	{
		arr[x][y] = '*';
	}
	else
	{
		unsigned long long a = size;
		drawFractal(arr, x, y, size - 1);
		drawFractal(arr, x + pow(3, a - 1), y, size - 1);
		drawFractal(arr, x - pow(3, a - 1), y, size - 1);
		drawFractal(arr, x, y + pow(3, a - 1), size - 1);
		drawFractal(arr, x, y - pow(3, a - 1), size - 1);
	}
}