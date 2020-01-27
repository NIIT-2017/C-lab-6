#include <stdio.h>
#include <windows.h>

#define N 10

extern char maze[N][N];

void place(int x, int y)
{
    maze[x][y] = 'X';
    
    if (x == 0 || y == 0 || x == N - 1 || y == N - 1)
        printf("Congratulations! Exit (%d, %d).\n", x, y);

    if (maze[x - 1][y] == ' ')
        place(x - 1, y);
    if (maze[x][y - 1] == ' ')
        place(x, y - 1);
    if (maze[x + 1][y] == ' ')
        place(x + 1, y);
    if (maze[x][y + 1] == ' ')
        place(x, y + 1);
}