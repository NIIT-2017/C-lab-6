#include <stdio.h>
#include <math.h>
#include<stdlib.h>
#include<time.h>
#include "task4.h"

int main() {
    int value = 0;
    unsigned long long resultC = 0;
    unsigned long long resultR = 0;
    printf("Enter your value\n");
    scanf("%d", &value); 
    int N = pow(2.0, value);
    char* arr = (char*)calloc(N, sizeof(char));
    clock_t begin, end;
    for (int i = 0; i < N; i++) {
        arr[i] = rand() % 100;
    }
        
        begin = clock();
        resultC = sumC(arr, N);
        end = clock();
        printf("Cycle result: %9u| time: %5.4fc|\n", resultC, (float)(end - begin) / CLOCKS_PER_SEC);

        begin = clock();
        resultR = sumR(arr, N);
        end = clock();
        printf("Recur result: %9u| time: %5.4fc|\n", resultR, (float)(end - begin) / CLOCKS_PER_SEC);

        free(arr);
    
    return 0;
}
