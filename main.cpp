
#define _CRT_SECURE_NO_WARNINIGS
#include <stdio.h>
#include <conio.h> // нужно для подключения getch
#include <iostream>
#include <math.h>

//using namespace std;

int GCD(int a, int b)
{
	while (a - b != 0)
	{
		if (a > b)
			a -= b;
		else
			b -= a;
	}
	return a;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	printf("Данная программа вычисляет Наименьшее общее кратное(НОК) для массива задаваемых чисел.\nДля начала работы нажмите клавишу Enter...");
	_getch();
	//cin.get();
	int i, z;// m[f]; // Объявляем переменные целого типа и массив из 10 ячеек
	int f=0; 
	printf("\nВведите количество элементов массива: ", &f);
	scanf_s("%d", &f);
	int *m = new int[f];

	for (i = 0; i < f; i++) // Начинаем цикл для заполнения массива
	{
		printf("Введите значение %d %s", i+1, "символа: ");
		scanf_s("%d", &z);  // Считываем с клавиатуры значение и присваиваем его переменной z
		if (z > 0)
		{
			m[i] = z;

		}
		else
		{
			printf("Значение меньше либо равно нулю!!! Вычисление НОК невозможно!!! Работа программы остановлена.");
			return 0;
		}
	}
	printf("Массив заполнен следующими значениями: \n");
	for (i = 0; i < f; i++) // Запускаем цикл для вывода массива на экран
		printf("Значение m[%d] = %d\n", i+1, m[i]); // Функция вывода

	int M = m[0];
	for (int i = 1; i < f; i++)
	{
		M = (M * m[i]) / GCD(M, m[i]);
	}
	printf("НОК равен:%d\nДля завершения работы нажмите клавишу Enter...", M);
	_getch();
	return 0;
}