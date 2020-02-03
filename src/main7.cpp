#include "task7.h"

char map[N][M];

int main()
{
    FILE* fp = NULL;

    fp = fopen("Map.txt", "rt");
    if (fp == NULL)
        return 1;

    getMap(fp);
    fclose(fp);
    printMap();
    place(11, 4);
    printf("End\n");
    printMap();
    
    return 0;
}