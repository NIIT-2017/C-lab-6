#include <stdio.h>

#define HORIZONTAL 90
#define VERTICAL 90
#define X0 41
#define Y0 41
#define SIZE 4

#define EMPTY_CELL ' '
#define SYMBOL_CELL '*'

void drawFractal(char(*arr)[HORIZONTAL], int x, int y, int size);
void empty_arr(char(*arr)[HORIZONTAL]);
void print(char(*arr)[HORIZONTAL]);