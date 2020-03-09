#include <stdio.h>
#include "task7.h"

void place(char maze[M][N], int x, int y) {
    maze[x][y] = '+';
    if (x == 0 || y == 0 || x == (M - 1) || y == (N - 1)) {
        return;
    }
    if (maze[x + 1][y] == ' ') {
        place(maze, x + 1, y);
    }
    if (maze[x - 1][y] == ' ') {
        place(maze, x - 1, y);
    }
    if (maze[x][y + 1] == ' ') {
        place(maze, x, y + 1);
    }
    if (maze[x][y - 1] == ' ') {
        place(maze, x, y - 1);
    }
}

void printMap(char maze[M][N]) {
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++)
            printf("%c", maze[i][j]);
        puts(" ");
    }
}