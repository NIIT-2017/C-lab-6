#include "task1.h"

int main()
{
    char arr[VERTICAL][HORIZONTAL] = { NULL };
    empty_arr(arr);
    drawFractal(arr, X0, Y0, SIZE);
    print(arr);

    return 0;
}