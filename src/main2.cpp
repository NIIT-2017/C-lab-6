#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task2.h"




int main(void)
{
	unsigned int maxlen = 0, number = 0;
	number = seqCollatz(&maxlen);
		
	printf("%u %u", number, maxlen);

	getchar();
	return 0;
}