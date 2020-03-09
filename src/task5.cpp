unsigned long long fib1(int N)
{
    if (N == 0||N==1)
        return N;
    return fib1(N - 2) + fib1(N - 1);
}