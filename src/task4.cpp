//Clab6 task4

#include "task4.h"

long long sumC(char* arr, int len)
{
	int sum = 0;

	for (int i = 0; i < len; i++)
	{
		sum += arr[i];
	}

	return sum;
}


long long sumR(char* arr, int len)
{
	if (len == 1)
		return *arr;
	
	return *arr + sumR((arr+1), (len-1));
}