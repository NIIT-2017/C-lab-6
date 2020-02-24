// Clab6 task8

/*Написать программу, которая вычисляет целочисленный результат арифметического выражения, заданного в виде параметра командной строки. 
Предусмотреть поддержку 4-х основных операций. Порядок вычисления определяется круглыми скобками.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

bool isNum(char* c);
int eval(char* buf);
char partition(char* buf, char* expr1, char* expr2);