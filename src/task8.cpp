#include "task8.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int checkOperator(char symbol)
{
    if (symbol == '-' || symbol == '+' || symbol == '*' || symbol == '/')
        return 1;
    else
        return 0;
}

char partition(char* buf, char* expr1, char* expr2)
{
    int openingCount = 0, closingCount = 0;
  if (buf[strlen(buf) - 1] == '\n')
        buf[strlen(buf) - 1] = '\0';
    int len = strlen(buf);
    int op = 0, opPosition = 0;
    for (int i = 0; i <= len; i++)
    {
        if (buf[i] == '(')
            openingCount++;
        else if (buf[i] == ')')
            closingCount++;
        else if (checkOperator(buf[i]) == 1 && ((openingCount - 1) == closingCount))
        {
            op = buf[i];
            opPosition = i;
        }
        else
            continue;
    }
    for (int i = 1, j = 0; i < opPosition; i++, j++)
        expr1[j] = buf[i];
    for (int i = opPosition + 1, j = 0; i < len; i++, j++)
        expr2[j] = buf[i];
    return op;
}

int eval(char* buf)
{
    if (buf[0] != '(')
        return atoi(buf);
    char expr1[256] = { 0 }, expr2[256] = { 0 };
    char op;
    op = partition(buf, expr1, expr2);
    switch (op)
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
