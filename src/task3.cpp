#include <string.h>

int digit(unsigned int n)
{
	int i = 0;
	if (n > 0)
		while (n > 0)
		{
			n = n / 10;
			i++;
		}
	return i;
}

char* int2str(char* buf, unsigned int value)
{
	if (value)
	{
		int2str(buf, value / 10)[digit(value) - 1] = '0' + value % 10;
		*(buf+digit(value)) = '\0';
	}
	return buf;
}
