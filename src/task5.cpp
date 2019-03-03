unsigned long long fib1(int N)
{
	if (0 == N)
		return 0;
	else if (1 == N)
		return 1;
	else
		return fib1(N - 2) + fib1(N - 1);

}