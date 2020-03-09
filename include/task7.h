#pragma once
#include <stdlib.h>
struct Field
{
    char type;
    int distance=-1;
};
void place(int x, int y, Field** map, int width, int height, int* endX, int* endY);
int findMin(int x, int y, Field** map, int maxX, int maxY, int *minFieldPosX, int *minFieldPosY);