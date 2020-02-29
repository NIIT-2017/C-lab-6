#include "task8.h"
#include <stdio.h>
int main(int argc, char* argv[])
{
    char buf[40];
    printf("Enter equation");
    scanf("%s", buf);
    printf("\n%d", eval(buf));
    return 0;
}