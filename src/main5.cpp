#define _CRT_SECURE_NO_WARNINGS
#include "task5.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 40

int main()
{
	FILE* f_out = fopen("FILE.xls", "wt");
	for (int i = 1; i < SIZE; i++)
	{
		clock_t start = clock();
		unsigned long long fib = fib1(i);
		clock_t finish = clock();
		fprintf(f_out, "%llu\t %6.2f\n", fib, (float)(finish - start) / CLOCKS_PER_SEC);
	}
	fclose(f_out);
	return 0;
}