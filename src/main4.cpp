#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include "task4.h"


int main(int argc, char **argv)
{
	long long sum;						// sum - string elements sum
	
	int len = pow(2,atoi(argv[1]));		// len - dynamic array lenght. Exponent from cmd
	printf("N = %lld\n", len);

	char *arr = (char*)(malloc(len * sizeof(char)));		// set memory

	srand(time(NULL));

	for (int i = 0; i < len; i++)	// fill arr with random chars 0-99
		*(arr + i) = rand()%100;

	clock_t timeCycleStart = clock();		
	sum = sumC(arr, len);					// cycle
	clock_t timeCycleEnd = clock();
	printf("Sum using cycle = %lld, time = %f\n", sum, (double)(timeCycleEnd - timeCycleStart) / CLOCKS_PER_SEC);

	
	clock_t timeRecurStart = clock();		
	sum=sumR(arr, len);						// recursion
	clock_t timeRecurEnd = clock();
	printf("Sum using recursion = %lld, time = %f\n", sum, (double)(timeRecurEnd - timeRecurStart) / CLOCKS_PER_SEC);

	free(arr);
	return 0;
}