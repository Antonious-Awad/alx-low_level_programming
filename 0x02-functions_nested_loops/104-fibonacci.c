#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: always 0
 */

int main(void)
{
	unsigned long int m = 1, n = 2, i;
	unsigned long int m1, m2, n1, n2;

	printf("%lu", m);
	for (i = 1; i < 91; i++)
	{
		printf(" ,%lu", n);
		n += m;
		m = n - m;
	}
	n1 = n / 1000000000;
	n2 = n % 1000000000;
	m1 = m / 1000000000;
	m2 = m % 1000000000;
	for (i = 92; i < 99; i++)
	{
		printf(", %lu", n1 + (n2 / 1000000000));
		printf("%lu", n2 % 1000000000);
		n1 += m1;
		m1 = n1 - m1;
		n2 += m2;
		m2 = n2 - m2;
	}
	printf("\n");
	return (0);
}
