#include "task2.h"

int main() {
	setlocale(LC_ALL, "russian");

	unsigned int maxLen = 0, len = 0;
	int i = 0;
	int num = 0;

	for (i = 2; i <= MAX_NUM; i++) {
#undef BN
		len = collatz(i);
		if (maxLen < len) {
			maxLen = len;
			num = i;
		}
	}

	//seqCollatz(&maxLen);

	printf("\n************************************************\n");
	printf("num = %d, maxLen = %u\n", num, maxLen);
	printf("************************************************\n");

#define BN 5
	collatz(num);
	printf("\n");

}