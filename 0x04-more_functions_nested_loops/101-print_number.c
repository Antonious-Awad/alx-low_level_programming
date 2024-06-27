#include "main.h"
/**
 * print_number - Prints an integer
 * @n: number to print
 */

void print_number(int n)
{
	unsigned int i;

	if (n < 0)
	{
		i = -n;
		_putchar('-');
	}
	else
	{
		i = n;
	}
	if (i / 10)
	{
		print_number(i);
	}
	_putchar(i % 10 + '0');
}
