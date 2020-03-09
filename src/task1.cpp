#include"task1.h"
#include<math.h>

void drawFractal(char(*arr)[M], int x, int y, int size)
{
    int z = (int)pow(3,size-1);
    if(size == 0)
      arr[x][y]='*';
    else
    {
       drawFractal(arr, x, y, size-1);
       drawFractal(arr, x-z, y, size -1);
       drawFractal(arr, x+z, y, size-1);
       drawFractal(arr, x , y-z,size-1);
       drawFractal(arr,x, y+z,size-1);
    }
}
