#include <stdio.h>
#include "task1.h"
#define SIZE 3

int main()
{
	char arr[M][N];
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			arr[i][j] = ' ';
		}
	}

	drawFractal(arr, M / 2, N / 2, SIZE);

	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < M; j++)
		{
			printf("%2c", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}
