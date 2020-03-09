#include<stdio.h>
#include"task6.h"

int main()
{
	int num = 0;
	printf("Enter the number\n");
	while (scanf("%d", &num)==1)
	{
		printf("Fibonnachi's Number %d and result is =%llu\n", num, fib2(num));
	}
	printf("You exit the Programm!\n");
	return 0;
}
