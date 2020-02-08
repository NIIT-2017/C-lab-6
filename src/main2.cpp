#include "task2.h"

int main() {
	setlocale(LC_ALL, "russian");

	unsigned int maxLen = 0;
	unsigned int num = seqCollatz(&maxLen);

	//printf("\n************************************************\n");
	printf("num = %u, maxLen = %u\n", num, maxLen);
	//printf("************************************************\n");
	//printf("\n");

	return 0;
}