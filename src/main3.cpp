#include <stdio.h>
#include "task3.h"

int main()
{
    unsigned int value = 0;
    char buf[16];

    printf("Enter a number:\n");
    scanf("%u", &value);

    printf("%s\n", int2str(buf, value));

    return 0;
}