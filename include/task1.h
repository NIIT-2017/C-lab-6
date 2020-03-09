//Clab6 task1

/*Написать программу, которая формирует в двумерном символьном массиве фрактальное изображение и выводит его на консоль.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define M 100
#define DEPTH 1

void drawFractal(char(*arr)[M], int x, int y, int size);	
void drawSmall(char(*arr)[M], int x, int y);

// функция, формирующая изображение в массиве arr, центр задается координатами(x, y) и масштаб изображения задается size
