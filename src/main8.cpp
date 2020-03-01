#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "task8.h"
int main(int argc, char* argv[])
{
	if (argc < 2) 
	{
		printf("Do it: Run cmd -> C:\labsss\L6T8\Debug\L6T8.exe  ((2+1)*(3+3))\n");
		return 1;
	}
	printf("%d", eval(argv[1]));
	return 0;
}