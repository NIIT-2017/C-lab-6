#include <ctype.h>
#include <stdlib.h>

char partition(char* buf, char** expr1, char** expr2)
{
    char sign = '?';
    char c = 0;
    char* cp = buf;
    char* ptex2 = NULL;
    *expr1 = cp + 1;
    int counter = 0;
    while (c = *++cp)
    {
        if (c == '(')
            counter++;
        else if (c == ')')
            counter--;
        else if (!counter && !isdigit(c))
        {
            sign = c;
            ptex2 = cp + 1;
            break;
        }
    }
    if (sign == '?')
        sign = '+';
    else
        *expr2 = ptex2;
    return sign;
}

int eval(char* buf)
{
    char sign = '+';
    float lvalue = 0;
    float rvalue = 0;
    char* expr1 = NULL;
    char* expr2 = NULL;

    sign = partition(buf, &expr1, &expr2);

    if (expr1 != NULL)
        if (isdigit(*expr1))
            lvalue = atoi(expr1);
        else
            lvalue = eval(expr1);
    
    if (expr2 != NULL)
        if (isdigit(*expr2))
            rvalue = atoi(expr2);
        else
            rvalue = eval(expr2);

    switch (sign)
    {
    case '+':
        return (int)(lvalue + rvalue);
    case '-':
        return (int)(lvalue - rvalue);
    case '/':
        return (int)(lvalue / rvalue);
    case '*':
        return (int)(lvalue * rvalue);
    default:
        return 0;
    }
}