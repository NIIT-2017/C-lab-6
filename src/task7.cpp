#include "task7.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

extern char Maze[N][M];

void print()// печать массива
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
			printf("%c", Maze[i][j]);
		putchar('\n');
	}
}
void place(int x, int y)// рекурсивная функция
{
	static int finish = 0;
	Maze[x][y] = 'x';
	print();
	clock_t begin = clock();
	while (clock() < begin + CLOCKS_PER_SEC/7);// задержка времени
	system("cls"); // очистка консоли
	if (x == 7 && y == 0)
	{
		Maze[x][y] = 'F';
		system("cls");
		print();
		printf("Done!!!");
		exit(0);// выход из программы
	}
	else
	{
		if (Maze[x - 1][y] == ' ')
		{
			Maze[x][y] = '.';
			place(x - 1, y);
		}
		if (Maze[x + 1][y] == ' ')
		{
			Maze[x][y] = '.';
			place(x + 1, y);
		}
		if (Maze[x][y - 1] == ' ')
		{
			Maze[x][y] = '.';
			place(x, y - 1);
		}
		if (Maze[x][y + 1] == ' ')
		{
			Maze[x][y] = '.';
			place(x, y + 1);
		}
	}
}
