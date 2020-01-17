#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <clocale>

//#define M 8
//
//void drawFractal(char (*arr)[M], int x,int y, int size);

#define N 80
#define M 80

void print();
int pow(int n, int m);
void draw(int y, int x, int k);
