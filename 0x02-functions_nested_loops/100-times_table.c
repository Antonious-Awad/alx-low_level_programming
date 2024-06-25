#include "main.h"
/**
 * print_times_table - prints the times table until it reaches n
 * @n: the last times table index
 */

void print_times_table(int n)
{
	int i, j;

	if (n < 0 || n > 15)
	{
		return;
	}

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			int prod = i * j;

			if (j == 0)
				_putchar('0');
			else if (prod < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(prod + '0');
			}
			else if (prod < 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(prod / 10 + '0');
				_putchar(prod % 10 + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(prod / 100 + '0');
				_putchar((prod % 100) / 10 + '0');
				_putchar(prod % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
