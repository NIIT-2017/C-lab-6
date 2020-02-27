#include<stdio.h>
#include"task2.h"

int main()
{
	unsigned int number;
	unsigned int maxlen=0;

	number = seqCollatz(&maxlen);
	printf("\nNumber %u has the longest line = %u\n", number, maxlen);

	return 0;
}