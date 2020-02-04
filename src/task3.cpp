#include "task3.h"
int int2strRecursion(char* buf, unsigned int value, int *len)
{
    if (value == 0)
        return -1;
    else
        (*len)++;
    int pos = int2strRecursion(buf, value / 10, len)+1;
    buf[pos] = (value % 10) + '0';
    return pos;
}
char* int2str(char* buf, unsigned int value)
{
    int len=0;
    int2strRecursion(buf, value, &len);
    buf[len] = '\0';
    return buf;
}