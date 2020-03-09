// Clab6 task6

#include "task6.h"

int main()
{
	unsigned long long res;

	FILE* fp;
	fp = fopen("fib2.txt", "w");
	if (NULL == fp)
	{
		puts("FILE ERROR!");
		return 1;
	}

	fprintf(fp, "N  res  time\n");

	clock_t timeRes;
	clock_t timeStart;
	clock_t timeEnd;

	for (int i = 1; i <= SIZE; i++)
	{
		timeStart = clock();
		res = fib2(i);
		timeEnd = clock();

		timeRes = timeEnd - timeStart;

		printf("%d  %lld  %f\n", i, res, ((double)timeRes / CLOCKS_PER_SEC));
		fprintf(fp, "%d  %lld  %f\n", i, res, ((double)timeRes / CLOCKS_PER_SEC));
	}

	fclose(fp);

	return 0;
}