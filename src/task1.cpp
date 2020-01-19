#include <stdio.h>
#include < math.h >
#define M 300

void fprintArr(char(*m)[M], FILE* fp)
{
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < M; j++)
			fprintf(fp, "%2c", m[i][j]);
		fprintf(fp, "\n");
	}
}

void printArr(char(*m)[M])
{
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < M; j++)
			printf("%2c", m[i][j]);
		putchar('\n');
	}
	putchar('\n');
}

void drawFractal(char(*arr)[M], int x, int y, int size)
{
	if (size == 0)
		arr[x][y] = '+';
	else
	{
		drawFractal(arr, x, y, size - 1);
		drawFractal(arr, x + pow(3, (size - 1)), y, size - 1);
		drawFractal(arr, x, y + pow(3, (size - 1)), size - 1);
		drawFractal(arr, x - pow(3, (size - 1)), y, size - 1);
		drawFractal(arr, x, y - pow(3, (size - 1)), size - 1);
	}
}