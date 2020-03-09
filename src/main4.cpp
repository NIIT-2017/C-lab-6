#include"task4.h"
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

int main()
{
	char *arr;
	int a = 0;
    int b = 0;
	srand(time(NULL));
	printf("Enter the number!\n");
	scanf("%d", &b);
	a = (int)pow(2, b);
	arr = (char*)malloc(a * sizeof(char));
	for (int i = 0; i < a; i++)
		arr[i] = rand() % 10;
	clock_t begin1 = clock();
	printf("Sum Array By Cycle! =%lld\n", sumC(arr, a));
	clock_t begin2 = clock();
	printf("Summary array by Cycle%1.f\n", 
		(float)(begin2 - begin1) / CLOCKS_PER_SEC);
	begin1 = clock();
	printf("Sum Array By recourse =%lld\n", sumR(arr, a));
	begin2 = clock();
	printf("Summary array by Recourse%1.f\n", 
		(float)(begin2 - begin1) / CLOCKS_PER_SEC);
	free(arr);
	arr = 0;
	return 0;
}
