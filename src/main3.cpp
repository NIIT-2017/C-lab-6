#include <stdio.h>
#include "task3.h"

int main() {
    unsigned int number = 0;
    char buf[128];

    printf("Enter you number.\n");
    scanf("%u", &number);
    printf("You number looks like this string: \n");
    printf("%s", int2str(buf, number));


    return 0;
}