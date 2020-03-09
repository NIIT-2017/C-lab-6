#include "task8.h"

int stringToint(char* buf)
{
    int len=0;
    do {
        len++;
    } while (buf[len] >= '0' && buf[len] <= '9');
    int number = 0;
    for (int i = (len - 1); i >= 0; i--)
    {
        number += (buf[i] - '0') * pow(10, len - i - 1);
    }
    return number;
}
int doAction(char action, int A, int B)
{
    int result=0;
    switch (action)
    {
    case '+':
        result = A + B;
        break;
    case '-':
        result = A - B;
        break;
    case '*':
        result = A * B;
        break;
    case '/':
        result = A / B;
        break;
    default :
        result = A;
        break;
    }
    return result;
}
bool isAction(char symbol)
{
    char actions[] = "+-*/";
    for (int i = 0; i < 4; i++)
    {
        if (actions[i] == symbol)
            return true;
    }
    return false;
}
int findAction(char *buf)
{
    int back = 0, forward = 0, i = 0;
    i++;
    while (!isAction(buf[i]) || (back != forward))
    {
        if (buf[i] == '(')
            forward++;
        if (buf[i] == ')')
            back++;
        i++;
    }
    return i;
}
int eval(char* buf)
{
    int i;
    if (buf[0] == '(')
    {
        i = findAction(buf);
    }
    else
        return(stringToint(buf));
    char* expr1 = (char*)malloc(sizeof(char) * i),*expr2=(char*)malloc(sizeof(char)*(strlen(buf)-i));
    char action = partition(buf, expr1, expr2);
    return doAction(action,eval(expr1), eval(expr2));
}
char partition(char* buf, char* expr1, char* expr2)
{
    int expr1Len = findAction(buf);
    sprintf(expr1, "%s", &buf[1]);
    expr1[expr1Len-1] = '\0';
    sprintf(expr2, "%s", &buf[expr1Len + 1]);
    return buf[expr1Len];
}