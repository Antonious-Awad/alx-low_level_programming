#include "main.h"
/**
 * leet - leet
 * @s: input string
 * Return: encoded string
 */

char *leet(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		{
			if (s[i] == 'a' || s[i] == 'A'
						|| s[i] == 'e' || s[i] == 'E'
						|| s[i] == 'o' || s[i] == 'O'
						|| s[i] == 't' || s[i] == 'T'
						|| s[i] == 'l' || s[i] == 'L')
				{
					enum vowels v = s[i];

					s[i] = v + '0';
					}
		}
	return (s);
}
