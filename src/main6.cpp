#include <stdio.h>
#include "task6.h"

int main()
{
	int N = 0;
	printf("Enter the number of first Fibonacci numbers (max 93): ");
	scanf("%d", &N);
	for (int i = 1; i <= N; i++)
		printf("%d - %llu\n", i, fib2(i));
	return 0;
}