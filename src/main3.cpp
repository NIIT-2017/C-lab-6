#include <stdio.h>
#include <string.h>
#include "task3.h"
#define SIZE 256

int main()
{
	unsigned int num = 0;
	printf("Enter a positive integer: ");
	int result = scanf("%u", &num);
	if (result == 0)
	{
		printf("Invalid value!\n");
		return 1;
	}
	char buf[SIZE];
	printf("%s\n", int2str(buf, num));
	return 0;
}