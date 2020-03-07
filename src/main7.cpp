#include "task7.h"

int main()
{
    char w = WALL;
    char o = VOID;
    int back[Y][X] = { 0 };
    char map[Y][X] = { w,w,w,w,w,w,w,w,w,w,w,w,w,w,w,w,w,w,w,w,w,w,w,w,w,w,w,w,
                       w,o,o,o,o,o,o,o,o,o,o,o,w,o,o,o,w,o,o,o,o,o,o,o,o,o,o,w,
                       w,w,w,w,w,w,w,w,w,w,o,o,w,o,o,o,w,o,o,o,o,o,o,o,o,o,o,w,
                       w,o,o,o,o,o,o,o,o,o,o,o,w,o,o,o,w,w,w,w,w,w,w,o,o,w,w,w,
                       w,o,w,w,w,w,w,w,o,o,o,o,w,o,o,o,o,o,o,o,o,o,o,o,o,o,o,w,
                       w,o,o,o,o,o,o,w,o,o,o,o,w,o,o,o,w,w,w,w,w,w,w,o,o,o,w,w,
                       w,w,w,w,w,o,o,w,o,o,o,o,w,o,o,o,w,o,o,o,o,o,o,o,o,o,w,w,
                       o,o,o,o,o,o,o,w,o,o,o,o,o,o,o,o,w,o,o,o,o,o,w,w,w,w,w,w,
                       w,w,w,w,w,w,w,w,w,w,w,w,w,w,w,w,w,w,w,w,w,w,w,w,w,w,w,w };


    place(map,back, 21, 7);

    return 0;
}