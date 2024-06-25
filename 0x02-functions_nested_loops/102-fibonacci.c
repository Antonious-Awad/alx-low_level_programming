
#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: always 0
 */

int main(void)
{
	long int f1 = 1, f2 = 2, i;
	long int next = f1 + f2;

	printf("%lu, %lu, ", f1, f2);
	for (i = 3; i <= 50; i++)
	{
		if (i == 50)
			printf("%lu\n", next);
		else
		{
			printf("%lu, ", next);
			f1 = f2;
			f2 = next;
			next = f1 + f2;
		}
		return (0);
	}
