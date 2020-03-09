#include "task3.h"

char* int2str(char *buf, unsigned int value) {
	unsigned int num = value;
	static int i = 0;

	if (num != 0) {
		buf[i] = num % 10 + '0';
		//printf("buf[%d] => %c\n", i, buf[i]);
		//printf("buf => %s\n", buf);
		i++;
		return int2str(buf, num / 10);
	}
	else {
		buf[i] = '\0';
		char c;
		int a, j;
		for (a = 0, j = strlen(buf) - 1; a < j; a++, j--) {
			c = buf[a];
			buf[a] = buf[j];
			buf[j] = c;
		}
	}

	return buf;
}
