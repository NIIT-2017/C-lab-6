#include "task7.h"
#include <stdio.h>
#define X 14
#define Y 4

void printArr(char(*arr)[M]);

int main()
{
	char arr[N][M] = {"###########################",
					  "#           #  #          #",
					  "##########  #  #          #",
					  "#           #  #######  ###",
					  "# ######    # x           #",
					  "#      #    #  #######   ##",
					  "#####  #    #  #         ##",
					  "       #       #     ######",
					  "###########################" };
	place(arr, Y, X);
	printArr(arr);
	return 0;
}


void printArr(char(*arr)[M])
{
	int i;
	for (i = 0; i < N; i++)
		printf("%s\n", arr[i]);
	printf("\n");
}