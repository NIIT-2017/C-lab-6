#include <stdio.h>

#define N 28
#define M 28

void fill(char (*arr)[M])
{
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++)
            arr[i][j] = ' ';
    }
}

void print(char (*arr)[M])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
            putchar(arr[i][j]);
        putchar('\n');
    }
}

int pow(int n, int m)
{
    int res = 1;
    for (int i = 0; i<m; i++)
        res *= n;
    return res;
}

void drawFractal(char(*arr)[M], int x, int y, int k)
{
    int delta = pow(3, k - 1);
    if (k == 0) {
        arr[x][y] = '*';
    }
    else {
        drawFractal(arr, x, y, k - 1);
        drawFractal(arr, x - delta, y, k - 1);
        drawFractal(arr, x + delta, y, k - 1);
        drawFractal(arr, x, y - delta, k - 1);
        drawFractal(arr, x, y + delta, k - 1);
    }
}