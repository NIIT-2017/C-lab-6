#include <stdio.h>
#include "task7.h"
#define N 7
#define M 15
int main()
{
char buf[N][M] = {
"##############",
"#            #",
"#  #     #   #",
"#   #     #   ",
"#  #  #      #",
"#x    #      #",
"##############" };
	
	int x = 2;
	int y = 14;
    buf[x][y] = 'x';
	printMaze(buf);
	return 0;
}
