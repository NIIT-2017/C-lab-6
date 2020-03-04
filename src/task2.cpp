#include"task2.h"
typedef unsigned long long ULL;
unsigned int collatz(usigned long long num)
{
   if(num ==1)
     return 1;
   if(num % 2 ==0)
     return collatz(num/2)+1;
   else
     return collatz(3*num+1)+1;
}
unsigned int seqCollatz(unsigned int *maxlen)
{
   ULL Sequence =1;
   ULL j =0;
   *maxlen -1;
   for(int  i =2 ; i <= 1000000;i++)
   {
      j = collatz(i);
      if(j > *maxlen)
      {
	 *maxlen = j;
	 Sequence = i;
      }
   }
   return Sequence;
}
