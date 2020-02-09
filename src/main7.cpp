#include <stdio.h>
#include <math.h>
#include "task7.h"
#define M 11
#define N 28

int main() {

    char maze[M][N] = {"###########################",
                       "#                         #",
                       "# #########  #  ###       #",
                       "#            #    # ##   ##",
                       "#########    #  x #       #",
                       "#####   #    #    #     ###",
                       "#       #    #    #  ######",
                       "###     #    #### #       #",
                       "                          #",
                       "###########################" };

    int result = 0;
    int x = 5;
    int y = 14;
    place(maze, x, y);
    printMap(maze);
    puts(" ");

 return 0;
}
       