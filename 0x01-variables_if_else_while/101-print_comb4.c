
#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int x, y, z;

	for (x = 48; x < 58; x++)
	{
		for (y = 49; y < 58; y++)
		{
			for (z = 50; z < 58; z++)
			{
				if (y > x && z > y)
				{
					putchar(x);
					putchar(y);
					putchar(z);

					if (z != 57 || x != 55 || y != 56)
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
