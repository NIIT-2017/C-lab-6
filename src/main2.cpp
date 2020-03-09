#include <stdio.h>
#include <math.h>
#include "task2.h"
int main() 
{
	printf("please, wait for ~10 sec\n");
	unsigned int maxlen = 0;
	unsigned int number = seqCollatz(&maxlen);
	printf("collatz range 2 - 1000000 => length - %u, number - %u.\n", maxlen, number);
	return 0;
}