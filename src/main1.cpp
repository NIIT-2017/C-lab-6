//Clab6 task1

#include "task1.h"

int main()
{
	char arr[M][M] = { ' ' };
	int x = M / 2;
	int y = M / 2;
	int size = 0;

	drawFractal(arr, x, y, size);

	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < M; j++)
		{
			printf("%c", arr[i][j]);
		}
		putchar('\n');
	}

	return 0;
}
