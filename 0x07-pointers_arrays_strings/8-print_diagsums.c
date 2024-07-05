#include "main.h"
/**
 * print_diagsums - prints the sum of the two diagonals
 *  of a square matrix of integers.
 * @a: int pointer
 * @size: size of array
 */

void print_diagsums(int *a, int size)
{
	int i = 0;
	unsigned int sum1 = 0, sum2 = 0;
	int rightMod = size + 1, leftMod = size - 1;

	for (; i < size * size; i++)
	{
		if (i == 0)
		{
			sum1 += a[i];
			continue;
		}
		if (!(i % rightMod))
			sum1 += a[i];
		/*second condition to stop at first index of the last row*/
		if (!(i % leftMod) && i <= (size * size) - size)
			sum2 += a[i];
	}
	printf("%u, %u\n", sum1, sum2);
}
