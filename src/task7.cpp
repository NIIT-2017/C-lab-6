#define sizew 20
#define sizeh 10
#include "task7.h"
#include <stdio.h>

void printMaze()
{
    extern char maze[sizeh][sizew];
    for (int i = 0; i < sizeh; i++)
    {
        for (int j = 0; j < sizew; j++)
            printf("%c ", maze[i][j]);
        putchar('\n');
    }
}

void place(int x, int y)
{
    extern char maze[sizeh][sizew];
    if (x == 0 || y == 0 || x == 19 || y == 9)
    {
        return;
    }
    if (maze[y + 1][x] == ' ')
    {
        maze[y + 1][x] = 'x';
        place(x, y + 1);
    }
    if (maze[y][x + 1] == ' ')
    {
        maze[y][x + 1] = 'x';
        place(x + 1, y);
    }
    if (maze[y - 1][x] == ' ')
    {
        maze[y - 1][x] = 'x';
        place(x, y - 1);
    }
    if (maze[y][x - 1] == ' ')
    {
        maze[y][x - 1] = 'x';
        place(x - 1, y);
    }
}
