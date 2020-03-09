#include "task8.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
    char buf[256];

    if (argc < 2)
    {
        printf("Enter an expression!\n");
        return 1;
    }

    printf("%s = %d\n", argv[1], eval(argv[1]));

    return 0;
}