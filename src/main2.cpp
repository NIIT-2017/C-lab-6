//Clab6 task2

#include "task2.h"

int main()
{	
	unsigned int max = 0;
	unsigned long long Num = seqCollatz(&max);

	printf("Number is %u.\nLength is %u.", (unsigned int)Num, max);

	return 0;
}