#include <stdio.h>
#include "task8.h"

int main(int argc, char* argv[])
{
    if (argc != 2)
    {
        printf("Not found\n");
        return 1;
    }
    else printf("Expression: %d\n", eval(argv[1]));

    return 0;
}
