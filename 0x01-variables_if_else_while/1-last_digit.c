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

	printf("Last digit of %d is %d and is ", n, n % 10);
	if (n % 10 < 6)
	{
		if (n % 10 == 0)
			printf("0\n");
		else
			printf("less than 6 and not 0\n");
	}
	else
		printf("greater than 5\n");
	return (0);
}
