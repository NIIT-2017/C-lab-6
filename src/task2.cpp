/*
unsigned int seqCollatz(unsigned int *maxlen) - функция, возвращающая число и записывающую по адресу maxlen длину
unsigned int collatz(unsigned long long num) - функция, возвращающая длину последовательности Коллатца для числа num
*/

#include "task2.h"

#define BN 10

unsigned int seqCollatz(unsigned int* maxlen) {
	unsigned int max = 0, len = 0;
	int i = 0;
	int num = 0;
	
	while (num != 1) {
		num = (num & 1) ? (3 * num + 1) : (num >>= 1);
		printf("%lli  ", num);
	}
	printf("\n");

	return max;
}



unsigned int collatz(unsigned long long num) {
	unsigned int maxlen = 0;
	unsigned int number  = 0;

	//number = seqCollatz(&maxlen);

	unsigned int cnt = 1;
	if (num == 1)
		return cnt;

#if BN > 3
	printf("\nnum = %lli\n", num);
	while (num != 1) {
		num = (num & 1) ? (3 * num + 1) : (num >>= 1);
		printf("%lli  ", num);
		cnt++;
	}
#elif

	while (num != 1) {
		num = (num & 1) ? (3 * num + 1) : (num >>= 1);
		cnt++;
	}
#endif

	return cnt;

}
