#include <stdio.h>
#include "task8.h"

int main(int argc, char* argv[])
{
	if (argc != 2)
	{
		printf("ERROR");
		return 1;
	}
	else printf("RESULT =%d\n", eval(argv[1]));

	return 0;
}
