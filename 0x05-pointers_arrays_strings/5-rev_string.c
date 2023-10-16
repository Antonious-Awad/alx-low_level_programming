#include "main.h"
#include "1-swap.c"
#include "2-strlen.c"
/**
 * rev_string - reverses a string
 * @s: string pointer
 */

void rev_string(char *s)
{
	int end = _strlen(s) - 1;

	int start = 0;

	while (start != '\0')
	{
		swap_int(*(s + end), *(s + start));
		end--;
		start++;
	}
}
