#include <stdio.h>
#include "task1.h"
#define N 40
#define M 50

int main()
{
	char arr[N][M] = { 0 };
	drawFractal(arr, N / 2, M / 2, 3);
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
			putchar(arr[i][j]);
		putchar('\n');
	}
	return 0;
}
