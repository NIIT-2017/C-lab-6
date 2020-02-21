#include <stdio.h>
#include <time.h>
#define M 11
extern char map[M][M];
int flag = 0;

void printArr (char (*m)[M])
{
	clock_t begin = clock();
	while (clock() < begin + CLOCKS_PER_SEC/5);
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

	map[x][y] = 'X';
	printArr(map);

	if (x == 0 || y == 0 || x == M - 1 || y == M - 2)
	{
		printArr(map);
		printf("\nCongratulations we found a way out of the maze!\n");
		flag = 1;
		return;
	}
	
	if (map[x + 1][y] == ' ')
		place(x + 1, y);
	if (map[x - 1][y] == ' ')
		place(x - 1, y);
	if (map[x][y + 1] == ' ')
		place(x, y + 1);
	if (map[x][y - 1] == ' ')
		place(x, y - 1);

}