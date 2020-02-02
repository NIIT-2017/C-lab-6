unsigned int collatz(unsigned long long num)
{
	static int a = 1;
	int max = 1;
	if (num == 1)
	{
		max = a;
		a = 1;
		return a;
	}
	if ((num % 2) == 0)
	{
		num = num / 2;
		collatz(num);
		a++;
	}
	else
	{
		num = 3 * num + 1;
		collatz(num);
		a++;
	}
}
unsigned int seqCollatz(unsigned int* maxlen)
{
	unsigned int num = 0,dur = 0,max = 0,maxnumb = 0;
	for (int i = 2; i <= 1000000; i++)
	{
		unsigned int dur = collatz(i);
		if (dur > max)
		{
			max = dur;
			*maxlen = max;
			maxnumb = i;
		}
	}
	return maxnumb;
}