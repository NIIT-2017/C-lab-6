#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"task3.h"

int main(void)
{
	unsigned int value;
	char buf[SIZE];

	puts("Enter a value:");
	scanf("%ud", &value);

	puts("Our value in a type of char is:");
	printf("%s\n", int2str(buf, value));

	return 0;
}
