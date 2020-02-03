#include <stdio.h>
#define M 300

int pow(int i)
{
	int q = 1;
	for (int j = 0; j < i; j++)
		q *= 3;

	return q;
}

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
		drawFractal(arr, x + pow(size - 1), y, size - 1);
		drawFractal(arr, x, y + pow(size - 1), size - 1);
		drawFractal(arr, x - pow(size - 1), y, size - 1);
		drawFractal(arr, x, y - pow(size - 1), size - 1);
	}
}