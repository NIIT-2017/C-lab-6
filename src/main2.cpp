#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "task2.h"

unsigned long long num = 2;
unsigned long long nummax = 0;

int main(void)
{
	unsigned int maxlen = 0;
	
	while (num <= 1000000)
		seqCollatz(&maxlen), num++;
	printf("%llu %u", nummax, maxlen);

	getchar();
	return 0;
}

