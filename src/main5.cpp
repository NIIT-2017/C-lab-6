#include "task5.h"

int main() {
	setlocale(LC_ALL, "russian");



	FILE* fp;
	if (!(fp = fopen("Fibonacci.txt", "w"))) {
		puts("Ошибка открытия файла in.txt!\n");
		return 1;
	}

	for (int i = 1; i <= 33; i++) {
		printf("%d-%lld\n", i, fib1(i));
		fprintf(fp, "%d-%lld\n", i, fib1(i));
	}

	fclose(fp);

	return 0;
}