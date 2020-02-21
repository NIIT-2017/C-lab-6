unsigned long long fib3(int N, unsigned long long a, unsigned long long b)
{
	unsigned long long fib = 0;
	N--;
	fib = a + b;
	if (N > 0)
		fib = fib3(N, fib, a);
	return fib;
}

unsigned long long fib2(int N)
{
	if (N == 0)
		return 0;
	else if (N == 1)
		return 1;
	else
		return fib3(--N, 1, 0);
}