#include "task3.h"
#include <stdio.h>
int main()
{
    printf("Enter number");
    int number;
    scanf("%d", &number);
    char buf[20];
    int2str(buf, number);
    printf(buf);
    return 0;
}