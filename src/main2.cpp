#include "task2.h"
#include <stdio.h>

int main()
{
	unsigned int maxlen = 0;
	unsigned int* q = &maxlen;
	unsigned int num = seqCollatz(q);
	printf("%u - %u\n", num, maxlen);
	return 0;
}