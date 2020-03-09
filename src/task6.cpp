#include "task6.h"
typedef unsigned long long ULL;
ULL fib3(int i,ULL*p1, ULL *p2)
{
if (i <= 2)
{
	*p1 = 0;
	*p2 = 1;
}
else
{
	ULL result = fib3(i - 1, p1, p2);
	*p1 = *p2;
	*p2 = result;
}
	return *p2 + *p1;
}

ULL fib2(int N)
{
	ULL a, b;
	return fib3(N, &a, &b);
}
