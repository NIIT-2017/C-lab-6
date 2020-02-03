#include "task8.h"
#include <stdio.h>
#include <stdlib.h>

char partition(char* buf, char* expr1, char* expr2)
{
	int i = 0;
	int a = 0;
	while (buf[i])
	{
		if (a == 1 && (buf[i] == '+' || buf[i] == '-' || buf[i] == '/' || buf[i] == '*'))
		{
			expr1[i-1] = '\0';
			int j = 0, k = i + 1;
			while (buf[k])
			{
				if (buf[k+1] == '\0')
					expr2[j] = '\0';
				else
					expr2[j] = buf[k];
				k++;
				j++;
			}
			return buf[i];
		}
		if (buf[i] == '('&& a==0)
			a++;
		else if (buf[i] == '('&& a != 0)
		{
			expr1[i-1] = buf[i];
			a++;
		}
		else if (buf[i] == ')')
		{
			expr1[i-1] = buf[i];
			a--;
		}
		else 
			expr1[i-1] = buf[i];
		i++;
	}
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