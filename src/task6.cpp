#include <stdio.h>

unsigned long long fibLight(int fisrtNumber, int secondNumber, int N) {
  
        if (N == 1) {
            return secondNumber;
        }
        else {
            return fibLight(secondNumber,   fisrtNumber + secondNumber, N - 1);
        }
}


unsigned long long fib2(int N) {
       
    return fibLight(0, 1, N);
  
}