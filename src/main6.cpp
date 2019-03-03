#include <stdio.h>
#include <time.h>
#include "task6.h"
#define N 40

unsigned long long arr[41] = { 0 };		// arr for Fibonacci values

int main()
{
	unsigned long long result;
	FILE *fp;					// fp - pointer to output file
	fp = fopen("fib.txt", "w");
	if (NULL == fp)				// check file opening
	{
		puts("FILE ERROR!");
		return 1;
	}

	fprintf(fp, "N \t result \t time \n");		// head for the table
	for (int i = 0; i <= N; i++)
	{
		clock_t timeStrat = clock();
		result = fib1(i);			// start recursion
		clock_t timeEnd = clock();
		fprintf(fp, "%d \t %lld \t %f \n", i, result, (double)(((double)(timeEnd)-(double)(timeStrat)) / CLOCKS_PER_SEC));
	}
	fclose(fp);
	puts("Done!");
	return 0;
}