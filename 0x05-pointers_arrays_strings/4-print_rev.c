#include "main.h"
/**
 * print_rev - prints reversed string
 * @s: string pointer
 */

void print_rev(char *s)
{
	int i;
	int n = _strlen(s) - 1;
	char sRev[n];
	for (i = n; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
}
