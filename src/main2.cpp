#include <stdio.h>
#include "task2.h"

int main()
{
	unsigned int number = 0, maxlen = 0;
	number = seqCollatz(&maxlen);
	printf("Max Collatz = %u\nMax length = %u", number, maxlen);
	getchar();
	return 0;
}
