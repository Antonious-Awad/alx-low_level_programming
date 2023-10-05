#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: Always 0
 */

int main(void)
{
	for (char c = 'a'; c <= 'z'; c++)
	{
		if (c == 'q' || c == 'e')
			continue;
		putchar(c);
	}
	return (0);
}
