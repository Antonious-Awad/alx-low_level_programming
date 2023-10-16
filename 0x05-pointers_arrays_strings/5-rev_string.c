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

	while (start != '\0')
	{
		temp = *(s + start);
		*(s + start) = *(s + end);
		*(s + end) = temp;
		end--;
		start++;
	}
}
