long long sumC(char *arr, int len)
{
	long long sum=0;

	for (int i = 0; i < len; i++)
		sum = sum + (long long)(arr[i]);

	return sum;
}


long long sumR(char *arr, int len)
{
	if (1 == len)
		return (long long)(arr[0]);
	else
		return (long long)(sumR(arr,len-1))+ (long long)(arr[len-1]);
}