//Clab6 task3

#include "task3.h"

char* int2str(char* buf, unsigned int value)
{
	buf[0] = '\0';
	int timeBuf = 0;
	if (value == 0)
		return buf;

	timeBuf = value % 10;

	char letter = '0' + timeBuf;

	int2str(buf, value / 10);

	int position = strlen(buf);
	buf[position] = letter;
	buf[position + 1] = '\0';

	return buf;
}