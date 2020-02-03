#include <stdio.h>
#include "task8.h"

int main(int argc, char* argv[])
{
    if (argc < 2)
        printf("you didn't enter an expression");
    else
        printf("%s = %d\n", argv[1], eval(argv[1]));
    return 0;
}