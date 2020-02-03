#include "task1.h"
#include <stdio.h>


int main()
{
	char Fractal[M][M];
	init(Fractal); // Заполнение пробелами
	drawFractal(Fractal, M / 2, M / 2, 4);// Создание изображения
	print(Fractal);// Вывод массива
	return 0;
}