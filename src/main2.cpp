#include <stdio.h>
#include "task2.h"

int main()
{
	unsigned int maxlen = 0;						// maximal Collatz sequence lenght
	unsigned int maxNumber = seqCollatz(&maxlen);	// value for the maximal Collatz sequence lenght
	
	printf("Number %u has the longest Collatz sequence lenght - %u\n", maxNumber, maxlen);

	return 0;
}