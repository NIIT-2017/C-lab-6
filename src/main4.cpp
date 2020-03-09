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
	int N = 0;
	int M = 0;
	printf("Enter degree of 2\n");
	printf("But less than 28!!!!\n");
	scanf("%d", &M);
	N = pow((float)2, M); //bez pow?
	char* buf = (char*)malloc(N * sizeof(char));
	init(buf, N);
	clock_t begin = clock();
	long long count = sumC(buf, N);
	clock_t end = clock();
	clock_t begin1 = clock();
	long long count1 = sumR(buf, N);
	clock_t end1 = clock();
	printf("classic: %6.2f - %lld\nrecursive: %6.2f - %lld\n",(float)(end - begin) / CLOCKS_PER_SEC, count, (float)(end1 - begin1) / CLOCKS_PER_SEC, count1);
	free(buf);
	return 0;
}