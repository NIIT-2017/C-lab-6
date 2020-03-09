#include<stdio.h>
#include"task3.h"

char* int2str(char* buf, unsigned int value)
{
	static char *p = buf;
	static int i = 0;
	i++;

	char ch[] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '\0' };
	unsigned int num;

	num = value % 10; //remember symbol from the end of the value - forward recursion

	if (value >= 10)
		int2str(buf, (value / 10));

    *(p+i) = '\0'; //delete trash
	*(p++) = *(ch + num); //copy symbols to an buf - recursion reverse

	return buf;
}