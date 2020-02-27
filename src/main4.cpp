#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include "task4.h"

int main(int argc, char** argv)
{
	int N; //dinamic parameter
	char *arr; //dinamic array

	N = size_arr(argc); //size calculation ourdinamic array

	arr = (char*)malloc(N*sizeof(char));
	if (arr == NULL)
	{
		puts("No memory allocated! The program completed.");
		exit(EXIT_FAILURE);
	}

	random_value(arr, N);

	clock_t begin_sumC = clock();
	long long sumCyc = sumC(arr, N);
	clock_t end_sumC = clock();

	clock_t begin_sumR = clock();
	long long sumRec = sumR(arr, (N - 1));
	clock_t end_sumR = clock();

	printf("sunC=%lld, lead time=%0.6f s\n", sumCyc, (float)(end_sumC - begin_sumC) / CLOCKS_PER_SEC);
	printf("sumR=%lld, lead time=%0.6f s\n", sumRec, (float)(end_sumR - begin_sumR) / CLOCKS_PER_SEC);

	free(arr);

	return 0;
}