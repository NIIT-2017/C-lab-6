#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include "task5.h"

int main()
{
	FILE* fp;

	if ((fp = fopen("Fibonachi.xls", "a+")) == NULL) //make file "Fibonachi.xls"
	{
		puts("File open ERROR!");
		return 1;
	}

	printf("Number\tFibonachi  \tTime,s\n");
	fprintf(fp, "Number\t  Fibonachi  \tTime,s\n");

	for (int N = 1; N < 41; N++)
	{
		clock_t begin = clock();
		unsigned long long Fibonachi = fib1(N);
		clock_t end = clock();
		printf("%4d\t%-10llu  \t%3.4f\n", N, Fibonachi, (float)(end - begin) / CLOCKS_PER_SEC);
		fprintf(fp, "%4d\t%-10llu  \t%3.4f\n", N, Fibonachi, (float)(end - begin) / CLOCKS_PER_SEC);
	}


	if (fclose(fp) != 0)
		puts("Error closing the file!");

	return 0;
}