#include "task4.h"

int main() {
	setlocale(LC_ALL, "russian");

	int size = 0;
	long long sum = 0;
	char* arr = NULL;
	char* carr = NULL;
	printf("¬ведите размер массива: ");
	scanf("%i", &size);
	size = (int)pow(2.0, size);
	arr = (char*)malloc(size * sizeof(char));
	if (arr == NULL) {
		printf("malloc error!");
		return 1;
	}

	printf("\n");

	srand(time(NULL));
	for (int i = 0; i < size; i++)
		arr[i] = rand() % 10;

	clock_t timeC = clock();
	sum = sumC(arr, size);
	timeC = clock() - timeC;
	printf("sumC = %lli, timeC = %f\n", sum, (float)timeC / CLOCKS_PER_SEC);

	clock_t timeR = clock();
	sum = sumR(arr, size);
	timeR = clock() - timeR;
	printf("sumR = %lli, timeR = %f\n", sum, (float)timeR / CLOCKS_PER_SEC);

	free(arr);
	printf("size = %d\n", size);

	return 0;
}