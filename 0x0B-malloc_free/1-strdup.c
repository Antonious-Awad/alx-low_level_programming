
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

	if (str == NULL)
	{
		return (NULL);
	}

	dup = malloc(len * sizeof(*dup));
	for (i = 0; str[i] != '\0'; i++)
	{
		dup[i] = str[i];
	}
	dup[i] = '\0';
	return (dup);
}
