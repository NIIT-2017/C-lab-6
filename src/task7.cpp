#include "task7.h"
#include <stdio.h>

void place(char(*arr)[M], int y, int x)
{
	if (x == 0 || x == M - 2 || y == 0 || y == N - 1)
	{
		if (arr[y][x] != '#')
		{
			arr[y][x] = '*';
			printf("Exit y = %d; x = %d.\n\n", y, x);
		}
		return;
	}
	else if (arr[y][x] == '#' || arr[y][x] == '*')
		return;
	else
	{
		arr[y][x] = '*';
		place(arr, y + 1, x);
		place(arr, y, x + 1);
		place(arr, y - 1, x);
		place(arr, y, x - 1);
	}
}