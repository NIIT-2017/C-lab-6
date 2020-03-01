#include <stdio.h>
#include <math.h>
#include "task7.h"
int main() 
{
	char buf[M][N] = { "#############################",
						"#                           #",
						"# #   # #   # #   # #########",
						"# #   # #   # #   #    #    #",
						"# ##### #  ##x#  ##    #    #",
						"# #   # ##  # ##  #    #    #",
						"###   # #   # #   #    #    #",
						"                            #",
						"#############################" };
	int result = 0;
	int x = 5;
	int y = 14;
	place(buf, x, y);
	labirint(buf);
	puts(" ");
	return 0;
}