#include <stdio.h>
#include "task6.h"

int main()
{
	int number;
	printf("Enter a number: ");
	scanf("%d", &number);

	printf("Number %d = %lld fibonacci sequence \n", number, fib2(number));
	return 0;
}
