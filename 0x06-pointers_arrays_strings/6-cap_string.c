#include "main.h"
#include <ctype.h>
/**
 * cap_string - Capitalize all words of a string
 * @s: string
 * Return: capitalized string
 */

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0)
			s[i] = toupper(s[i]);
		if ((s[i] == ' ' || s[i] == '\n' || s[i] == '.') && s[i + 1] != '\0')
			s[i + 1] = toupper(s[i + 1]);
	}
	return (s);
}
