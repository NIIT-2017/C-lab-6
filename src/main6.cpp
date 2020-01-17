#include "task6.h"

int main() {
	setlocale(LC_ALL, "russian");

	for (int i = 1; i <= 25; i++)
		printf("%d-%lld\n", i, fib2(i));

	return 0;
}