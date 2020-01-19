unsigned int collatz(unsigned long long num)
{
	unsigned int N = 1;

	while (num != 1)
	{
		if (num % 2)
			num = num * 3 + 1;
		else
			num = num / 2;
		N++;
	}

	return N;
	/*if (num == 1)
		return 1;
	if (num % 2)
		return collatz(num * 3 + 1) + 1;
	else
		return collatz(num / 2) + 1;*/
}
unsigned int seqCollatz(unsigned int* maxlen)
{
	unsigned int buf = 0;
	unsigned int number = 2;

	for (int i = 2; i <= 1000000; i++)
		if (*maxlen < (buf = collatz(i)))
		{
			*maxlen = buf;
			number = i;
		}

	return number;
}