#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "task4.h"

int powRec(int n, int p);
void initArr(char* arr, int n);

int main()
{
	int m = 0;
	printf("Enter the value of the degree: ");
	int result = scanf("%d", &m);
	if (result == 0 || m < 0)
	{
		printf("Invalid value!\n");
		return 1;
	}

	int n = powRec(2, m);

	char* arr;
	arr = (char*)malloc(n * sizeof(char));

	time_t now;
	time(&now);
	srand((unsigned int)now);
	rand();

	initArr(arr, n);

	clock_t begin1 = clock();
	long long sumRec = sumR(arr, n);
	clock_t end1 = clock();

	clock_t begin2 = clock();
	long long sumCount = sumC(arr, n);
	clock_t end2 = clock();

	printf("%6s %6s   %10s %10s\n", "=t1", "=t2", "=SumRec", "=SumCount");
	printf("%6.2f %6.2f   %10d %10d\n", (float)(end1 - begin1) / CLOCKS_PER_SEC, (float)(end2 - begin2) / CLOCKS_PER_SEC, sumRec, sumCount);

	free(arr);

	return 0;
}

int powRec(int n, int p)
{
	if (p == 0)
		return 1;
	else
		return n * powRec(n, p - 1);
}

void initArr(char* arr, int n)
{
	int i;
	for (i = 0; i < n; i++)
		arr[i] = rand() % 10 + '0';
}