#include "task7.h"
int findMin(int x,int y, Field** map,int maxX,int maxY,int *minFieldPosX,int *minFieldPosY)
{
    int min=10000;
    int distToNear; 
    if (y > 1)
    {
        distToNear = map[y - 1][x].distance;
        if ((min > distToNear + 1) && (distToNear != -1))
        {
            min = distToNear + 1;
            if (minFieldPosX && minFieldPosY)
            {
                *minFieldPosX = x;
                *minFieldPosY = y - 1;
            }
        }
    }
    if (x > 1)
    {
        distToNear = map[y][x - 1].distance;
        if ((min > distToNear + 1) && (distToNear != -1))
        {
            min = distToNear + 1;
            if (minFieldPosX && minFieldPosY)
            {
                *minFieldPosX = x - 1;
                *minFieldPosY = y;
            }
        }
    }
    if (y < (maxY - 1))
    {
        distToNear = map[y + 1][x].distance;
        if ((min > distToNear + 1) && (distToNear != -1))
        {
            min = distToNear + 1;
            if (minFieldPosX && minFieldPosY)
            {
                *minFieldPosX = x;
                *minFieldPosY = y + 1;
            }
        }
    }
    if (x < (maxX - 1))
    {
        distToNear = map[y ][x+ 1].distance;
        if ((min > distToNear + 1) && (distToNear != -1))
        {
            min = distToNear + 1;
            if (minFieldPosX && minFieldPosY)
            {
                *minFieldPosX = x + 1;
                *minFieldPosY = y;
            }
        }
    }
    if (min == 10000)
        return map[y][x].distance;
    if (map[y][x].distance >min ||(map[y][x].distance==-1 && min!=-1))
        return min;
    else
        return map[y][x].distance;
}
void place(int x,int y,Field** map,int width,int height,int *endX,int *endY)
{   
    if (map[y][x].type == '#')
        return;
    else
        if (x == 0 || y == 0 || x == (width - 1) || y == (height - 1))
        {
            *endX = x;
            *endY = y;
        }
    int minDist = findMin(x, y, map, width, height,0,0);
    if (minDist == map[y][x].distance && minDist!=0)
        return;
    else
        map[y][x].distance = minDist;
    if (x > 0)
        place(x - 1, y, map, width, height,endX,endY);
    if (y > 0)
        place(x, y- 1, map, width, height, endX, endY);
    if(x<(width-1))
        place(x + 1, y, map, width, height, endX, endY);
    if (y < (height - 1))
        place(x , y+ 1, map, width, height, endX, endY);
}