#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int last_digit = n % 10;

	printf("Last digit of %d is %d and is ")
	if (n < 6)
	{
		if (n == 0)
			printf("less than 6 and is 0", n, last_digit);
		else
			printf("less than 6 and not 0", n, last_digit);
	} else
		printf("greater than 5", n, last_digit);
	return (0);
}