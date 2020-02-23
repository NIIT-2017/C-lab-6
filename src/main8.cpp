#include "task8.h"
#include <stdio.h>

int main(int argc, char* argv[])
{
	printf("%s = %d\n", argv[1], eval(argv[1]));
	return 0;
}