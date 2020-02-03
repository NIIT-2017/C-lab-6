#include "task6.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	//FILE* out = stdout;
	FILE* out = fopen("Lab5_fib2.xls", "wt");
	for (int i = 1; i < 23; i++)
	{
		clock_t begin = clock();
		unsigned long long fib = fib2(i);
		clock_t end = clock();
		fprintf(out, "%6.2f - %llu\n", (float)(end - begin) / CLOCKS_PER_SEC, fib);
	}
	fclose(out);
	return 0;
}