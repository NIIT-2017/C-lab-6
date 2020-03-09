#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"task8.h"

int eval(char* buf)
{
	if (buf[0] != '(')
		return atoi(buf);

	char expr1[SIZE], expr2[SIZE];
	char operation;

	operation = partition((char*)buf, expr1, expr2);
	switch (operation)
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
char partition(char* buf, char* expr1, char* expr2)
{
	int i = 1;
	int bracket = 0;
	int j, z = 0;
	char operation;

	while (buf[i])
	{
		if (buf[i] == '(')
			bracket++;
		else if (buf[i] == ')')
			bracket--;
		else if (bracket == 0 && !(buf[i] >= '0' && buf[i] <= '9'))
		{
			operation = buf[i];
			printf("%c\n", operation);

			for (j = 0; j < i - 1; j++) //to copy in the expr1 
				expr1[j] = buf[j + 1];
			expr1[j] = '\0';

			for (int k = i + 1; k < strlen(buf); k++, z++) //to copy in the expr2 
				expr2[z] = buf[k];
			expr2[z] = '\0';
			break;
		}
		i++;
	}

	return operation;
}