#include"task3.h"
extern int j = 0;
char * int2str(char *buf, unsigned int value)
{
    int i = 0;
    if((value = (value - (i=value % 10))/10)>0)
      int2str(buf,value);
    buf[j]=i+48;
    j++;
    return buf;
}
