#define _CRT_SECURE_NO_WARNINGS
#include "task4.h"
#include <stdio.h>
#include <math.h>
#include<stdlib.h>
#include<time.h>

int main() {
	
	int number = 0;
	unsigned long long result = 0;
	clock_t start, finish;

	printf("Enter number\n");
	scanf("%i", &number);

	int len = pow(2.0, number);
	char* arr = (char*)calloc(len, sizeof(char));

	for (int i = 0; i < len; i++)
	{
		arr[i] = rand() % 100;
	}

	start = clock();
	result = sumC(arr, len);
	finish = clock();
	printf("Cycle result = %lld, time = %3.2f\n", result, (float)(start - finish) / CLOCKS_PER_SEC);

	start = clock();
	result = sumR(arr, len);
	finish = clock();
	printf("Cycle result = %lld, time = %3.2f\n", result, (float)(start - finish) / CLOCKS_PER_SEC);

	free(arr);

	return 0;
}