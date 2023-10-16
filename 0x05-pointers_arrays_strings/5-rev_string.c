#include "main.h"
#include "2-strlen.c"
/**
 * rev_string - reverses a string
 * @s: string pointer
 */

void rev_string(char *s)
{
	int end = _strlen(s) - 1;

	int start = 0;

	char temp;

	while (start <= end + 1 / 2)
	{
		temp = s[start];
		s[start] = s[end - start];
		s[end - start] = temp;
		start++;
	}
}
