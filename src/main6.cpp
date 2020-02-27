#include<stdio.h>
#include "task6.h"
#include<time.h>

int main()
{
	for (int N = 1; N < 40; N++)
	{
	//clock_t begin = clock();
	fib2(N);
	//clock_t end = clock();
	printf("%4d\t%-10llu\n", N, fib2(N)); //(float)(end - begin) / CLOCKS_PER_SEC);
	}

	return 0;
}
