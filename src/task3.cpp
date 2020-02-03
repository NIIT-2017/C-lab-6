#include <stdio.h>
#include <string.h>
#include "task3.h"

static int count;

char* int2str(char* buf, unsigned int value)
{
	if (value / 10 == 0)
	{
		buf[count++] = '0' + value % 10;
		buf[count] = '\0';
		return buf;
	}
	buf = int2str(buf, value / 10);
	buf[count++] = '0' + value % 10;
	buf[count] = '\0';

	return buf;
}