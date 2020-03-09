#include <stdio.h>
#include <math.h>

unsigned int collatz(unsigned long long num) {  // функция, возвращающая длину последовательности Коллатца для числа num
    if (num == 1) {
        return(num);
    }
    if (num % 2 != 0) {
        return collatz(3 * num + 1)+1;
    }
    else {
        return collatz(num / 2)+1;
    }
}

unsigned int seqCollatz(unsigned int* maxlen) {     //функция, возвращающая число и записывающую по адресу maxlen длину 
    unsigned int length = 0;
    unsigned int maxLength = 0;
    unsigned int number = 0;

    for (unsigned int i = 2; i < 1000000; i++) {
        length = collatz(i);
        if (length > maxLength) {
            maxLength = length;
            number = i;
        }
    }
    *maxlen = maxLength;
    return number;
}
