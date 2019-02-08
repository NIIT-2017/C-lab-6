#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "task8.h"

int main(int argc, char* argv[])
{
	if (argc < 2)
	{
		printf("Usage: cmd_hello number");
		return 1;
	}
	
	char *buf = argv[1];
	printf("%d", eval(buf + 1));

	getchar();
	return 0;
}

