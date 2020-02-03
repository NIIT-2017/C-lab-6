#include <stdio.h>
#include "task2.h"

int main()
{
	//printf("%u\n", collatz(27));
	unsigned int maxlen;
	unsigned int num = seqCollatz(&maxlen);
	printf("The number %u has the longest sequence, size %u.\n", num, maxlen);
	return 0;
}