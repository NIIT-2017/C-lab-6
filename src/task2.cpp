/*
unsigned int seqCollatz(unsigned int *maxlen) - функция, возвращающая число и записывающую по адресу maxlen длину
unsigned int collatz(unsigned long long num) - функция, возвращающая длину последовательности Коллатца для числа num
*/

#include "task2.h"

unsigned int collatz(unsigned long long num) {
	if (num == 1)
		return 1;

	//while (num != 1) {
	//	num = (num & 1) ? (3 * num + 1) : (num >> 1);
	//	cnt++;
	//}

	if (num % 2) {
		return collatz(num * 3 + 1) + 1;
	}
	else {
		return collatz(num >> 1) + 1;
	}
}

unsigned int seqCollatz(unsigned int* maxlen) {
	unsigned int len = 0;
	int i = 0;
	int num = 0;

	for (i = 2; i <= MAX_NUM; i++) {
		len = collatz(i);
		if (*maxlen < len) {
			*maxlen = len;
			num = i;
		}
	}

	return num;
}
