#include"task2.h"
#include<stdio.h>

int main()
{
	unsigned int maxlen, num;
	num = seqCollatz(&maxlen);
	printf("The longest Collatz's sequence is =%u", num);
	return 0;
}
