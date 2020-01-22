#include <stdio.h>
#include "task4.h"

long long sumR(char* arr, int len)
{
	int halflen = 0;
	if (len / 2 == 0)
		return (int)arr[0];
	else
	{
		if (len % 2 == 1)
			halflen = len % 2 + 1;
		else
			halflen = len / 2;
		return sumR(arr, halflen) + sumR(arr + halflen, len - halflen);
	}
}

long long sumC(char* arr, int len)
{
	long long sum = 0;
	int i;
	for (i = 0; i < len; i++)
		sum += (int)arr[i];
	return sum;
}