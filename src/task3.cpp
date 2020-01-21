#include <stdio.h>
#include <string.h>
#include "task3.h"

char* addChar(char* buf, char c)
{
	int len = 0;
	while (buf[len]>='0' && buf[len]<='9')
		len++;
	buf[len++] = c;
	buf[len] = '\0';
	return buf;
}

char* int2str(char* buf, unsigned int value)
{
	if (value / 10 == 0)
		return addChar(buf, '0' + value % 10);
	int2str(buf, value / 10);
	addChar(buf, '0' + value % 10);
}
