#include "task2.h"
#define EVEN 0
#define UNEVEN 1

int even_check(ull num)
{
    if (num % 2 == 0)
        return EVEN;
    else
        return UNEVEN;
}

ui collatz(ull num)
{
    static ui count = 1;

    if (num == 1)
    {
        ui result = count;
        count = 1;
        return result;
    }
    else
    {
        count++;
        switch (even_check(num))
        {
        case EVEN:
            num = num / 2;
            break;
        case UNEVEN:
            num = 3 * num + 1;
            break;
        }
        collatz(num);
    }
}

ui seqCollatz(ui* maxlen)
{
    ui result_num = 0;
    for (ull num = 2; num <= 1000000; num++)
    {
        if (collatz(num) > (*maxlen))
        {
            *maxlen = collatz(num);
            result_num = num;
        }
    }
    return result_num;
}