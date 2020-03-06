#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include "task4.h"


int main()
{
	srand(time(NULL));
	int buf = 0;
	int str_b = (int)pow(2, buf);
	char *arr = (char*)malloc(buf * sizeof(char));
	printf("Enter string: ");
	scanf("%d", &buf);

	if (arr == NULL)
	{
		puts("Error");
	}

	for (int i = 0; i < str_b; i++)
	{
        arr[i] = rand()%128;
	}

	clock_t start, time1, time2;
	start = clock();

	int long long sum_c = sumC(arr, str_b);

	time1 = clock();
	time1 -= start;

	start = clock();
	int long long sum_r = sumR(arr, str_b);

	time2 = clock();
	time2 -= start;

	printf("Result tradicional = %f; sum = %lld\n", (float)time1 / CLOCKS_PER_SEC, sum_c);
	printf("Result recursion   = %f sum = %lld\n", (float)time2 / CLOCKS_PER_SEC, sum_r);
	free(arr);

	return 0;
}
