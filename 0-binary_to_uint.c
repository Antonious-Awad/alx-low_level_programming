#include "main.h"
/**
 * binary_to_uint - turns a binary to an unsigned int
 * @b: binary
 * Return: decimal value
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int base = 1, i, res;

	int num;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	for (base = 1, res = 0, i--; i >= 0; base *= 2)
	{
		res += base;
	}

	return (res);
}
