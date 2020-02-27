#include<stdio.h>
#include"task7.h"

extern char glade[N][N];

void place(int x, int y)
{
	glade[x][y] = { 'x' };

	if (x == 0 || y == 0 || x == N - 1 || y == N - 1)
		printf("You have found a way out x=%d  y=%d!\n", x, y);

	if (glade[x - 1][y] == ' ')
		place(x - 1, y);
	if (glade[x + 1][y] == ' ')
		place(x + 1, y);
	if (glade[x][y - 1] == ' ')
		place(x, y - 1);
	if (glade[x][y + 1] == ' ')
		place(x, y + 1);
}