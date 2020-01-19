unsigned long long findOutFib(unsigned long long one, unsigned long long two, int N)
{
    if (!N)
        return one + two;
    else
        return findOutFib(two, one + two, --N);
}

unsigned long long fib1(int N)
{
    if (N <= 0)
        return 0;
    else if (N == 1 || N == 2)
        return 1;

    int one = 1;
    int two = 1;

    return findOutFib(one, two, N - 3);
}