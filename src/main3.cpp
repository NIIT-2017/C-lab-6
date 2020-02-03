#include "task3.h"
#include <stdio.h>
#include <string.h>

int main()
{
	char string[256] = { 0 };
	unsigned int value = 0;
	printf("Enter whole number\n");
	scanf("%u", &value);
	printf("%s\n",int2str(string, value));
	return 0;
}