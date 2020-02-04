#include "task2.h"
unsigned int seqCollatz(unsigned int* maxlen)
{
    unsigned long long int maxNumber=0;
    int maxI;
    for (int i = 3; i < MAX; i++)
    {
        unsigned long long int  current = collatz(i);
        if (current > maxNumber)
        {
            maxNumber = current;
            maxI = i;
            *maxlen = current;
        }
    }
    return maxI;
}
unsigned int collatz(unsigned long long num)
{
    if (num == 1)
        return 1;
    int count = 1;
    if (num % 2 == 0)
        return 1+collatz(num / 2);
    else
       return 1+collatz((3 * num) + 1);

}