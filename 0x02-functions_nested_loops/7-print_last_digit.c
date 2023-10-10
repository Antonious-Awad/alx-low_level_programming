#include "main.h"
#include "6-abs.c"
/**
 * print_last_digit - prints last digit of a number
 * @n: input number
 * Return: n%10
 */
int print_last_digit(int n)
{
	_putchar(_abs(n % 10) + '0');
	return (_abs(n % 10));
}
