#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "task8.h"

int main(int argc, char* argv[]) {   
    if (argc < 2) {
    printf("You should call the programme with parameters, for example: task8.exe ((2+5)/(10+2)\n");
    return 1;
    }
    printf("%d", eval(argv[1]));

    return 0;
}