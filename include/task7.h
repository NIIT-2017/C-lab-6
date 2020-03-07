#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>

#define WALL '#'
#define VOID ' '
#define WAY 'X'
#define WRONG_WAY '0'
#define X 28
#define Y 9

void place(char(*map)[X], int(*back)[X], int x, int y);
