#include "main.h"
/**
 * _strncat - concats using n bytes from src
 * @dest: end result
 * @src: input string
 * @n: bytes to be used from src
 * Return: concated string
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
