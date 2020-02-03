#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "task5.h"
#define SIZE 40

int main()
{
	srand(time(NULL));
	rand();
	FILE* out;
	out = fopen("task5.txt", "w");
	printf("%2s %6s  t%10s\n","=l","=t1","=N1");
	fprintf(out, "%2s %6s  t%10s\n", "=l", "=t1", "=N1");
	unsigned long long sumfib=0;

	for (int len = 1; len <= SIZE; len ++)
	{
		clock_t begin1 = clock();
		sumfib = fib1(len);
		clock_t end1 = clock();
		printf("%2d  %6.2f  t %10llu\n", len, (float)(end1 - begin1) / CLOCKS_PER_SEC, sumfib);
		fprintf(out, "%2d  %6.2f  t %10llu\n", len, (float)(end1 - begin1) / CLOCKS_PER_SEC, sumfib);
	}
	fclose(out);
	return 0;
}