//Clab6 task3

#include "task3.h"

int main()
{
	int getNumber = 0;

	puts("Enter any number!");
	scanf("%d", &getNumber);

	char line[SIZE];
	
	int2str(line, getNumber);
	
	printf("%s", line);

	return 0;
}