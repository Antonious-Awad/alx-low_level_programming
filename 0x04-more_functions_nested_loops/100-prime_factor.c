#include <stdio.h>
#include <math.h>
/**
 * main - Entry Point
 * Return: Always 0
 */

int main(void)
{
	long num = 612852475143;
	int i;

	for (i = (int)sqrt(num); i > 2; i++)
	{
		if (num % i == 0)
		{
			printf("%d\n", i);
			break;
		}
	}

	return (0);
}
