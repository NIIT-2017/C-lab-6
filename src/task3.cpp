char* int2str(char* buf, unsigned int value)
{
    unsigned int number = value / 10;
    char* p = buf;

    if (!number)
    {
        *buf = (char)('0' + value);
        *(buf + 1) = 0;
        return buf;
    }
    else
    {
        int2str(buf, number);
        while (*p++);
        *p = 0;
        *(p - 1) = (char)('0' + (value % 10));
        return buf;
    }
}