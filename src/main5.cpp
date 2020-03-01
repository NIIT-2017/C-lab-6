#include <stdio.h>
#include <time.h>
#include "task5.h"
int main()
{
	int number = 0;
	unsigned long long result = 0;
	clock_t begin;
	clock_t end;
	FILE* fp = fopen("C:\\labsss\\L6T5\\tab.txt", "w");
	if (!fp)
	{
		printf("Lost file\n");
		return 1;
	}
	for (int i = 1; i <= 30; i++)// or more i
	{
		begin = clock();
		result = fib1(i);
		end = clock();
		printf("Number: %2d| Result: %7llu| Time: %1.5f sec|\n", i, result, ((float)(end - begin) / CLOCKS_PER_SEC));// llu
		fprintf(fp, "%d  %llu %f sec\n", i, result, ((float)(end - begin) / CLOCKS_PER_SEC));
	}
	fclose(fp);
	return 0;
}