
#define _CRT_SECURE_NO_WARNINIGS
#include <stdio.h>
#include <conio.h> // ����� ��� ����������� getch
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
	printf("������ ��������� ��������� ���������� ����� �������(���) ��� ������� ���������� �����.\n��� ������ ������ ������� ������� Enter...");
	_getch();
	//cin.get();
	int i, z;// m[f]; // ��������� ���������� ������ ���� � ������ �� 10 �����
	int f=0; 
	printf("\n������� ���������� ��������� �������: ", &f);
	scanf_s("%d", &f);
	int *m = new int[f];

	for (i = 0; i < f; i++) // �������� ���� ��� ���������� �������
	{
		printf("������� �������� %d %s", i+1, "�������: ");
		scanf_s("%d", &z);  // ��������� � ���������� �������� � ����������� ��� ���������� z
		if (z > 0)
		{
			m[i] = z;

		}
		else
		{
			printf("�������� ������ ���� ����� ����!!! ���������� ��� ����������!!! ������ ��������� �����������.");
			return 0;
		}
	}
	printf("������ �������� ���������� ����������: \n");
	for (i = 0; i < f; i++) // ��������� ���� ��� ������ ������� �� �����
		printf("�������� m[%d] = %d\n", i+1, m[i]); // ������� ������

	int M = m[0];
	for (int i = 1; i < f; i++)
	{
		M = (M * m[i]) / GCD(M, m[i]);
	}
	printf("��� �����:%d\n��� ���������� ������ ������� ������� Enter...", M);
	_getch();
	return 0;
}