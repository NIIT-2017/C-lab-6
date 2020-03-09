#include"task7.h"
#include<stdio.h>
#define N 7
#define M 15
void printMaze(char maze[][M])
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			printf("%c", maze[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

int place(char maze[N][M], int x, int y)
{
	if (x <= 0 || x >= 28 || y <= 0 || y >= 9)
		return 1;

	if (maze[x - 1][y] == ' ')
		place(maze, x - 1, y);

	if (maze[x + 1][y] == ' ')
		place(maze, x + 1, y);

	if (maze[x][y - 1] == ' ')
		place(maze, x, y - 1);

	if (maze[x][y + 1] == ' ')
		place(maze, x, y + 1);
}
