#include "main.h"
/**
 * _strlen_recursion - returns string length
 * @s: string pointer
 */

int _strlen_recursion(char *s)
{
	int count;

	if (*s == '\0')
		return (0);
	count = _strlen_recursion(s + 1) + 1;
	return (count);
}
