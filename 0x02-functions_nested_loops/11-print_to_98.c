#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints numbers till 98
 * @n: starting number
 */
void print_to_98(int n)
{
	int larger = n > 98;
	int i;

	switch (larger)
	{
	case 0:
		for (i = n; i <= 98; i++)
		{
			printf("%d, ", i);
		}
		break;
	case 1:
		for (i = n; i >= 98; i--)
		{
			printf("%d, ", i);
		}

	default:
		break;
	}
}
