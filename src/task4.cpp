#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include "task4.h"

#define MIN 0
#define MAX 9

int size_arr(int M)
{
	int size = 1;
	for (int i = 0; i < M; i++)
		size *= 2;

	return size;
}

char* random_value(char* arr, int size)
{
	srand(time(NULL));

	for (int i = 0; i < size; i++)
		arr[i] = MIN + rand() % (MAX - MIN + 1);

	return arr;
}

long long sumC(char* arr, int len)
{
	int sumC = 0;

	for (int i = 0; i < len; i++)
		sumC += *(arr + i);

	return sumC;
}

long long sumR(char* arr, int len)
{
	if (len == 1)
		return *(arr + 0);

	else
		return sumR(arr,len/2) + sumR(arr+len/2, len - len/2);
}
