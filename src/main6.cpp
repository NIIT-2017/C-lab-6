#include "task6.h"
#include <stdio.h>
int main()
{
    printf("Enter n : ");
    int n;
    scanf("%d", &n);
    printf("\n%llu ", fib2(n));
    return 0;
}