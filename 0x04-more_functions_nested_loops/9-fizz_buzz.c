#include "main.h"
/**
 * main - entry point
 *
 * Return: always true
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (!(i % 3))
		{
			printf("Fizz");
		}
		else if (!(i % 5))
		{
			printf("Buzz");
		}
		else if (!(i % 3) && !(i % 5))
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", i);
		}

		if (i != 100)
		{
			printf(" ");
		}
	}
	return (0);
}
