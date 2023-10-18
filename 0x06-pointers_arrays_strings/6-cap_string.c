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

	int newWord = 1;

	for (i = 0; s[i] != '\0'; i++)
	{

		if (newWord && s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = toupper(s[i]);
			newWord = 0;
		}
		if (s[i] == '0' || s[i] == '.' || s[i] == '\n')
		{
			newWord = 1;
		}
	}
	return (s);
}
