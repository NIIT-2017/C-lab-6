#include "task4.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
	time_t now;
	time(&now);
	srand(now);
	int N = 0,M = 0;
	printf("Please, enter power of number 2\n");
	scanf("%d", &M);
	N = pow(2, M);
	char* myarray = (char*)malloc(N * sizeof(char));
	init(myarray, N);
	clock_t begin0 = clock();
	long long count0 = sumC(myarray, N);
	clock_t end0 = clock();
	clock_t begin1 = clock();
	long long count1 = sumR(myarray, N);
	clock_t end1 = clock();
	printf("%6.2f - %lld\n%6.2f - %lld\n",
		(float)(end0 - begin0) / CLOCKS_PER_SEC,
		count0,
		(float)(end1 - begin1) / CLOCKS_PER_SEC,
		count1);
	free(myarray);
	return 0;
}