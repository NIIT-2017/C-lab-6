#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "task4.h"

void FillingArray(char* const arr, const int size)
{
	for (int j = 0; j < size; j++)
		arr[j] = rand() % 100;
}

int main()
{
	int size = 0;
	srand(time(NULL));
	printf("Enter the size of the array: ");
	scanf("%d", &size);
	
	char* arr = new char[size];
	if (arr == NULL)
	{
		printf("\nMemory is not allocated\n");
		return 0;
	}
	
	FillingArray(arr, size);

	int start1 = clock();
	printf("%lli\t",sumR(arr, size));
	float time1 = (float)(clock() - start1) / 1000;
	int start2 = clock();
	printf("%lli\t", sumC(arr, size));
	float time2 = (float)(clock() - start2) / 1000;

	printf("recurs - %0.3f, cicle - %0.3f", time1, time2);

	delete [] arr;
	arr = nullptr;

	return 0;
}