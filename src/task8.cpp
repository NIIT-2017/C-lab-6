#include "task8.h"
int stringToint(char* buf,int *len)
{
    do {
        (*len)++;
    } while (buf[*len] >= '0' && buf[*len] <= '9');
    int number = 0;
    for (int i = (*len - 1); i >= 0; i--)
    {
        number += (buf[i] - '0') * pow(10, (*len) - i - 1);
    }
    printf("\n new Number %d", number);
    return number;
}
int doAction(char action, int A, int B)
{
    printf("\nAction %d %c %d",A, action,B);
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
int computeLeap(char* buf, int i)
{
    printf("\nCompute leap");
    int leap = 0;
    int forward = 0, back = 0;
    bool first = true;
    do
    {
        if (buf[i + leap] == '(')
        {
            forward++;
            first = false;
        }
        if (buf[i + leap] == ')')
            back++;
        if (back == forward && !first)
        {
            leap -= 1;
            break;
        }
        leap++;
    } while (back <= forward && buf[i + leap] != '\0');
    printf(" %d", leap);
    return leap;
}
bool isEnd(char* buf,int end)
{
    int i = 0, back = 0, forward = 0;
    while (i<end)
    {
        if (buf[i] == '(')
            forward++;
        if (buf[i] == ')')
        {
            back++;
            if (back > forward)
                return false;
        }
        i++;
    }
    printf("\nIs end true");
    return true;
}
int eval(char* buf)
{
    printf("\nNew eval : %s",buf);
    int result = 0;
    int i=0;
    int level=0;
    bool first = true;
    char action;
    do
    {
        if (buf[i] == '(')
        {
            if (level == 0)
            {
                printf("\nLevel zero");
                if (first == true)
                {
                    printf("\nFirst :");
                    result +=eval(&buf[i] + 1);
                    printf("\nNew result %d", result);
                    first = false;
                    int leap = computeLeap(buf, i);
                    if (isEnd(&buf[i], leap))
                        return result;
                    i += leap;
                }
            }
            level++;
        }
        else
        {
            if (buf[i] == ')')
            {
                level--;
                if (level < 0)
                    return result;
            }
            if (buf[i] >= '0' && buf[i] <= '9'&&first)
            {
                int len=0;
                result += stringToint(&buf[i], &len);
                first = false;
                printf("\nNew result %d", result);
                i += len-1;
            }
            if (buf[i] == '+' || buf[i] == '/' || buf[i] == '*' || buf[i] == '-')
            {
                result = doAction(buf[i], result, eval(&buf[i] +1));
                printf("\nNew result %d", result);
                int leap = computeLeap(buf, i) + 1;
                if (isEnd(&buf[i], leap))
                    return result;
                i += leap;
            }
        }
        i++;
    } while (buf[i] != '\0');
    return result;
}
char partition(char* buf, char* expr1, char* expr2)
{
    return 'a';
}