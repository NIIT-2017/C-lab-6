#define _CRT_SECURE_NO_WARNINGS
#include "task3.h"
#include <stdio.h>
#define SIZE 256

int main()
{
    char buf[SIZE] = {0};
    unsigned int value = 0;
    printf("enter a number: ");
    scanf("%d", &value);
    int2str(buf, value);
    for (int i = 0; i < SIZE; i++)
        printf("%c", buf[i]);
    return 0;
}