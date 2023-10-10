#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 * @n: input number
 * Return: n%10
 */
int print_last_digit(int n)
{
	n = _abs(n);
	n %= 10;
	_putchar(n + '0');
	return (n);
}
