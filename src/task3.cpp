#include <stdio.h>
char* int2str(char* buf, unsigned int value) 
{
	char* originalBuf = buf;
	if (value / 10)
		int2str(buf, (value / 10));
	while (*buf >= '0' && *buf <= '9') 
	{
		buf++;
	}
	*buf = (value % 10 + '0');
	buf++;
	*buf = '\0';
	return originalBuf;
}