#include<stdio.h>
#include"task1.h"

void fill(char(*arr)[M])
{
	for (int i = 0; i < N; i++)
	   for (int j = 0; j < M; j++)
		   arr[i][j] = ' ';
}

int pow(int n, int m)
{
	int res = 1;
	for (int i = 0; i < m; i++)
		res *= n;

	return res;
}

void drawFractal(char(*arr)[M], int y, int x, int size)
{
	int delta = pow(3, size - 1);

	if (size == 0)
		arr[y][x] = '*';
	else
	{
	    drawFractal(arr, x, y, size - 1);
		drawFractal(arr, x - delta, y, size - 1);
		drawFractal(arr, x + delta, y, size - 1);
		drawFractal(arr, x, y- delta, size - 1);
		drawFractal(arr, x, y+ delta, size - 1);
	}
}

void print(char(*arr)[M])
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
			putchar(arr[i][j]);
		putchar('\n');
	}
}