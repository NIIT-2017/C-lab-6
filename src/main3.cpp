#include <stdio.h>
#include "task3.h"
int main() // may be with atoi?
{
	unsigned int number = 0;
	char buf[128];
	printf("Enter number\n");
	scanf("%u", &number);
	printf("String view: \n");
	printf("%s", int2str(buf, number));
	return 0;
}