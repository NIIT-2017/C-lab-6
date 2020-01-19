#define _CRT_SECURE_NO_WARNINGS

#include "task3.h"
#include <stdio.h>

int main()
{
    char buf[512] = {0};
    unsigned int value = 0;
    printf("Enter a number\n");
    scanf("%u", &value);

    int2str(buf, value);
    puts(buf);

    return 0;
}