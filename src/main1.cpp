#include <stdio.h>
#include "task1.h"
#define SIZE 3
#define X 32
#define Y 32

void ititArray(char(*arr)[M]);
void printArray(char(*arr)[M]);

int main()
{
	char arr[N][M];
	ititArray(arr);
	drawFractal(arr, X, Y, SIZE);
	printArray(arr);

	return 0;
}

void ititArray(char(*arr)[M])
{
	int i, j;
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < M; j++)
			arr[i][j] = ' ';
		arr[i][M - 1] = '\0';
	}
}

void printArray(char(*arr)[M])
{
	for (int i = 0; i < N; i++)
		printf("%s\n", arr[i]);
}