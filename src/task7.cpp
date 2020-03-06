#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#define M 30
extern char mass[M][M];
int flag = 0;

void printArr(char(*m)[M])
{
	clock_t begin = clock();
	while (clock() < begin + CLOCKS_PER_SEC / 5);
		for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < M; j++)
			printf("%c", m[i][j]);
		putchar('\n');
	}
	putchar('\n');
}

void place(int x, int y)
{
	if (flag == 1)
		return;

	mass[x][y] = 'X';
	printArr(mass);

	if (x == 0 || y == 0 || x == M - 1 || y == M - 2)
	{
		printArr(mass);
		printf("Found the exit!\n");
		flag = 1;
		return;
	}

	if (mass[x + 1][y] == ' ')
		place(x + 1, y);
	if (mass[x - 1][y] == ' ')
		place(x - 1, y);
	if (mass[x][y + 1] == ' ')
		place(x, y + 1);
	if (mass[x][y - 1] == ' ')
		place(x, y - 1);

}