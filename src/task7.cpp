#include <stdio.h>
#include <time.h>
#define N 12
#define M 22

extern char size[N][M];

void draw_s (char (*m)[M])
{
	clock_t begin = clock();
	while (clock() < begin + CLOCKS_PER_SEC/5);

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
            printf("%c", m[i][j]);
		}
		putchar('\n');
	}
	putchar('\n');
}

int flag = 0;

void place(int x, int y)
{
	if (flag == 1)
		return;

	size[x][y] = '.';
	draw_s(size);

	if (x == 0 || y == 0 || x == N || y == M)
	{
		draw_s(size);
		flag = 1;
		return;
	}

	if (size[x + 1][y] == ' ')
	{
        	place(x + 1, y);
	}
	if (size[x - 1][y] == ' ')
	{
        	place(x - 1, y);
	}
	if (size[x][y + 1] == ' ')
	{
        	place(x, y + 1);
	}
	if (size[x][y - 1] == ' ')
	{
        	place(x, y - 1);
	}

}
