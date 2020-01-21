#include <stdio.h>
#include "task4.h"

long long sumR(char* arr, int len)
{
	if (len / 2 == 0)
		return arr[0] - '0';
	else
		return sumR(arr, len / 2) + sumR(arr + len / 2, len / 2);
}

long long sumC(char* arr, int len)
{
	long long sum = 0;
	int i;
	for (i = 0; i < len; i++)
		sum += (arr[i] - '0');
	return sum;
}
