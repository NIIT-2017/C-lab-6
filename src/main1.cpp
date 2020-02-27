#include<stdio.h>
#include"task1.h"

int main()
{
	char arr[N][M];

	fill(arr);
	drawFractal(arr, N / 2, M / 2, 3);
	print(arr);

	return 0;
}