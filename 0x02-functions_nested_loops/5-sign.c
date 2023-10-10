#include "main.h"
#include <ctype.h>
/**
 * print_sign - prints sign
 * @n: input number
 * Return: 1, -1 or 0 based on in the input
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
