#include "task7.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char Maze[N][M] = { "############################",
					"#           #   #          #",
					"##########  #   #          #",
					"#           #   #######  ###",
					"# ######    # x            #",
					"#      #    #   #######   ##",
					"#####  #    #   #         ##",
					"       #        #     ######",
					"############################" };

int main()
{
	time_t now;
	time(&now);
	srand(now);
	int a = 0, b = 0;
	for (int i = 0; i < N; i++)// поиск начальной точки
	{
		for (int j = 0; j < M; j++)
			if (Maze[i][j] == 'x')
			{
				a = i;
				b = j;
				break;
			}
		if (a != 0)
			break;
	}
	place(a,b);
	return 0;
}