#include "main.h"
/**
 * check_palindrome - checks palindrome or not
 * @s: string pointer
 * @l: length
 *
 * Return: 0 or 1.
 */

int check_palindrome(char *s, int l)
{
	if (*s != *(s + l))
		return (0);

	else if (*s == '\0')
		return (1);

	return (check_palindrome(s + 1, l - 1));
}
/**
 * is_palindrome - checks if a string is palindrome or not
 * @s: string pointer
 * Return: 1 or 0
 */

int is_palindrome(char *s)
{
	int length = _strlen_recursion(s);
}
