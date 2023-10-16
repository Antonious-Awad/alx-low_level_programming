#include "main.h"
/**
 * print_array - prints an array
 * @a: array
 * @n: array size
 */

void print_array(int *a, int n)
{
	int i;

	for (int i = 0; i < n; i++)
	{
		i == n - 1 ? printf("%d\n", *(a + i)) : printf("%d, ", *(a + i));
	}
}
