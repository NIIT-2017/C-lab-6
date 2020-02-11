#include <stdio.h>
#include <math.h>

long long sumC(char* arr, int len) {
    long long sum = 0;
    for (int i = 0; i < len; i++) {
        sum = sum + arr[i];
    }
    return sum;
}

long long sumR(char* arr, int len) {
    int half = len / 2;
    if (len == 1) {
        return *arr;
    }
    else {
        return sumR(arr, half) + sumR(arr+half, len-half);
    }

}