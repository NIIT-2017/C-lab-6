#include "task3.h"

char int2char(int a)
{
    char result = a + '0';
    return result;
}

char* turn_arr(char* arr, int size)
{
    for (int i = 0; i < size / 2; i++)
    {
        char ch;
        ch = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = ch;
    }
    return arr;
}

char* int2str(char* buf, ui value)
{
    static int count = 0;
    
    if (value == 0 && count == 0)
    {
        buf[0] = '0';
        count++;
    }

    if (value == 0)
    {
        turn_arr(buf, count);
        buf[count] = '\0';
        return buf;
    }
    else
    {
        buf[count] = int2char(value % 10);
        count++;
        value = (value - (value % 10)) / 10;
        int2str(buf, value);
    }
}