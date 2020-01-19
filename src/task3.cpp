char* int2str(char* buf, unsigned int value)
{
    unsigned int number = value / 10;
    char* p = buf;

    if (!number)
    {
        *p = (char)('0' + value);
        return ++p;
    }
    else
    {
        p = int2str(buf, number);
        *p = (char)('0' + (value % 10));
        *(p + 1) = 0;
        return ++p;
    }
}