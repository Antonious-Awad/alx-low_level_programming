#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: size of triangle
 */
void print_triangle(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (j >= (size - 1) - i)
			{
				printf("#");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}