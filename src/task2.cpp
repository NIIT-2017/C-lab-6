unsigned int collatz(unsigned long long num)
{
    if (num == 1)
    {
        return 1;
    }
    if (num % 2)
    {
        return collatz(num * 3 + 1) + 1;
    }
    else
    {
        return collatz(num / 2) + 1;
    }
}

unsigned int seqCollatz(unsigned int* maxlen)
{
    *maxlen = 0;
    int length = 0;
    unsigned number = 1;

    for (unsigned int i = 2; i < 1000000; i++)
    {
        length = collatz(i);
        if (length > * maxlen)
        {
            *maxlen = length;
            number = i;
        }
    }

    return number;
}