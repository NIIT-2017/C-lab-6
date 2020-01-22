typedef unsigned long long ULL;

ULL fib_iter(ULL K, ULL M, int N)
{
    if (N == 1)
        return M;
    else
        return fib_iter(M, K + M, N - 1);
}

ULL fib(int i)
{
    return fib_iter(0, 1, i);
}