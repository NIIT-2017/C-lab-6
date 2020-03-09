#include <string.h>
#include <stdlib.h>
#include"task8.h"
#define N 256

char partition(char *buf, char *expr1, char *expr2)
{
	int brace = 0;
	int i = 0; 
	int j = 0; 
	int point = 0;
	for (i = 0; buf[i]; i++)
	{
		if (buf[i] == '(')
			brace++;
		if (buf[i] == ')')
			brace--;
		if ((buf[i] == '*' || buf[i] == '/' || buf[i] == '+' 
			|| buf[i] == '-') && brace == 1)
		{
			point = i;
			break;
		}
	}
	for (i = 1; i <= point; i++)
		expr1[j++] = buf[i];
	expr1[j] = '\0';
	j = 0;
	for (i = point + 1; buf[i + 1]; i++)
		expr2[j++] = buf[i];
	expr2[j] = '\0';
	return buf[point];
}

int eval(char *buf)
{
	char expr1[N] = { 0 }; 
	char expr2[N] = { 0 }; 
	char ch;
	if (*buf != '(')
		return atoi(buf);
	ch = partition(buf, expr1, expr2);
	switch (ch)
	{
	case '+':
		return eval(expr1) + eval(expr2);
	case '-':
		return eval(expr1) - eval(expr2);
	case '*':
		return eval(expr1) * eval(expr2);
	case '/':
		return eval(expr1) / eval(expr2);
	}
}
