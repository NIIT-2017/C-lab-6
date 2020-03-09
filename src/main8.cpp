#include<stdio.h>
#include"task8.h"

int main(int argc, char** arvg)
{
	printf("Expression %s = %d\n", arvg[1], eval(arvg[1]));

	return 0;
}