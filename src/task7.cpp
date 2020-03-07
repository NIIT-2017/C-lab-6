#include "task7.h"

void print(char (*map)[X], int size_x, int size_y)
{
    HANDLE hstdout;
    hstdout = GetStdHandle(STD_OUTPUT_HANDLE);
    for (int i = 0; i < size_y; i++)
    {
        for (int j = 0; j < size_x; j++)
        {
            if (map[i][j] == WRONG_WAY)
                map[i][j] = VOID;
            if (map[i][j] == WAY)
                SetConsoleTextAttribute(hstdout, 0x70);
            else
                SetConsoleTextAttribute(hstdout, 0x07);
            printf("%c", map[i][j]);
        }
        puts("");
    }
}

void place(char (*map)[X],int (*back)[X], int x, int y)
{
    map[y][x] = WAY;
    if (x == 0 || y == 0 || x==X || y==Y)
    {
        printf("EXIT HAS BEEN FOUND!!!\n");
        print(map, X, Y);
    }
    else if (map[y][x + 1] == VOID && x+1==X)
        place(map,back, x + 1, y);
    else if (map[y + 1][x] == VOID && y+1==Y)
        place(map,back, x, y + 1);
    else if (map[y][x - 1] == VOID && x-1==0)
        place(map,back, x - 1, y);
    else if (map[y - 1][x] == VOID && y-1==0)
        place(map,back, x, y - 1);
    else if (map[y][x + 1] == VOID)
    {
        back[y][x + 1]= back[y][x]+1;
        place(map,back, x + 1, y);
    }
    else if (map[y + 1][x] == VOID)
    {
        back[y + 1][x] = back[y][x] + 1;
        place(map,back, x, y + 1);
    }
    else if (map[y][x - 1] == VOID)
    {
        back[y][x - 1] = back[y][x] + 1;
        place(map,back, x - 1, y);
    }
    else if (map[y - 1][x] == VOID)
    {
        back[y - 1][x] = back[y][x] + 1;
        place(map,back, x, y - 1);
    }
    else if (back[y][x] - back[y][x + 1] == 1)
    {
        map[y][x] = WRONG_WAY;
        place(map, back, x + 1, y);
    }
    else if (back[y][x] - back[y + 1][x] == 1)
    {
        map[y][x] = WRONG_WAY;
        place(map, back, x, y + 1);
    }
    else if (back[y][x] - back[y][x - 1] == 1)
    {
        map[y][x] = WRONG_WAY;
        place(map, back, x - 1, y);
    }
    else if (back[y][x] - back[y - 1][x] == 1)
    {
        map[y][x] = WRONG_WAY;
        place(map, back, x, y - 1);
    }
}