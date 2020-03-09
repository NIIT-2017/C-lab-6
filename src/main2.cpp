#include <stdio.h>
#include <time.h>
#include "task2.h"

int main ()
{
	int start = clock();
	unsigned int max = 0;
	unsigned int* maxlen = &max;

	printf("Calculate the number that forms the longest Collatz sequence\n");

	int p = seqCollatz(maxlen);
	float time = (float)(clock() - start) / 1000;

	printf("namber - %d\nnumber of iterations - %d\nCalculation time - %0.3f sec", p, max, time);

	return 0;
}