#define _CRT_SECURE_NO_WARNINGS
#include "task3.h"
#include <stdio.h>

#define SIZE 256

int main()
{
	char buf[SIZE] = { 0 };
	unsigned int value = 0;

	printf("Enter number\n");
	scanf("%u", &value);

	printf("%s\n", int2str(buf, value));

	return 0;
}
