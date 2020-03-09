#include <stdio.h>
#include <stdlib.h>
#include "task1.h"
#define M 300

int main()
{
	char arr[M][M];
	for (int i = 0; i < M; i++)
		for (int j = 0; j < M; j++)
			arr[i][j] = ' ';
	int size = 0;
	printf("Enter the size: ");
	scanf("%d", &size);
	FILE* fp = fopen("text.txt", "w");

	drawFractal(arr, M/2+1, M/2+1, size);
	
	fprintArr(arr, fp);
	printArr(arr);
		
	return 0;
}
