#include "task2.h"

int main()
{
    ui maxlen = 1;
    ui* pmaxlen = &maxlen;

    printf ("Result number %d\n", seqCollatz(pmaxlen));
    printf("Result Collatz length %d\n", *pmaxlen);

    return 0;
}