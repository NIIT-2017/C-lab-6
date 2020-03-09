#include "task2.h"

int main()
{
	unsigned int maxlen = 0;
	int maxnumber = seqCollatz(&maxlen);
	printf("Number is %u, max length is %u\n", maxnumber, maxlen);
	return 0;
}
