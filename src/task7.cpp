#include <stdio.h>
#include "task7.h"
//#include
void place(char buf[M][N], int x, int y) 
{
	buf[x][y] = '.';
	if (x == 0 || y == 0 || x == (M - 1) || y == (N - 1)) //uslov exit
	{
		return;
	}
	if (buf[x + 1][y] == ' ') 
	{
		place(buf, x + 1, y);
	}
	if (buf[x - 1][y] == ' ')// bez nee srazu na exit, v dannom sluchae
	{
		place(buf, x - 1, y);
	}
	if (buf[x][y + 1] == ' ')
	{
		place(buf, x, y + 1);
	}
	if (buf[x][y - 1] == ' ')
	{
		place(buf, x, y - 1);
	}
}
void labirint(char buf[M][N])
{
	for (int i = 0; i < M; i++) 
	{
		for (int j = 0; j < N; j++)
		{
			printf("%c", buf[i][j]);
		}
		puts(" ");
	}
}