unsigned long long fib1(int N)
{
	if (N == 1)
		return 1;
	else if (N == 2)
		return 1;
	else
		return (fib1(N - 2) + fib1(N - 1));
}
