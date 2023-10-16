#include "main.h"
/**
 * puts2 - prints every other character
 * @str: string pointer
 */

void puts2(char *str)
{
	int n = strlen(str);

	for (int i = 0; i < n; i++)
	{
		if (str[i] - '0' % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
