#include <stdio.h>
#define M 21
#define N 9
extern char map[N][M];
void place(int x, int y);

void getMap(FILE* fp)
{
    char c;
    char* mapp = map[0];
    while ((c = fgetc(fp)) != EOF)
    {
        if (c != '\n')
            *mapp++ = c;
    }
}

void printMap()
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
            fputc(map[i][j], stdout);
        fputc('\n', stdout);
    }
    fputc('\n', stdout);
}

void step(int xc, int yc, int xs, int ys)
{
    if (map[ys][xs] != '#' && map[ys][xs] != 'P' && map[ys][xs] != 'S' && map[ys][xs] != 'E') //is allowed to go?
    {
        place(xs, ys);
        if (map[yc][xc] != 'E') //where have you come back from?
            map[yc][xc] = map[ys][xs];
    }
}

void place(int x, int y)
{
    if ((x - 1) >= 0 && (x + 1) < M && (y - 1) >= 0 && (y + 1) < N)
    {
        map[y][x] = 'P'; //Path
        step(x, y, x - 1, y);
        step(x, y, x, y + 1);
        step(x, y, x + 1, y);
        step(x, y, x, y - 1);
    }
    else
    {
        map[y][x] = 'E'; // Exit
        printf("Coordinates of the exit x = %i, y = %i\n", x, y);
        printMap();
    }
}