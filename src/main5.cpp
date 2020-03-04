#include<time.h>
#include"task5.h"
#include<stdlib.h>
#include<stdio.h>

int main()
{
	unsigned long long result = 0;
	for (int i = 1; i <= 40; i++)
	{
		clock_t begin = clock();
		result = fib1(i);
		clock_t end = clock();
		printf("%2d= %8llu\t%1.f\n", i, result, 
			(float)(end-begin));
	}
	return 0;
}
