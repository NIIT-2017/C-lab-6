#include "task7.h"
#include <stdio.h>
int getWidth(FILE *file)
{
    int width =0;
    char buf;
    do
    {
        fscanf(file, "%c", &buf);
        if(buf!='\n')
            width++;
    } while (buf!='\n');
    return width;
}
int getHeight(FILE* file,int width)
{
    char *buf=(char*)malloc((width+1)*sizeof(char));
    int height = 0;
    while (fgets(buf, width+2, file))
    { height++; }
    return height;
}
Field** readFile(int *height,int *width)
{
    FILE* fileMap = fopen("Map.txt", "r");
    if (!fileMap)
    {
        printf("Error.File couldn't open");
        return 0;
    }
    *width = getWidth(fileMap);
    rewind(fileMap);
    *height = getHeight(fileMap,*width);
    rewind(fileMap);
    Field** map = (Field**)malloc((*height) * sizeof(Field*));
    for (int i = 0; i < *height; i++)
    {
        map[i] = (Field*)malloc((*width) * sizeof(Field));
        char buf;
        int j = 0;
        do
        {
            fscanf(fileMap, "%c", &buf);
            if (buf == '\n' || buf == '\0')
                break;
            else
            {
                map[i][j].type = buf;
                map[i][j].distance = -1;
                j++;
            }
        } while (1);
    }
    fclose(fileMap);
    return map;
}
void printMap(Field** map, int height, int width)
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            printf("%c", map[i][j].type);
        }
        printf("\n");
    }
}
void printDist(Field** map, int height, int width)
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            printf("%d  ", map[i][j].distance);
        }
        printf("\n");
    }
}
void writeFile(Field** map, int height, int width)
{
    FILE* outputFile = fopen("Out.txt", "w");
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            fprintf(outputFile, "%c", map[i][j].type);
        }
        fprintf(outputFile, "\n");
    }
}
void setRoute(Field** map, int height, int width,int x,int y)
{
    if (map[y][x].distance == 0)
        return;
    map[y][x].type = '0';
    int nextX, nextY;
    findMin(x, y, map, width, height, &nextX, &nextY);
    setRoute(map, height, width, nextX, nextY);
}
int main()
{
    int height, width;
    Field** map = readFile(&height, &width);
    int x = 1,y = 1;
    map[y][x].distance = 0;
    printMap(map, height, width);
    int endX, endY;
    place(x,y, map, width, height,&endX,&endY);
    printDist(map, height, width);
    setRoute(map, height, width, endX, endY);
    writeFile(map, height, width);
    return 0;
}