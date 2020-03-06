#include <stdio.h>
#include "task8.h"
#define N 256
int main(int argc, char* argv[])
{
	printf("Enter some string:");
	char buf[N];
	scanf("%s", buf);
	printf("Result: %d\n", eval(buf));

	return 0;
}
