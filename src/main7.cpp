#include <stdio.h>
#include "task7.h"

#define M 29
#define N 9

char labirinth[N][M] ={ "############################",
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

	int x = 0, y = 0;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
			if (labirinth[i][j] == 'x')
			{
				x = i;
				y = j;
				break;
			}
		if (x != 0)
			break;
	}
	place(x, y);
	return 0;
}
