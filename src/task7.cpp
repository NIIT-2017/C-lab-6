// Clab6 task7

#include "task7.h"

char search[10][30] =
{
"############################",
"#           #   #          #",
"#########   #   #          #",
"#           #   ######## ###",
"# #####     #              #",
"#     #     #   #######   ##",
"##### #     #   #         ##",
"      #         #     ######",
"############################"
};

char arr[10][30] =
{
"############################",
"#           #   #          #",
"#########   #   #          #",
"#           #   ######## ###",
"# #####     #              #",
"#     #     #   #######   ##",
"##### #     #   #         ##",
"      #         #     ######",
"############################"
};

short flag = 0;

void place(int x, int y)
{
	system("cls");

	arr[y][x] = 'x';
	search[y][x] = 'x';


	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 28; j++)
			putchar (arr[i][j]);
		
		putchar('\n');
	}

	arr[y][x] = ' ';

	int retTime = time(0) + 1;
	while (time(0) < retTime);

	if (x == 0)
	{
		puts("Search is over!");
		flag = 1;
	}

	if (search[y][x - 1] == ' ' && flag == 0)
		place(x - 1, y);

	if (search[y - 1][x] == ' ' && flag == 0)
		place(x, y - 1);

	if (search[y][x + 1] == ' ' && flag == 0)
		place(x + 1, y);

	if (search[y + 1][x] == ' ' && flag == 0)
		place(x, y + 1);

	return;
}