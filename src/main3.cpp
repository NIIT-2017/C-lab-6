#include "task3.h"
#include <string.h>

int main()
{
    char str[SIZE];
    ui number;
    printf("Input the number: ");
    scanf("%d", &number);
    printf("Number is %s\n", int2str(str, number));
    //printf("%d", strcmp(int2str(str, number), "12345"));

    return 0;
}