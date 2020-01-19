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
    if (map[ys][xs] != '#' && map[ys][xs] != 'P' && map[ys][xs] != 'S' && map[ys][xs] != 'E')
    {
        place(xs, ys);
        if (map[yc][xc] != 'E')
            map[yc][xc] = map[ys][xs];
    }
}

void place(int x, int y)
{
    if ((x - 1) >= 0 && (x + 1) < M && (y - 1) >= 0 && (y + 1) < N)
    {
        map[y][x] = 'P';
        step(x, y, x - 1, y);
        /*if (map[y][x - 1] != '#' && map[y][x - 1] != 'P' && map[y][x - 1] != 'S' && map[y][x - 1] != 'E')
        {
            place(x - 1, y);
            if (map[y][x] != 'E')
                map[y][x] = map[y][x - 1];
        }*/
        step(x, y, x, y + 1);
        /*if (map[y + 1][x] != '#' && map[y + 1][x] != 'P' && map[y + 1][x] != 'S' && map[y + 1][x] != 'E')
        {
            place(x, y + 1);
            if (map[y][x] != 'E')
                map[y][x] = map[y + 1][x];
        }*/
        step(x, y, x + 1, y);
        /*if (map[y][x + 1] != '#' && map[y][x + 1] != 'P' && map[y][x + 1] != 'S' && map[y][x + 1] != 'E')
        {
            place(x + 1, y);
            if (map[y][x] != 'E')
                map[y][x] = map[y][x + 1];
        }*/
        step(x, y, x, y - 1);
        /*if (map[y - 1][x] != '#' && map[y - 1][x] != 'P' && map[y - 1][x] != 'S' && map[y - 1][x] != 'E')
        {
            place(x, y - 1);
            if (map[y][x] != 'E')
                map[y][x] = map[y - 1][x];
        }*/
        if ((map[y][x - 1] == 'E') ||
            (map[y + 1][x] == 'E') ||
            (map[y][x + 1] == 'E') ||
            (map[y - 1][x] == 'E'))
            map[y][x] = 'E';
        else
            map[y][x] = 'S';
    }
    else
    {
        map[y][x] = 'E';
        printMap();
    }
}