#include <stdio.h>
#include <string.h>
#include "task3.h"

static int count;
/*
char* addChar(char* buf, char c)
{
	int len = 0;
	while (buf[len]>='0' && buf[len]<='9')
		len++;
	buf[len++] = c;
	buf[len] = '\0';
	return buf;
}
*/
char* addChar(char* buf, char c)
{
	int len = 0;
	//len = strlen(buf) //strlen не использовалась, т.к. в условии задачи есть запрет использования библиотечных функций
	while (buf[len])
		len++;
	buf[len++] = c;
	buf[len] = '\0';
	return buf;
}


char* int2str(char* buf, unsigned int value)
{
	if (count == 0)
		buf[0] = '\0';
	count++;

	if (value / 10 == 0)
		return addChar(buf, '0' + value % 10);
	int2str(buf, value / 10);
	addChar(buf, '0' + value % 10);
}
