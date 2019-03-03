#include <stdio.h>
#include "task3.h"

int main()
{
	char buf[32];
	unsigned int value;

	puts("Please enter a value for transforming into a string:");
	scanf("%u", &value);
	putchar('\n');

	printf("String: %s", int2str(buf, value));

	return 0;
}