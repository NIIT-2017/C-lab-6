#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <clocale>

#define BUF 256

int eval(const char* buf);
char partition(char* buf, char* expr1, char* expr2);