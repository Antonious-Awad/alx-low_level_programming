
#include "main.h"
/**
 * _strdup - duplicates a string
 * @str: string to duplicate
 * Return: pointer
 */

char *_strdup(char *str)
{
	if (str == NULL)
	{
		return (NULL);
	}

	char *dup;
	int len = strlen(str), i;

	dup = malloc(len * sizeof(*dup));
	if (dup == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		dup[i] = str[i];
	}
	dup[i] = '\0';
	return (dup);
}
