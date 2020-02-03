#include <stdio.h>
#include "task8.h"

int main(int argc, char* argv[])
{
	if (argv[1] != NULL)
		printf("%d\n", eval(argv[1]));  
		
	return 0;
}