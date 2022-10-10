#include <stdio.h>
#include <locale.h>
#define d1 2.54
#define d2 2.32166
#define d3 2.7076


void main() {
	setlocale(LC_ALL, "RUS");
	int num1, num2, dym, a, b;
	float result1, result2, result3;
	puts("Задание 1");
	puts("Введите первое число:");
	scanf("%d", &num1);
	puts("Введите второе число:");
	scanf("%d", &num2);
	printf("Введённые числа: %d и %d\n", num1, num2);
	printf("Сумма: %d\nРазность: %d\nПроизведение: %d\nЧастное: %3.2f\nОстаток от деления: %d\n", num1 + num2, num1 - num2, num1 * num2, (float)num1 / num2, num1 % num2);
	puts("\t--------------");
	puts("Задание 2");
	puts("Введите число дюймов:");
	scanf("%d", &dym);
	result1 = dym * d1;
	result2 = dym * d2;
	result3 = dym * d3;
	printf("%d Английских дюймов – это %.2f сантиметров\n%d Испанских дюймов – это %.2f сантиметров\n%d Старолитовских дюймов – это %.2f сантиметров\n", dym, result1, dym, result2, dym, result3);
	puts("\t--------------");
	puts("Задание 3");
	puts("введите числа a и b:");
	scanf("%d %d", &a, &b);
	puts("----------------");
	printf("|%4s|%4s|%4s|\n", "a*b", "a+b", "a-b");
	puts("----------------");
	printf("|%2d*%1d|%2d+%1d|%2d-%1d|\n", a, b, a, b, a, b);
	puts("----------------");
	printf("|%4d|%4d|%+4d|\n", a * b, a + b, a - b);
}