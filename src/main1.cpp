#include <stdio.h>
#include "task1.h"

int main()
{
    char arr[N][M];
    fill(arr);
    drawFractal(arr, N / 2, M / 2, 3);
    printLine(arr);
    return 0;
}
