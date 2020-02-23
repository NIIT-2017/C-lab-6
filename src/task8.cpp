#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 256

char partition(char* buf, char* expr1, char* expr2)
{
	int opening = 0, closing = 0;
	buf[strlen(buf)] = '\0';
	int length = strlen(buf);
	int sign = 0, isign = 0;
	
	for (int i = 0; i <= length; i++)
	{
		if (buf[i] == '(')
			opening++;
		else if (buf[i] == ')')
			closing++;
		else
		if ((buf[i] == '-' || buf[i] == '+' || buf[i] == '*' || buf[i] == '/') && ((opening - 1) == closing))
		{
			sign = buf[i];
			isign = i;
		}
	}

	int j = 0;
	for (int i = 1; i < isign; i++)
	{
		expr1[j] = buf[i];
		j++;
	}
	//buf[isign] = '\0';
	j = 0;
	for (int i = isign + 1; i < length; i++)
	{
		expr2[j] = buf[i];
		j++;
	}
	//buf[isign] = '\0';
	
	return sign;
}

int eval(char* buf)
{
	if (buf[0] != '(') 
		return atoi(buf); // number
	char expr1[SIZE] = { 0 }, expr2[SIZE] = { 0 };
	char sign;
	sign = partition(buf, expr1, expr2);
	switch (sign)
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
