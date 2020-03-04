#include <stdio.h>
#include <stdlib.h>
#include "task3.h"
#define N 256

int  main()
{
	unsigned int value;
	char buf[N] = { 0 };
	puts("Enter the number!");
	scanf("%u", &value);
	printf("Digits were transformed to string : %s\n", int2str(buf, value));
	return 0;
}
