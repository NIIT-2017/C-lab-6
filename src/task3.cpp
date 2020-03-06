#include "task3.h"

char* int2str(char *buf, unsigned int value)
{
    static int count = 0;
	int str = 0;
	int x = count;
	if (value / 10 != 0)
	{
		str = value % 10;
		count++;
		int2str(buf, value / 10);
	}
	else
	{
        str = value % 10;
	}
	buf[count - x] = '0' + str;
	buf[count + 1] = '\0';

	return buf;
}
