#include <stdio.h>
#include "task8.h"

int main(int argc, char* argv[])
{
	printf("You are welcomed by the string calculator, enter your string:");
	char bufer[256];
	scanf("%s", bufer);
	printf("\nThe result of calculating your row: %d\n", eval(bufer));
	
	return 0;
}
