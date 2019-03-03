#include <stdio.h>
#include <stdlib.h>
#include <time.h>


short flag = 0;					// flag for the labyrinth end (1 means that jailbreak done)

void place(int x, int y)
{
	extern char arr[10][30];
	extern char freedom[10][30];

	system("cls");

	arr[y][x] = 'x';
	freedom[y][x] = 'x';

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 30; j++)
			putchar(arr[i][j]);
		putchar('\n');
	}
	
	arr[y][x] = ' ';								// clear arr for more beautiful picture
	
	int retTime = time(0) + 1;						// sleep(1000)
	while (time(0) < retTime);

	if (x == 0)
	{
		puts("Jailbreak done!");					// recursion end
		flag = 1;
	}

		if (freedom[y][x - 1] == ' ' && flag == 0)		// go left
			place(x - 1, y);
		

		if (freedom[y - 1][x] == ' ' && flag == 0)		// go up
			place(x, y-1);
		

		if (freedom[y][x + 1] == ' ' && flag == 0)		// go right
			place(x + 1, y);
		

		if (freedom[y + 1][x] == ' ' && flag == 0)		// go down
			place(x, y + 1);
		
	
	
}