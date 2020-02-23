char* int2str(char* buf, unsigned int value)
{
	static int i = 0;
	if (value > 10)
	{
		int2str(buf, value / 10);
	}
	value %= 10;
	buf[i] = value + '0';
	buf[i + 1] = '\0';
	i++;
	return buf;
}

