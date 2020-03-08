#include <stdio.h>
#include <time.h>
#include "task5.h"

int main()
{
	int N = 40;
	printf("Enter the number of first Fibonacci numbers (maximum 93, but I advise significantly less): ");
	scanf("%d", &N);
	unsigned long long fibonacci = 0;
	FILE* fp = fopen("text.txt", "w");
	printf("Fibonacci \t calculation time\nnumber \t\t in sec \n");
	fprintf(fp, "Fibonacci number \t calculation time in sec\n");
	for (int i = 1; i <= N; i++)
	{
		int start = clock();
		fibonacci = fib1(i);
		float time = (float)(clock() - start) / 1000;
		fprintf(fp, "%9llu \t %0.3f\n", fibonacci, time);
		printf("%2d - %9llu - %0.3f sec\n", i, fibonacci, time);
	}
	return 0;
}