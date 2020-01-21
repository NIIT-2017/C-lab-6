#include <stdio.h>
#include <stdlib.h>
#include "task8.h"

void fillExpr2(char *buf, int i, char *expr2)
{
	int lenex2 = 0;
	while (buf[i])
	{
		expr2[lenex2] = buf[i];
		lenex2++;
		i++;
	}
	expr2[lenex2 - 1] = '\0';
}

int eval(char* buf)
{
	if (buf[0] != '(')
		return atoi(buf);
	char a1[256], a2[256];
	char op;
	op = partition(buf, a1, a2);
	
	switch (op)
	{
		case '+':
			return eval(a1) + eval(a2);
		case '-':
			return eval(a1) - eval(a2);
		case '*':
			return eval(a1) * eval(a2);
		case '/':
			return eval(a1) / eval(a2);
	}
}

char partition(char* buf, char* expr1, char* expr2)
{
	char op;
	int i = 1;
	int lenex1 = 0;
	int lenex2 = 0;
	int bracket = 0;

	if (buf[1] == '(') 
	{
		while (buf[i]) 
		{
			if (buf[i] == '(')
				bracket++;
			if (buf[i] == ')')
				if (bracket > 1)
					bracket--;
				else
				{
					expr1[lenex1] = buf[i]; 
					i++;
					lenex1++;
					break;
				}
			expr1[lenex1] = buf[i];
			i++;
			lenex1++;
		}
		expr1[lenex1] = '\0';

		op = buf[i];
		i++;
		fillExpr2(buf, i, expr2);
		return op; 
	}
	else if (buf[1] >= '0' && buf[1] <= '9')
	{
		while (buf[i] >= '0' && buf[i] <= '9')
		{
			expr1[lenex1] = buf[i];
			i++;
			lenex1++;
		}
		expr1[lenex1] = '\0';
		op = buf[i];
		i++;
		fillExpr2(buf, i, expr2);
		return op;
	}

}
