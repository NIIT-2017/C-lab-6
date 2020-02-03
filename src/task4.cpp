#include <stdlib.h>

void init(char* arr, int len)
{
	for (int i = 0; i < len; i++)
		arr[i] = rand()%10;
}

long long sumC(char* arr, int len)
{
	long long sum1 = 0;
	for (int i = 0; i < len; i++)
		sum1 += arr[i];
	return sum1;
}

long long sumR(char *arr, int len)
{	
	if (len == 1)
		return arr[len-1];
	else
		return sumR(arr, len / 2) + sumR(arr+len/2, (len - len/2));
}

