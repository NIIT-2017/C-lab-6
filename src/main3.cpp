#include <stdio.h>
#include <string.h>
#include "task3.h"

int main()
{
	unsigned int value = 0;
	char string[19]{};
	char* str = string;

	printf("Enter a number to translate into a string: ");
	scanf("%u", &value);
	
	printf("Your string: %s\n", int2str(str, value));

	return 0;
}