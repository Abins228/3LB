#include <stdio.h>
#include <locale.h>
#define d1 2.54
#define d2 2.32166
#define d3 2.7076


void main() {
	setlocale(LC_ALL, "RUS");
	int num1, num2, dym, a, b;
	float result1, result2, result3;
	puts("������� 1");
	puts("������� ������ �����:");
	scanf("%d", &num1);
	puts("������� ������ �����:");
	scanf("%d", &num2);
	printf("�������� �����: %d � %d\n", num1, num2);
	printf("�����: %d\n��������: %d\n������������: %d\n�������: %3.2f\n������� �� �������: %d\n", num1 + num2, num1 - num2, num1 * num2, (float)num1 / num2, num1 % num2);
	puts("\t--------------");
	puts("������� 2");
	puts("������� ����� ������:");
	scanf("%d", &dym);
	result1 = dym * d1;
	result2 = dym * d2;
	result3 = dym * d3;
	printf("%d ���������� ������ � ��� %.2f �����������\n%d ��������� ������ � ��� %.2f �����������\n%d �������������� ������ � ��� %.2f �����������\n", dym, result1, dym, result2, dym, result3);
	puts("\t--------------");
	puts("������� 3");
	puts("������� ����� a � b:");
	scanf("%d %d", &a, &b);
	puts("----------------");
	printf("|%4s|%4s|%4s|\n", "a*b", "a+b", "a-b");
	puts("----------------");
	printf("|%2d*%1d|%2d+%1d|%2d-%1d|\n", a, b, a, b, a, b);
	puts("----------------");
	printf("|%4d|%4d|%+4d|\n", a * b, a + b, a - b);
}