#include "main.h"
/**
 * _strchr - find first occurrence of c
 * @s: string ptr
 * @c: character to compare
 * Return: character pointer
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
