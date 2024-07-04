#include "main.h"

/**
 * reverse_string - reverses an string
 * @a: char pointer
 *
 */

void reverse_string(char *a)
{
	int n = strlen(a);
	int end = n - 1, start = 0, temp;

	while (start < n / 2)
	{
		temp = *(a + start);
		*(a + start) = *(a + end);
		*(a + end) = temp;
		start++;
		end--;
	}
}

/**
 * infinite_add - desc
 * @n1: pointer character
 * @n2: pointer character
 * @r: pointer character
 * @size_r: size integer
 * Return: character
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int n1Iter = strlen(n1) - 1, n2Iter = strlen(n2) - 1;
	int iterationSum = 0, n1Val = 0, n2Val = 0;
	int overflow = 0, rIterator = 0;

	if (n1Iter >= size_r || n2Iter >= size_r)
		return (0);

	while (n1Iter >= 0 || n2Iter >= 0 || overflow == 1)
	{
		if (n1Iter < 0)
			n1Val = 0;
		else
			n1Val = n1[n1Iter] - '0';
		if (n2Iter < 0)
			n2Val = 0;
		else
			n2Val = n2[n2Iter] - '0';
		iterationSum = n1Val + n2Val + overflow;
		if (iterationSum >= 10)
			overflow = 1;
		else
			overflow = 0;

		if (rIterator >= size_r - 1)
			return (0);
		r[rIterator++] = (iterationSum % 10) + '0';
		n1Iter++;
		n2Iter--;
	}

	if (rIterator == size_r)
		return (0);
	r[rIterator] = '\0';
	reverse_string(r);
	return (r);
}
