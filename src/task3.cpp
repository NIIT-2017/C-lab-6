#include "task3.h"
#include <stdio.h>
#include <string.h>

char* int2str(char* buf, unsigned int value)
{
    if (value > 10)
    {
        int2str(buf, value / 10);
        int number = value % 10;
        buf[strlen(buf)] = '0' + number;
        buf[strlen(buf) + 1] = '\0';
    }
    else
    {
        int number = value % 10;
        buf[strlen(buf)] = '0' + number;
        buf[strlen(buf) + 1] = '\0';
    }
    return buf;
}
