#include <stdio.h>
#include "task7.h"

char arr[10][30] = {
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

char freedom[10][30];				// array to check was I here or not

int main()
{
	for (int i = 0; i < 10; i++)		// free = arr
		for (int j = 0; j < 30; j++)
			freedom[i][j]=arr[i][j];
	

	place(14, 4);						



	return 0;
}