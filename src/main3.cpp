#include <stdio.h>
#include "task3.h"
#define SIZE 20

int main()
{
	unsigned int value = 0;
	char buf[SIZE];

	printf("Enter num: ");
	scanf("%d", &value);

	int2str(buf, value);
	printf("This is a string: %s\n", buf);

	return 0;
}

