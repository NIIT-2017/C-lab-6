#include "task8.h"
#include <stdlib.h>
#include <string.h>

int eval(const char* buf)
{
    if (buf[0] != '(')
        return atoi(buf);
    char a1[256], a2[256];
    char op;
    op = partition((char *)buf, a1, a2);
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
    int i = 1, count = 0;
    char op;

    while (buf[i])
    {
        if (buf[i] == '(')
            count++;
        else if (buf[i] == ')')
            count--;
        else if (count == 0 && !(buf[i] >= '0' && buf[i] <= '9'))
        {
            op = buf[i];

            // copy first operand
            int j = 0;
            while (j < i - 1)
            {
                expr1[j] = buf[j + 1];
                j++;
            }
            expr1[j + 1] = '\0';

            // copy second operand
            int k = i + 1, m = 0;
            while (k < strlen(buf))
            {
                expr2[m] = buf[k];
                k++;
                m++;
            }
            expr2[m + 1] = '\0';
            break;
        }
        i++;
    }
    return op;
}