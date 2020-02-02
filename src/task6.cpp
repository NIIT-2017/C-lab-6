unsigned long long fib1(unsigned long long a, unsigned long long b,int N)
{
	if (N == 1)
		return 1;
	else if (N == 2)
		return b;
	else
		return fib1(b, b + a, N - 1);
}
unsigned long long fib2(int N)
{
	return (fib1(1, 1, N));
}