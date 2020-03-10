#include "task7.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

extern char labirinth[N][M];

void place(int x, int y)
{
	labirinth[x][y] = 'x';

	if (y == 0)
	{
		labirinth[x][y] = 'x';
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < M; j++)
			{
				printf("%c", labirinth[i][j]);
			}
			printf("\n");

		}
	}
	else
	{
		if (labirinth[x + 1][y] == ' ')
		{
			labirinth[x][y] = 'x';
			place(x + 1, y);
		}
		if (labirinth[x][y - 1] == ' ')
		{
			labirinth[x][y] = 'x';
			place(x, y - 1);
		}
		if (labirinth[x - 1][y] == ' ')
		{
			labirinth[x][y] = 'x';
			place(x - 1, y);
		}
		if (labirinth[x][y + 1] == ' ')
		{
			labirinth[x][y] = 'x';
			place(x, y + 1);
		}
	}
}
