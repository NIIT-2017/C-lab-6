#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task2.h"




int main(void)
{
	unsigned int maxlen = 0;
	unsigned long long nummax = seqCollatz(&maxlen);
		
	printf("%llu %u", nummax, maxlen);

	getchar();
	return 0;
}