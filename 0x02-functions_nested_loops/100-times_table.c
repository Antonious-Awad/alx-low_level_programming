#include "main.h"
/**
 * print_times_table - prints the times table until it reaches n
 * @n: the last times table index
 */

void print_times_table(int n)
{
	int i, j, prod;

	if (n < 0 || n > 15)
	{
		return;
	}

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			prod = i * j;
			if (prod > 99)
			{
				_putchar(prod / 100 + '0');
				_putchar((prod % 100) / 10 + '0');
				_putchar(prod % 10 + '0');
			}
			else if (prod > 9)
			{
				_putchar(' ');
				_putchar(prod / 10 + '0');
				_putchar(prod % 10 + '0');
			}
			else if (j != 0)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(prod + '0');
			}
			else
				_putchar('0');
			if (j < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
