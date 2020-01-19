

long long sumC(char* arr, int len)
{
	long long int sum = 0;
	for (int j = 0; j < len; j++)
		sum = sum + arr[j];
	return sum;
}
long long sumR(char* arr, int len)
{
	if (len == 1)
		return arr[0];
	else
		return sumR(arr, len/2) + sumR(arr+ len/2, len - len/2);
}