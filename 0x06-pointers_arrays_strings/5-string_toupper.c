#include "main.h"
#include <ctype.h>
/**
 * string_toupper - returns an uppercased string
 * @s: string
 * Return: uppercase String
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		s[i] -= 32;
	}
	return (s);
}
