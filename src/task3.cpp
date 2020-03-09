#include <string.h>

char* int2str(char * buf, unsigned int value)
{
    char * p = buf;

    if (value < 10)
    {
        *p = (char)(value + '0');
        *++p = '\0';
    }
    else
    {
        int2str(p, value / 10);
        while (*p++);
        *p = '\0';
        *--p = (char)((value % 10) + '0');
    }
    return buf;
}