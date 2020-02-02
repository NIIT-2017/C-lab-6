unsigned int collatz(unsigned long long num)
{
	if (num == 1)
	{
		return 1;
	}
	if ((num % 2) == 0)
	{
		num = num / 2;
		return collatz(num)+1;
	}
	else
	{
		num = 3 * num + 1;
		return collatz(num)+1;
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