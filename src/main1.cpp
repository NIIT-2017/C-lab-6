#include <stdio.h>
#include "task1.h"

#define N 28
#define M 28

int main()
{
    char arr[N][M];

    fill(arr);
    drawFractal(arr, N / 2, M / 2, 3);
    print(arr);
    return 0;
}