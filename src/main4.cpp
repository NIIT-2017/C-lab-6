//Clab6 task4

#include "task4.h"

int main(int argc, char* argv[])
{
	int N = pow (2,(*argv[1]-'0'));

	char* numbers;
	numbers = (char*)malloc(N * sizeof(char));

	time_t now;
	time(&now); 
	srand(now);
	
	for (int i = 0; i < N; i++)
	{
		numbers[i] = rand() % (100) + 1;
	}

	time_t CycFirstT;
	time_t CycSecondT;
	time_t RecFirstT;
	time_t RecSecondT;

	CycFirstT = time(NULL);
	sumC(numbers, N);
	CycSecondT = time(NULL);


	RecFirstT = time(NULL);
	sumR(numbers, N);
	RecSecondT = time(NULL);

	if ((CycSecondT - CycFirstT) > (RecSecondT - RecFirstT))
		puts("Cycle calculation is faster!!!");
	
	else
		puts("Recursive calculation is faster!!!");

	return 0;
}