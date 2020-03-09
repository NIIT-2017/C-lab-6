#include <stdio.h>
#include <time.h>
#include "task6.h"

int main() {

    int number = 0;
    unsigned long long result = 0;
    clock_t begin, end;


    FILE* fp = fopen("Table1", "w");
    if (!fp) {
        printf("Error! File isn`t found!\n");
        return 1;
    }

    for (int i = 1; i <= 40; i++) {

        begin = clock();
        result = fib2(i);
        end = clock();
        printf("Number: %2d| result: %9u| time: %5.4fc|\n", i, result, (float)(end - begin) / CLOCKS_PER_SEC);
        fprintf(fp, "%d  %u %fc\n", i, result, (float)(end - begin) / CLOCKS_PER_SEC);
    }
    fclose(fp);

    return 0;
}