
#include "main.h"
/**
 * _strdup - duplicates a string
 * @str: string to duplicate
 * Return: pointer
 */

char *_strdup(char *str)
{
	char *dup;
	int len = strlen(str), i;

	dup = malloc(len * sizeof(*dup));
	if (str == NULL || dup == NULL)
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
