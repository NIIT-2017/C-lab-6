#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "task6.h"
int main()
{
	int number = 0;
	unsigned long long result = 0;
	clock_t begin;
	clock_t end;
	FILE* fp = fopen("C:\\labsss\\L6T6\\str.xls", "w");
	if (!fp)
	{
		printf("File lost!\n");
		return 1;
	}
	for (int i = 1; i <= 40; i++) // or more i
	{
		begin = clock ();
		result = fib2(i);
		end = clock ();
		printf("Number: %2d| Result: %9llu| Time: %1.9f|\n", i, result, (float)(end - begin) / CLOCKS_PER_SEC);// time = 0?
		fprintf(fp, "%d  %llu %f\n", i, result, (float)(end - begin) / CLOCKS_PER_SEC);
	}
	fclose(fp);
	return 0;
}