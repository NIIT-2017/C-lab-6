#include "task8.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    if (*argv[1] != '(')
        printf("%s = %i\n", argv[1], atoi(argv[1]));
    else
        printf("%s = %i\n", argv[1], eval(argv[1]));

    return 0;
}