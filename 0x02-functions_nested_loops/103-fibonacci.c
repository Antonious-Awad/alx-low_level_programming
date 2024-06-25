#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: always 0
 */

int main(void)
{
	unsigned long int f1 = 1, f2 = 2, i, sum = 0;
	unsigned long int next = f1 + f2;

	for (i = 3; i <= 50; i++)
	{
		if (f2 < 4000000 && !(f2 % 2))
		{
			sum += f2;
		}
		f1 = f2;
		f2 = next;
		next = f1 + f2;
	}
	printf("%lu\n", sum);
	return (0);
}
