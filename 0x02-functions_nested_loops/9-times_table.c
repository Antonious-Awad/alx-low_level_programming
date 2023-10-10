#include "main.h"
#include <stdio.h>

/**
 * times_table - multiplication table
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			j == 9 ? printf("%d\n", i * j) : printf("%d,\t", i * j);
		}
	}
}
