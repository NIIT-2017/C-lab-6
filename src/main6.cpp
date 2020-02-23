#define _CRT_SECURE_NO_WARNINGS
#include "task6.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define SIZE 40

int main()
{
	FILE* out = fopen("FILE.xls", "wt");
	for (int i = 1; i < SIZE; i++)
	{
		clock_t start = clock();
		unsigned long long fib = fib2(i);
		clock_t finish = clock();
		fprintf(out, "%6.2f - %llu\n", (float)(finish - start) / CLOCKS_PER_SEC, fib);
	}
	fclose(out);
	return 0;
}
